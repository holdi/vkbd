/*! \file
 * \brief A FingerFrequencyMessage.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_FINGERFREQUENCYMESSAGE_FINGERFREQUENCYMESSAGE_H
#define MESSAGE_FINGERFREQUENCYMESSAGE_FINGERFREQUENCYMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a finger frequency message.
 *
 * This structure represents a message containing finger frequency.
 */
struct FingerFrequencyMessage
{
    Message;            //!< Base Message.
    uint32_t Frequency; //!< Frequency.
};

/*!
 * \brief Internal constructor for FingerFrequencyMessage.
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
 * \return Pointer to FingerFrequencyMessage.
 */
DLLINTERNAL FingerFrequencyMessage * FingerFrequencyMessage_New
                                         (MessageGroup messageGroup,
                                          uint32_t size);

#endif // MESSAGE_FINGERFREQUENCYMESSAGE_FINGERFREQUENCYMESSAGE_H

