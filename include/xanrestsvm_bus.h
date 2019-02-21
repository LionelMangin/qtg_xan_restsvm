/*
 * xan_restsvm product was generated on 2019/02/20 at 14:31:29 with pro_tmp version V03_03 and bin tools version 3.16.0 .
 * This file was generated on 2019/02/20 at 14:31:29 with pro_tmp version V03_03 and bin tools version 3.16.0 .
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
  byte4 app_id; ///< AD reference for app_id

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

  protected:

    byte4 m4_app_id_flag; ///< ms_app_id status flag.
    string ms_app_id; ///< app_id.

  public:
    
    /// @brief Returns the name of the field.
    /// @return Bus field name.
    const char *nomapp_id() const;

    /// @brief Gets the value of the field.
    /// @return Value of app_id.
    const string & app_id();

    /// @brief Checks presence of the field in Tango bus.
    /// @return 0 if absent, 1 if present.
    byte4 isapp_id();

    /// @brief Deletes the field from Tango bus.
    void delapp_id();

    /// @brief Sets a value to the field.
    /// @param[in] pc_in (Const) reference of the value to set.
    /// @return Reference to bus field value.
    inline string & app_id(const string &pc_in)
    {
      m4_changed = 1;
      m4_app_id_flag = k4_flagMod;
      
      return ms_app_id = pc_in;
    }


};


#if (defined __windows__)
#pragma warning(pop)
#endif

#endif

