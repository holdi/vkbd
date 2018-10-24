/*! \file
 * \brief An IdleFrequencyMessage.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_IDLEFREQUENCYMESSAGE_IDLEFREQUENCYMESSAGE_H
#define MESSAGE_IDLEFREQUENCYMESSAGE_IDLEFREQUENCYMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents an idle frequency message.
 *
 * This structure represents a message containing idle frequency.
 */
struct IdleFrequencyMessage
{
    Message;            //!< Base Message.
    uint32_t Frequency; //!< Frequency.
};

/*!
 * \brief Internal constructor for IdleFrequencyMessage.
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
 * \return Pointer to IdleFrequencyMessage.
 */
DLLINTERNAL IdleFrequencyMessage * IdleFrequencyMessage_New
                                         (MessageGroup messageGroup,
                                          uint32_t size);

#endif // MESSAGE_IDLEFREQUENCYMESSAGE_IDLEFREQUENCYMESSAGE_H

