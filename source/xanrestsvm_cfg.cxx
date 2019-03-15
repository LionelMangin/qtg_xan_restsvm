/*
 * xan_restsvm product was generated on 2019/03/15 at 13:32:43 with pro_tmp version V03_03 and bin tools version 3.16.1-rc1 .
 * This file was generated on 2019/03/15 at 13:32:43 with pro_tmp version V03_03 and bin tools version 3.16.1-rc1 .
 */

#include "xanrestsvm_general.h"

#if (defined __windows__)
#pragma warning(push)
#pragma warning(disable : 4290)
#endif

#ifndef __TWIST__
XANRESTSVM_CFG::XANRESTSVM_CFG(byte1* pap_tangoId) : TGRESTSVM_CFG(pap_tangoId)
#else
XANRESTSVM_CFG::XANRESTSVM_CFG(const char* pap_tangoId) : TGRESTSVM_CFG(pap_tangoId)
#endif
{
  config(1);
}

#if (defined __windows__)
#pragma warning(pop)
#endif

void XANRESTSVM_CFG::config(byte4 p4_unic)
{
  const char*      ka_funcName = "XANRESTSVM_CFG::config";
  trace(tg_traceProCfg, tg_traceMskNone, ka_funcName, &mc_bus);

  if (!p4_unic)
    TGRESTSVM_CFG::config(0);

  
}


