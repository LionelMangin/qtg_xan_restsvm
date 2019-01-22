/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#ifndef XANRESTSVM_CTX_H
#define XANRESTSVM_CTX_H

/// Structure that lists the context bus elements.
struct TGAPPCLILIBSPC s_xanrestsvmctx : public s_tgrestsvmctx
{



#ifdef TGTABLE_IN_CTXSES
  /// @brief Default constructor.
  s_xanrestsvmctx() {};

  /// @brief Constructor with context map table.
  /// @param[in] pmr_tableList Reference to context table list map.
  s_xanrestsvmctx(std::map<string, tg_table*> &pmr_tableList)
  {

  }
#endif
};

/// XANRESTSVM_CTX context bus class.
class TGAPPCLILIBSPC XANRESTSVM_CTX : public TGRESTSVM_CTX
{
  public :

    /// @brief Constructor.
    XANRESTSVM_CTX();

    /// @brief Destructor.
    virtual ~XANRESTSVM_CTX();

    /// @brief Initializes a context structure and points to it.
    ///        Allocates a new structure if the pointer is NULL.
    /// @param[in] psp_ctx Pointer to client context.
    virtual void init(s_tgclictx * const psp_ctx=0);

    /// @brief Deallocates the context structure.
    virtual void destroy();

#ifdef TGTABLE_IN_CTXSES
    /// @brief Assigns the context table list.
    /// @param[in] pmr_tableList Map of context tables.
    virtual void setTableList(std::map<string, tg_table*> &pmr_tableList);

  protected:
    std::map<string, tg_table*> mm_tableList; ///< Map of context tables.
#endif

    /*****************************************
     * Declaration of variables and access   *
     * methods                               *
     *****************************************/


};

#endif

