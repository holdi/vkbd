/*! \file
 * \brief Implementation of Neonode's ASN.1 based protocol.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef PROTOCOL_ASN1PROTOCOL_ASN1PROTOCOL_H
#define PROTOCOL_ASN1PROTOCOL_ASN1PROTOCOL_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

//! \sa Asn1InitializationStatus
typedef enum Asn1InitializationStatus Asn1InitializationStatus;
//! Enum describing if initialization messages has been sent and received.
enum Asn1InitializationStatus
{
    Asn1Uninitialized = 0, //!< Initialization sequence not completed.
    Asn1Initialized        //!< Initialization sequence completed.
};

//! \sa Asn1Protocol
typedef struct Asn1Protocol Asn1Protocol;
/*!
 * \brief This structure represents the ASN.1 protocol class.
 */
struct Asn1Protocol
{
    Protocol;                                      //!< Inherited members.
    Asn1InitializationStatus InitializationStatus; //!< Initialization status.
    void                   * Private;              //!< Private members.
};

// Exported Functions (prefixed with module name and underscore)

/*!
 * \brief Adds the ASN.1 Protocol to the ProtocolTable.
 *
 * Upon error the errno variable is set as follows:
 * - ::EALREADYADDED - The ASN.1 protocol has already been added.
 * - ::EOUTOFMEMORY - The memory used to store protocol details has been
 *                    exhausted.
 * - ::EMUTEXLOCKFAILED - We couldn't lock a mutex we need for an internal
 *                        critical section. This should not happen.
 * - ::EBADMUTEX - We tried to use a mutex internally but it wasn't a valid
 *                 mutex. This should not happen.
 * - ::EALREADYINITIALIZED - Protocol already initialized.
 *
 * \return True upon success, otherwise return false in which case see errno.
 */
DLLINTERNAL bool Asn1Protocol_Initialize (void);

#endif // PROTOCOL_ASN1PROTOCOL_ASN1PROTOCOL_H

