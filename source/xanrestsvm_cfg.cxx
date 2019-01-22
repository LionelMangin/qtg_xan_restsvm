/*
 * xan_restsvm product was generated on 2019/01/18 at 15:36:01 with pro_tmp version V03_03 and bin tools version 3.16.0-rc2 .
 * This file was generated on 2019/01/18 at 15:36:01 with pro_tmp version V03_03 and bin tools version 3.16.0-rc2 .
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

    {
    string kz_qui = "instanceId";
    byte2 l2_adDummy = gc_dicInt.getAd4Field(kz_qui);
    if (!(l2_adDummy != k4_no_adField && mc_bus.get(l2_adDummy, ms_instanceId)))
    {
      string lz_type, lz_value;
      if (mc_bus.getVField(kz_qui, lz_type, lz_value))
      {
        TG_FIELD lc_field(k4_adVField, byte4(lz_value.size()), k1_fTyp_asc, (byte1 *)lz_value.c_str());
        try
        {
          if (lz_type.size() > 0 && lz_type != "A")
            lc_field = lc_field.convert(lz_type[0]);
          lc_field.value(ms_instanceId);
        }
        catch(/* const * */ TG_EXCEPBUS &lcr_except)
        {
          // Cannot catch const because getBus is not const
          // All useful informations for the exceptions are stored in the bus
          TG_BUS lc_bus(lcr_except.getBus());

          lc_bus.set( k4_adFieldName, kz_qui);
          throw TG_EXCEPBUS(lcr_except.getFile(), lcr_except.getFuncName(), lcr_except.getLine(), lc_bus);
        }
      }
      else
        ms_instanceId = "0";
    }
  }


}


