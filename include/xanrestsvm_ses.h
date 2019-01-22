/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#ifndef XANRESTSVM_SES_H
#define XANRESTSVM_SES_H

/// Structure that lists the session bus elements.
struct TGAPPCLILIBSPC s_xanrestsvmses : public s_tgrestsvmses
{


#ifdef TGTABLE_IN_CTXSES
  /// @brief Default constructor.
  s_xanrestsvmses() {};

  /// @brief Constructor with session map table.
  /// @param[in] pmr_tableList Reference to session table list map.
  s_xanrestsvmses(map<string, tg_table*> &pmr_tableList)
  {

  }
#endif
};

/// XANRESTSVM_CTX session bus class.
class TGAPPCLILIBSPC XANRESTSVM_SES : public TGRESTSVM_SES
{
  public :

    /// @brief Constructor.
    /// @param[in] p4_type Deprecated parameter.
    XANRESTSVM_SES(byte4 p4_type =0 );

    /// @brief Destructor.
    virtual ~XANRESTSVM_SES();

    /// @brief Initializes a session structure and points to it.
    ///        Allocates a new structure if the pointer is NULL.
    /// @param[in] psp_ses Pointer to client session.
    virtual void init(s_tgclises * const psp_ses=0);

    /// @brief Deallocates the session structure.
    virtual void destroy();

#ifdef TGTABLE_IN_CTXSES
    /// @brief Assigns the session table list.
    /// @param[in] pmr_tableList Map of session tables.
    virtual void setTableList(map<string, tg_table*> &pmr_tableList);

  protected:
    map<string, tg_table*> mm_tableList; ///< Map of session tables.
#endif

    /*****************************************
     * Declaration of variables and access   *
     * methods                               *
     *****************************************/


};

#endif

