/*! \file
 * \brief Base class for all Messages.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_MESSAGE_H
#define MESSAGE_MESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief The main Message struct.
 *
 * This structure represents a message coming from a device.
 */
struct Message
{
    MessageType  MessageType;  //!< The Message Type of the Message.
    MessageGroup MessageGroup; //!< The Message Group of the Message.
    bool         Error;        //!< If an error occurred, this is True.
    int          ErrorCode;    //!< Error Code, valid when Error == true.
    uint64_t     SerialNumber; //!< Unique serial number for this message.
    void     ( * Destructor)(Message * self); //!< Destructor.
};

/*!
 * \brief Factory creator for Messages.
 *
 * Creates and returns the Message specified by MessageType and MessageGroup.
 * \n\n
 * On failure, errno is set.
 * - ::EOUTOFMEMORY         - Out of memory.
 * - ::EUNKNOWNMESSAGETYPE  - Unknown Message Type.
 * - ::EUNKNOWNMESSAGEGROUP - Unknown Message Group.
 * - ::EINVALIDSIZE - Invalid size.
 *
 * \param messageType The MessageType of the Message.
 * \param messageGroup The MessageGroup of the Message.
 *
 * \return A pointer to the created Message.
 */
DLLEXTERNAL Message * Message_GetInstance (MessageType messageType,
                                           MessageGroup messageGroup);

/*!
 * \brief Internal constructor for Message.
 *
 * Do not use this constructor, always use the factory creator.
 * \n\n
 * On failure, errno is set.
 * - ::EOUTOFMEMORY - Out of memory.
 * - ::EINVALIDSIZE - Invalid size.
 *
 */
DLLINTERNAL Message * Message_New (MessageGroup messageGroup, uint32_t size);

// Barr 4.2d violation and exclusion.
#if defined(USE_ENABLEMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <EnableMessage.h>
#endif

#if defined(USE_DISABLEMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <DisableMessage.h>
#endif

#if defined(USE_OPERATIONMODESMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <OperationModesMessage.h>
#endif

#if defined(USE_RESOLUTIONMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <ResolutionMessage.h>
#endif

#if defined(USE_TOUCHACTIVEAREAMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <TouchActiveAreaMessage.h>
#endif

#if defined(USE_TOUCHMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <TouchMessage.h>
#endif

#if defined(USE_NUMBEROFTRACKEDOBJECTSMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <NumberOfTrackedObjectsMessage.h>
#endif

#if defined(USE_FINGERFREQUENCYMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <FingerFrequencyMessage.h>
#endif

#if defined(USE_IDLEFREQUENCYMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <IdleFrequencyMessage.h>
#endif

#if defined(USE_DETECTEDOBJECTSIZERESTRICTIONMESSAGE) || !defined(COMPILING_ZFORCE_SDK)
    #include <DetectedObjectSizeRestrictionMessage.h>
#endif

#if defined(USE_REVERSETOUCHACTIVEAREAMESSAGE) || !defined (COMPILING_ZFORCE_SDK)
    #include <ReverseTouchActiveAreaMessage.h>
#endif

#if defined(USE_MCUUNIQUEIDENTIFIERMESSAGE) || !defined (COMPILING_ZFORCE_SDK)
    #include <McuUniqueIdentifierMessage.h>
#endif

#if defined(USE_OFFSETMESSAGE) || !defined (COMPILING_ZFORCE_SDK)
    #include <OffsetMessage.h>
#endif

#if defined(USE_HIDDISPLAYSIZEMESSAGE) || !defined (COMPILING_ZFORCE_SDK)
    #include <HidDisplaySizeMessage.h>
#endif

#endif // MESSAGE_MESSAGE_H

