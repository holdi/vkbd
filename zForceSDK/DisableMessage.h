/*! \file
 * \brief A DisableMessage that disables a Device.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_DISABLEMESSAGE_DISABLEMESSAGE_H
#define MESSAGE_DISABLEMESSAGE_DISABLEMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a disable message.
 *
 * This structure represents a message which indicates if 
 * the scanning on a device is turned off.
 */
struct DisableMessage
{
    Message;       //!< Base Message.
    bool Disabled; //!< Is Device Disabled.
};

/*!
 * \brief Internal constructor for DisableMessage.
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
 * \return Pointer to DisableMessage.
 */
DLLINTERNAL DisableMessage * DisableMessage_New (MessageGroup messageGroup,
                                                 uint32_t size);

#endif // MESSAGE_DISABLEMESSAGE_DISABLEMESSAGE_H

