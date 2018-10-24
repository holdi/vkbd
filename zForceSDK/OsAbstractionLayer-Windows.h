/*! \file
 * \copyright
 * COPYRIGHT NOTICE: (c) 2018 Neonode Technologies AB. All rights reserved.
 *
 * \sa zForce.h
 */

#ifndef ZFORCE_WINDOWS_OSABSTRACTIONLAYER_WINDOWS_H
#define ZFORCE_WINDOWS_OSABSTRACTIONLAYER_WINDOWS_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief Windows Specific Initialization of OsAbstractionLayer.
 */
DLLINTERNAL bool        OsAbstractionLayerOs_Initialize(
                            OsAbstractionLayer * osAbstractionLayer,
                            OsAbstractionLayer * osAbstractionLayerOsSpecific);

#endif // ZFORCE_WINDOWS_OSABSTRACTIONLAYER_WINDOWS_H
