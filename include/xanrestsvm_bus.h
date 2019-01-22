/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#ifndef XANRESTSVM_BUS_H
#define XANRESTSVM_BUS_H

#if (defined __windows__)
#pragma warning(push)
#pragma warning(disable : 4290)
#endif

#include <algorithm>

/// Structure that lists the AD of bus.
struct TGAPPCLILIBSPC XANRESTSVMBUS_AD
{

};



/// XANRESTSVM_BUS autobus class.
class TGAPPCLILIBSPC XANRESTSVM_BUS : public TGRESTSVM_BUS
{

  private:

    XANRESTSVMBUS_AD  mc_ad;  ///< Instance of the bus AD structure.
    XANRESTSVMBUS_AD *mcp_ad; ///< Pointer to the bus AD structure.
    byte4 m4_changed;     ///< Change indicator.

  public :

    /// @brief Constructor.
    /// @param[in] pcr_dic Reference to Tango dictionary used.
    /// @param[in] pcp_bus Pointer to default bus.
    XANRESTSVM_BUS(TG_DIC &pcr_dic = gc_dicInt, TG_BUS *pcp_bus = 0);

    /// @brief Destructor.
    virtual ~XANRESTSVM_BUS() {};

    /// @brief Returns the bus pointer.
    /// @return Pointer to internal bus.
    virtual TG_BUS *bus();

    /// @brief Copies the bus pointer.
    /// @param[in] pcp_bus Bus pointer to copy from.
    /// @return Pointer to internal bus.
    virtual TG_BUS *bus(TG_BUS *pcp_bus);

    /// @brief Points at a given bus.
    /// @param[in] pcp_bus Bus pointer to point at.
    /// @return Pointer to internal bus.
    virtual TG_BUS *pointAt(TG_BUS *pcp_bus);

    /// @brief Returns the bus AD structure.
    /// @return Const pointer to the bus AD structure.
    const XANRESTSVMBUS_AD *getAd4s() const { return mcp_ad; }

    /// @brief Initializes the bus flags.
    void initFlags();

    /*****************************************
     * Declaration of variables and access   *
     * methods                               *
     *****************************************/


};


#if (defined __windows__)
#pragma warning(pop)
#endif

#endif

