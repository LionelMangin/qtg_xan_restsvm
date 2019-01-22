/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#include "xanrestsvm_general.h"

DECLARE_MODULE_CLI("XAN_RESTSVM", "$Name$", XAN_RESTSVM, "TG_CLIAPP,TG_RESTSVM");

/// @brief Constructor of the instance of XAN_RESTSVM.
/// @param[in] pap_tangoId Tango client application identifier.
/// @param[in] pcp_assCom Pointer on communication channel for dispatcher dialogs.
/// @param[in] pap_configId  Tango configuration identifier.
#ifndef __TWIST__
XAN_RESTSVM::XAN_RESTSVM(byte1* pap_tangoId, TG_COM* pcp_assCom, byte1* pap_configId) :
  TG_RESTSVM(pap_tangoId, new XANRESTSVM_CFG(pap_configId==NULL ? pap_tangoId : pap_configId), pcp_assCom, new XANRESTSVM_BUS(),  new XANRESTSVM_CTX()  , new  XANRESTSVM_SES (1),
    DB_CONSTRUCTOR)
#else
XAN_RESTSVM::XAN_RESTSVM(const char* pap_tangoId, TG_COM* pcp_assCom, const char* pap_configId) :
  TG_RESTSVM(pap_tangoId, new XANRESTSVM_CFG(pap_configId==NULL ? pap_tangoId : pap_configId), pcp_assCom, new XANRESTSVM_BUS(),  new XANRESTSVM_CTX()  , new  XANRESTSVM_SES (1),
    DB_CONSTRUCTOR)
#endif
{
  const char* ka_funcName = "XAN_RESTSVM::XAN_RESTSVM";

  try
  {
    // init pointers from father
    mcp_cfg = static_cast<XANRESTSVM_CFG *>(TG_RESTSVM::mcp_cfg);
    mcp_bus = static_cast<XANRESTSVM_BUS *>(TG_RESTSVM::mcp_bus);
    mcp_ctx = static_cast<XANRESTSVM_CTX *>(TG_RESTSVM::mcp_ctx);
    mcp_ses = static_cast<XANRESTSVM_SES *>(TG_RESTSVM::mcp_ses);

#ifdef TGTABLE_IN_CTXSES
    setCtxLineTables();
    setSesLineTables();
#endif

    construction();

    trace(tg_traceProTrc,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);
  }
  catch(TG_EXCEPSYS &lc_excep)
  {
    logExceptSys(lc_excep);
    trace(tg_traceProErr,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0, &lc_excep);
    throw;
  }
  catch(TG_EXCEPAPP &lc_excep)
  {
    logExceptApp(lc_excep);
    trace(tg_traceProErr,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0, &lc_excep);
    throw;
  }
  catch(TG_EXCEPDB &lc_excep)
  {
    logExceptDb(lc_excep);
    trace(tg_traceProErr,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0, &lc_excep);
    throw;
  }
  catch(TG_EXCEPBUS &lc_excep)
  {
    logExceptBus(lc_excep);
    trace(tg_traceProErr,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0, &lc_excep);
    throw;
  }
}

/// @brief Constructor of the instance of XAN_RESTSVM.
/// @param[in] pap_tangoId Tango client application identifier.
/// @param[in] pcp_cfg Pointer to the generated configuration class object.
/// @param[in] pcp_assCom Pointer on communication channel for dispatcher dialogs.
/// @param[in] pcp_bus Pointer to the generated autobus class object.
/// @param[in] pcp_ctx Pointer to the generated request context class object.
/// @param[in] pcp_ses Pointer to the generated session context class object.
/// @param[in] pcp_db  Pointer to the database class object, NULL if dynamically linked.
#ifndef __TWIST__
XAN_RESTSVM::XAN_RESTSVM(byte1* pap_tangoId, XANRESTSVM_CFG* pcp_cfg, TG_COM* pcp_assCom, XANRESTSVM_BUS* pcp_bus, XANRESTSVM_CTX* pcp_ctx, XANRESTSVM_SES* pcp_ses, DB_MAIN *pcp_db) :
  TG_RESTSVM(pap_tangoId, pcp_cfg, pcp_assCom, pcp_bus, pcp_ctx, pcp_ses, pcp_db)
#else
XAN_RESTSVM::XAN_RESTSVM(const char* pap_tangoId, XANRESTSVM_CFG* pcp_cfg, TG_COM* pcp_assCom, XANRESTSVM_BUS* pcp_bus, XANRESTSVM_CTX* pcp_ctx, XANRESTSVM_SES* pcp_ses, DB_MAIN *pcp_db) :
  TG_RESTSVM(pap_tangoId, pcp_cfg, pcp_assCom, pcp_bus, pcp_ctx, pcp_ses, pcp_db)
#endif
{
  const char*      ka_funcName = "XAN_RESTSVM::XAN_RESTSVM";

  try
  {
    // init pointers from father
    mcp_cfg = static_cast<XANRESTSVM_CFG *>(TG_RESTSVM::mcp_cfg);
    mcp_bus = static_cast<XANRESTSVM_BUS *>(TG_RESTSVM::mcp_bus);
    mcp_ctx = static_cast<XANRESTSVM_CTX *>(TG_RESTSVM::mcp_ctx);
    mcp_ses = static_cast<XANRESTSVM_SES *>(TG_RESTSVM::mcp_ses);

#ifdef TGTABLE_IN_CTXSES
    setCtxLineTables();
    setSesLineTables();
#endif

    construction();

    trace(tg_traceProTrc,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);
  }
  catch(TG_EXCEPSYS &lc_excep)
  {
    logExceptSys(lc_excep);
    trace(tg_traceProErr,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0, &lc_excep);
    throw;
  }
  catch(TG_EXCEPAPP &lc_excep)
  {
    logExceptApp(lc_excep);
    trace(tg_traceProErr,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0, &lc_excep);
    throw;
  }
  catch(TG_EXCEPDB &lc_excep)
  {
    logExceptDb(lc_excep);
    trace(tg_traceProErr,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0, &lc_excep);
    throw;
  }
  catch(TG_EXCEPBUS &lc_excep)
  {
    logExceptBus(lc_excep);
    trace(tg_traceProErr,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0, &lc_excep);
    throw;
  }
}

/// @brief Destructor
XAN_RESTSVM::~XAN_RESTSVM()
{
  // Free elements specific to the object here.
  // Warning: mcp_bus, mcp_cfg, mcp_ses and mcp_ctx are freed in ~TG_RESTSVM. Do not free them here.
};

/// @brief Provides the version number associated to XAN_RESTSVM class.
void XAN_RESTSVM::version()
{
  const char * l1p_version = "#(@) XAN_RESTSVM $Name$";

  printVersion(l1p_version);

  cout << " <- ";
  TG_RESTSVM::version();
}

