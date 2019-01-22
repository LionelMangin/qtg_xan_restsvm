/*
 * xan_restsvm product was generated on 2019/01/18 at 15:36:01 with pro_tmp version V03_03 and bin tools version 3.16.0-rc2 .
 * This file was generated on 2019/01/18 at 15:36:01 with pro_tmp version V03_03 and bin tools version 3.16.0-rc2 .
 */

#ifndef XANRESTSVM_CFG_H
#define XANRESTSVM_CFG_H

#if (defined __windows__)
#pragma warning(push)
#pragma warning(disable : 4290)
#endif

#include <algorithm>



/// XANRESTSVM_CFG configuration class.
class TGAPPCLILIBSPC XANRESTSVM_CFG : public TGRESTSVM_CFG
{
  public:

    /// @brief Reads configuration from a Tango bus file.
    /// @param[in] p4_unic 0: loads this object configuration only, 1: invokes parent class function.
    void config(byte4 p4_unic);

    /// @brief Constructor.
    /// @param[in] pap_tangoId Tango application Id.
#ifndef __TWIST__
    XANRESTSVM_CFG(byte1* pap_tangoId);
#else
    XANRESTSVM_CFG(const char* pap_tangoId);
#endif

    /*****************************************
     * Declaration of variables and access   *
     * methods                               *
     *****************************************/

    
  protected:

    string ms_instanceId; ///< instanceId.

  public:

    /// @brief Gets the configuration field value.
    /// @return instanceId value.
    string &instanceId()
    {
      return ms_instanceId;
    }

};

#if (defined __windows__)
#pragma warning(pop)
#endif

#endif

