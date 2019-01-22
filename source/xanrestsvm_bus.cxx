/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#include "xanrestsvm_general.h"
#include "xanrestsvm_bus.h"



XANRESTSVM_BUS::XANRESTSVM_BUS(TG_DIC &pcr_dic, TG_BUS *pcp_bus) : TGRESTSVM_BUS(pcr_dic, pcp_bus) , mcp_ad(&mc_ad) 
{
  const char*      ka_funcName = "XANRESTSVM_BUS::XANRESTSVM_BUS";
  m1p_nomAutobus = "XANRESTSVM_BUS";
  std::list<std::string> lc_errorFields;



  if (!lc_errorFields.empty())
  {
    std::string lz_listBus;
    std::cout << "One or several missing fields" << std::endl;
    for (std::list<std::string>::const_iterator li_missingField = lc_errorFields.begin();
        li_missingField != lc_errorFields.end();
        ++li_missingField)
    {
      std::cout << *li_missingField << std::endl;
      lz_listBus.append(" ");
      lz_listBus.append(*li_missingField);
    }
    throw(missing_field_err(__FILE__, ka_funcName, __LINE__, m1p_nomAutobus , lz_listBus));
  }
  bus(pcp_bus);
}

void XANRESTSVM_BUS::initFlags()
{
  TGRESTSVM_BUS::initFlags();

}

TG_BUS *XANRESTSVM_BUS::bus(TG_BUS *pcp_bus)
{
  if (pcp_bus)
    mc_bus = *pcp_bus;
  else
    mc_bus.reset();
  mcp_bus = &mc_bus;
  m4_changed = 0;
  initFlags();
  return mcp_bus;
}

TG_BUS *XANRESTSVM_BUS::pointAt(TG_BUS *pcp_bus)
{
  if (pcp_bus)
    mcp_bus = pcp_bus;
  else
  {
    mc_bus.reset();
    mcp_bus = &mc_bus;
  }
  m4_changed = 0;
  initFlags();
  return mcp_bus;
}



TG_BUS * XANRESTSVM_BUS::bus()
{


  return TGRESTSVM_BUS::bus();
}



