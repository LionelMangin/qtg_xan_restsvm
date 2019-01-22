/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#include "xanrestsvm_general.h"

XANRESTSVM_CTX::XANRESTSVM_CTX()
{
  m1p_nomCtx = "XANRESTSVM_CTX";
}

XANRESTSVM_CTX::~XANRESTSVM_CTX()
{
}

void XANRESTSVM_CTX::init(s_tgclictx * const psp_ctx)
{
  // current pointer is null or not in the list
  if (!psp_ctx)
  {
#ifdef TGTABLE_IN_CTXSES
    msp_ctx = new s_xanrestsvmctx(mm_tableList);
#else
    msp_ctx = new s_xanrestsvmctx;
#endif
    TGRESTSVM_CTX::init(msp_ctx);
  }
  else
    TGRESTSVM_CTX::init(psp_ctx);


}

void XANRESTSVM_CTX::destroy()
{
  if (msp_ctx)
    delete static_cast<s_xanrestsvmctx *>(msp_ctx);
  msp_ctx = 0;
}

#ifdef TGTABLE_IN_CTXSES
void XAN_RESTSVM::setCtxLineTables()
{
  map<string, tg_table*> lm_tableList;



  mcp_ctx->setTableList(lm_tableList);
}
#else
void XAN_RESTSVM::setCtxLineTables()
{
}
#endif


#ifdef TGTABLE_IN_CTXSES
void XANRESTSVM_CTX::setTableList(map<string, tg_table*> &pmr_tableList)
{
  mm_tableList = pmr_tableList;
}
#endif



