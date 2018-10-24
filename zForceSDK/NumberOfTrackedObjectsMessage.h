/*! \file
 * \brief A NumberOfTrackedObjectsMessage.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_NUMBEROFTRACKEDOBJECTSMESSAGE_NUMBEROFTRACKEDOBJECTSMESSAGE_H
#define MESSAGE_NUMBEROFTRACKEDOBJECTSMESSAGE_NUMBEROFTRACKEDOBJECTSMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a number of tracked objects message.
 *
 * This structure represents a message which indicates
 * the number of objects to be tracked by a device.
 */
struct NumberOfTrackedObjectsMessage
{
    Message;                          //!< Base Message.
    uint32_t NumberOfTrackedObjects;  //!< Tracked object count.
};

/*!
 * \brief Internal constructor for NumberOfTrackedObjectsMessage.
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
 * \return Pointer to NumberOfTrackedObjectsMessage.
 */
DLLINTERNAL NumberOfTrackedObjectsMessage *
    NumberOfTrackedObjectsMessage_New (MessageGroup messageGroup,
                                       uint32_t size);

#endif // MESSAGE_NUMBEROFTRACKEDOBJECTSMESSAGE_NUMBEROFTRACKEDOBJECTSMESSAGE_H

