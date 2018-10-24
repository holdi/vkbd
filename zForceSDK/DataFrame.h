/*! \file
 * \brief DataFrame base.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef DATAFRAME_DATAFRAME_H
#define DATAFRAME_DATAFRAME_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif
/*!
 * \sa struct DataFrame
 */
typedef struct DataFrame DataFrame;
/*!
 * \brief Struct containing the DataFrame information.
 *
 * The DataFrame is the actual raw data transferred between the Transport Layer
 * and Protocol Layer.
 * The DataFrame is encoded and decoded by the Protocol, protocol transform
 * DataFrame(s) into Message(s) and viceversa.
 */
struct DataFrame
{
    /*!
    * \brief
    * A string pointer to the type of DataFrame.
    * For now the type is either streaming or not streaming,
    * in the future we can have more types.
    */
    char       * DataFrameType;
    /*!
     * \brief
     * A connection pointer is needed to associate the DataFrame with the
     * connection.
     */
    Connection * Connection;
    /*!
     * \brief Relative timeout in MilliSeconds.
     */
    uint64_t     RelativeTimeoutMilliSeconds;
    /*!
     * \brief Destructor for DataFrame, frees up DataFrames allocated memory.
     *
     * \param self Pointer to the struct itself.
     *
     * \return Returns nothing.
     */
    void ( * Destructor) (DataFrame * self);
};

#endif // DATAFRAME_DATAFRAME_H
