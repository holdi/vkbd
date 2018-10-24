/*! \file
 * \brief A TouchActiveAreaMessage contains the Touch Active Area of a Device.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_TOUCHACTIVEAREAMESSAGE_TOUCHACTIVEAREAMESSAGE_H
#define MESSAGE_TOUCHACTIVEAREAMESSAGE_TOUCHACTIVEAREAMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a touch active area message.
 *
 * This structure represents a message which indicates what touch active area
 * a device uses.
 */
struct TouchActiveAreaMessage
{
    Message;         //!< Base Message.
    TouchActiveArea; //!< Touch Active Area.
};

/*!
 * \brief Internal constructor for TouchActiveAreaMessage.
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
 * \return Pointer to TouchActiveAreaMessage.
 */
DLLINTERNAL TouchActiveAreaMessage * TouchActiveAreaMessage_New
                                         (MessageGroup messageGroup,
                                          uint32_t size);

#endif // MESSAGE_TOUCHACTIVEAREAMESSAGE_TOUCHACTIVEAREAMESSAGE_H

