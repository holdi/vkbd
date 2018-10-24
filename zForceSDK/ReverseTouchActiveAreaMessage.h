/*! \file
 * \brief A ReverseTouchActiveAreaMessage contains the Touch Active Area of a Device.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2018 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_REVERSETOUCHACTIVEAREAMESSAGE_REVERSETOUCHACTIVEAREAMESSAGE_H
#define MESSAGE_REVERSETOUCHACTIVEAREAMESSAGE_REVERSETOUCHACTIVEAREAMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a reverse touch active area message.
 *
 * This structure represents a message which indicates what reverse touch active area
 * a device uses.
 */
struct ReverseTouchActiveAreaMessage
{
    Message;                //!< Base Message.
    ReverseTouchActiveArea; //!< Reverse Touch Active Area.
};

/*!
 * \brief Internal constructor for ReverseTouchActiveAreaMessage.
 *
 * Do not use this, but use the Factory creator instead.
 * \n\n
 * On failure, see errno.
 * - ::EOUTOFMEMORY - Out of memory.
 * - ::EINVALIDSIZE - Invalid size.
 *
 * \param messageGroup MessageGroup of Message.
 * \param size If this is used as a base class for another class, set size to
 *             non-zero.
 *
 * \return Pointer to ReverseTouchActiveAreaMessage.
 */
DLLINTERNAL ReverseTouchActiveAreaMessage * ReverseTouchActiveAreaMessage_New
                                         (MessageGroup messageGroup,
                                          uint32_t size);

#endif // MESSAGE_REVERSETOUCHACTIVEAREAMESSAGE_REVERSETOUCHACTIVEAREAMESSAGE_H

