/*! \file
 * \brief An EnableMessage that enables a Device.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_ENABLEMESSAGE_ENABLEMESSAGE_H
#define MESSAGE_ENABLEMESSAGE_ENABLEMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents an enable message.
 *
 * This structure represents a message which indicates if
 * the scanning on a device is turned on and if it is continous or 
 * has a defined number of messages to send set.
 */
struct EnableMessage
{
    Message;                   //!< Base Message.
    bool     Enabled;          //!< Is Device Enabled.
    bool     ContinuousMode;   //!< Is Device set to Continuous Mode.
    uint32_t NumberOfMessages; //!< Number Of Messages.
};

/*!
 * \brief Internal constructor for EnableMessage.
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
 * \return Pointer to EnableMessage.
 */
DLLINTERNAL EnableMessage * EnableMessage_New (MessageGroup messageGroup,
                                               uint32_t size);

#endif // MESSAGE_ENABLEMESSAGE_ENABLEMESSAGE_H

