/*
 * xan_restsvm product was generated on 2019/02/20 at 14:31:29 with pro_tmp version V03_03 and bin tools version 3.16.0 .
 * This file was generated on 2019/02/20 at 14:31:29 with pro_tmp version V03_03 and bin tools version 3.16.0 .
 */

#include "xanrestsvm_general.h"
#include "xanrestsvm_bus.h"



XANRESTSVM_BUS::XANRESTSVM_BUS(TG_DIC &pcr_dic, TG_BUS *pcp_bus) : TGRESTSVM_BUS(pcr_dic, pcp_bus) , mcp_ad(&mc_ad) 
{
  const char*      ka_funcName = "XANRESTSVM_BUS::XANRESTSVM_BUS";
  m1p_nomAutobus = "XANRESTSVM_BUS";
  std::list<std::string> lc_errorFields;

  if ((mcp_ad->app_id = pcr_dic.getAd4Field("app_id")) == k4_no_adField)
  {
    cout << "Field " << "app_id" << " is not in dictionary." << endl;
    lc_errorFields.push_back("app_id");
  }


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
  m4_app_id_flag = k4_flagBus;

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
  if (m4_app_id_flag == k4_flagMod)
  {
    
    {
      
      mcp_bus->setDirect(mcp_ad->app_id, (byte1 *)(ms_app_id.data()), byte4(ms_app_id.size()), k1_fTyp_asc);
      m4_app_id_flag = k4_flagVar;
    }
  }


  return TGRESTSVM_BUS::bus();
}

const string & XANRESTSVM_BUS ::app_id()
{
  if (m4_app_id_flag == k4_flagBus)
  {
    if (!mcp_bus->get(mcp_ad->app_id, ms_app_id))
      throw(missing_field_err(__FILE__, m1p_nomAutobus, __LINE__, m1p_nomAutobus, itos(mcp_ad->app_id)));
    m4_app_id_flag = k4_flagVar;
  }
  return ms_app_id;
}
void XANRESTSVM_BUS ::delapp_id()
{
  mcp_bus->del(mcp_ad->app_id);
  m4_app_id_flag = k4_flagBus;
  m4_changed = 1;
  
}

byte4 XANRESTSVM_BUS ::isapp_id()
{
  if (m4_app_id_flag == k4_flagBus)
    return (NULL != mcp_bus->find(mcp_ad->app_id));
  return 1;
}

const char * XANRESTSVM_BUS ::nomapp_id() const
{
  return "app_id";
}


