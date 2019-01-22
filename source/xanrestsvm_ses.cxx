/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#include "xanrestsvm_general.h"

XANRESTSVM_SES::XANRESTSVM_SES(byte4 p4_type)
{
  m1p_nomSes = "XANRESTSVM_SES";
}

XANRESTSVM_SES::~XANRESTSVM_SES()
{

}

void XANRESTSVM_SES::init(s_tgclises * const psp_ses)
{
  // current pointer is null or not in the list
  if (!psp_ses)
  {
#ifdef TGTABLE_IN_CTXSES
    msp_ses = new s_xanrestsvmses(mm_tableList);
#else
    msp_ses = new s_xanrestsvmses;
#endif
    TGRESTSVM_SES::init(msp_ses);
  }
  else
    TGRESTSVM_SES::init(psp_ses);


}

void XANRESTSVM_SES::destroy()
{
  if (msp_ses)
    delete static_cast<s_xanrestsvmses *>(msp_ses);
  msp_ses = 0;
}

#ifdef TGTABLE_IN_CTXSES
/// @brief Initializes the tg_tables to session tg_lines.
void XAN_RESTSVM::setSesLineTables()
{
  map<string, tg_table*> lm_tableList;



  mcp_ses->setTableList(lm_tableList);
}
#else
void XAN_RESTSVM::setSesLineTables()
{
}
#endif


#ifdef TGTABLE_IN_CTXSES
void XANRESTSVM_SES::setTableList(map<string, tg_table*> &pmr_tableList)
{
  mm_tableList = pmr_tableList;
}
#endif



