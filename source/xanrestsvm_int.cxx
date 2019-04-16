/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#include "xanrestsvm_general.h"

// Write XANRESTSVM internal functions here.

/// @brief pre-processs request.
bool XAN_RESTSVM::preProcessRequest()
{
  const char *ka_funcName = "XAN_RESTSVM::preProcessRequest";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // OPTIONS verb
  if (mcp_bus->httpMessage().ismethod() && mcp_bus->httpMessage().method() == kz_methodOPTIONS)
  {
    return true;
  }

  // process origin
  bool lb_found = false;
  for (ubyte4 l4_idx = 1; l4_idx <= mcp_bus->httpMessage().headers().size() && !lb_found; ++l4_idx)
  {
    if (mcp_bus->httpMessage().headers()[l4_idx]->name() == xanrestsvm::kz_h_origin)
    {
      mcp_ctx->originHeader(mcp_bus->httpMessage().headers()[l4_idx]->value());
      lb_found = true;
    }
  }

  return false;
}



/// @brief force response bus fields.
void XAN_RESTSVM::forceResponseBusFields()
{
  const char *ka_funcName = "XAN_RESTSVM::forceResponseBusFields";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // OPTIONS verb
  if (mcp_bus->httpMessage().ismethod() && mcp_bus->httpMessage().method() == kz_methodOPTIONS)
  {
    mcp_bus->httpMessage().status("204");

    byte4 l4_optionIdx = 0;
    mcp_bus->httpMessage().headers().bus(0);
    mcp_bus->httpMessage().headers()[++l4_optionIdx]->name(kz_headerContentType);
    mcp_bus->httpMessage().headers()[l4_optionIdx]->value(xanrestsvm::kz_v_contentType);
    mcp_bus->httpMessage().headers()[++l4_optionIdx]->name(xanrestsvm::kz_h_date);
    mcp_bus->httpMessage().headers()[l4_optionIdx]->value(mt_now.dateFormat("%a, %d %b %Y %H:%M:%S GMT")); // cf. https://tools.ietf.org/html/rfc2616#section-3.3
    mcp_bus->httpMessage().headers()[++l4_optionIdx]->name(xanrestsvm::kz_h_server);
    mcp_bus->httpMessage().headers()[l4_optionIdx]->value(mcp_cfg->server());
    mcp_bus->httpMessage().headers()[++l4_optionIdx]->name(xanrestsvm::kz_h_accessControlMaxAge);
    mcp_bus->httpMessage().headers()[l4_optionIdx]->value(xanrestsvm::kz_v_accessControlMaxAge);
  }

  // add header values
  byte4 l4_idx = mcp_bus->httpMessage().headers().size();
  mcp_bus->httpMessage().headers()[++l4_idx]->name(xanrestsvm::kz_h_accessControlAllowMethods);
  mcp_bus->httpMessage().headers()[l4_idx]->value(xanrestsvm::kz_v_accessControlAllowMethods);
  mcp_bus->httpMessage().headers()[++l4_idx]->name(xanrestsvm::kz_h_accessControlAllowHeaders);
  mcp_bus->httpMessage().headers()[l4_idx]->value(xanrestsvm::kz_v_accessControlAllowHeaders);
  mcp_bus->httpMessage().headers()[++l4_idx]->name(xanrestsvm::kz_h_accessControlExposeHeaders);
  mcp_bus->httpMessage().headers()[l4_idx]->value(xanrestsvm::kz_v_accessControlExposeHeaders);


  // origin
  if (mcp_ctx->originHeader().size() > xanrestsvm::kz_v_accessControlAllowQobuzOrigin.size() &&
      mcp_ctx->originHeader().compare(mcp_ctx->originHeader().length() - xanrestsvm::kz_v_accessControlAllowQobuzOrigin.length(), xanrestsvm::kz_v_accessControlAllowQobuzOrigin.length(), xanrestsvm::kz_v_accessControlAllowQobuzOrigin) == 0)
  {
    mcp_bus->httpMessage().headers()[++l4_idx]->name(xanrestsvm::kz_h_accessControlAllowOrigin);
    mcp_bus->httpMessage().headers()[l4_idx]->value(mcp_ctx->originHeader());
    mcp_bus->httpMessage().headers()[++l4_idx]->name(xanrestsvm::kz_h_accessControlAllowCredentials);
    mcp_bus->httpMessage().headers()[l4_idx]->value(xanrestsvm::kz_v_accessControlAllowCredentials);
  }
  else
  {
    mcp_bus->httpMessage().headers()[++l4_idx]->name(xanrestsvm::kz_h_accessControlAllowOrigin);
    mcp_bus->httpMessage().headers()[l4_idx]->value(xanrestsvm::kz_v_accessControlAllowAllOrigin);
  }

  // stat user data
  if (mcp_bus->isapp_id())
  {
    mcp_ctx->statUserData(mcp_ctx->statUserData() + ';' + mcp_bus->app_id());
  }
}



