/*
 * xan_restsvm product was generated on 2019/02/11 at 08:58:49 with pro_tmp version V03_03 and bin tools version 3.16.0 .
 * This file was generated on 2019/02/11 at 08:58:49 with pro_tmp version V03_03 and bin tools version 3.16.0 .
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

  static_cast<s_xanrestsvmctx *>(msp_ctx)->mz_originHeader = "";

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

string & XANRESTSVM_CTX ::originHeader(const string & pc_in)
{
  if (static_cast<s_xanrestsvmctx *>(msp_ctx))
    static_cast<s_xanrestsvmctx *>(msp_ctx)->mz_originHeader =  pc_in;
  else
    throw(TG_EXCEPAPP(__FILE__, m1p_nomCtx, __LINE__));
  return  static_cast<s_xanrestsvmctx *>(msp_ctx)->mz_originHeader;
}
string & XANRESTSVM_CTX ::originHeader()
{
  if (static_cast<s_xanrestsvmctx *>(msp_ctx))
    return  static_cast<s_xanrestsvmctx *>(msp_ctx)->mz_originHeader;
  else
    throw(TG_EXCEPAPP(__FILE__, m1p_nomCtx, __LINE__));
}
void XANRESTSVM_CTX ::findoriginHeader(const string & pc_in)
{
  m4_exist = 0;
  for (listPCtx::iterator li_ctx = mc_listPCtx.begin() ; li_ctx != mc_listPCtx.end() ; ++li_ctx)
  {
    if ((static_cast<s_xanrestsvmctx *>(*li_ctx))->mz_originHeader == pc_in)
    {
      msp_ctx = (*li_ctx);
      m4_exist = 1;
      break;
    }
  }
}


