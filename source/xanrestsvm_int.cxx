/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#include "xanrestsvm_general.h"

// Write XANRESTSVM internal functions here.
namespace xanrestsvm {
  const string kz_qobuzOrigin(".qobuz.com"); ///< *.qobuz.com
};


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
    if (mcp_bus->httpMessage().headers()[l4_idx]->name() == "origin")
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
    mcp_bus->httpMessage().headers()[l4_optionIdx]->value("text/plain; charset=UTF-8");
    mcp_bus->httpMessage().headers()[++l4_optionIdx]->name("date");
    mcp_bus->httpMessage().headers()[l4_optionIdx]->value(mt_now.dateFormat("%a, %d %b %Y %H:%M:%S GMT")); // cf. https://tools.ietf.org/html/rfc2616#section-3.3
    mcp_bus->httpMessage().headers()[++l4_optionIdx]->name("server");
    mcp_bus->httpMessage().headers()[l4_optionIdx]->value(mcp_cfg->server());
    mcp_bus->httpMessage().headers()[++l4_optionIdx]->name("access-control-max-age");
    mcp_bus->httpMessage().headers()[l4_optionIdx]->value("1728000");
  }

  // add header values
  byte4 l4_idx = mcp_bus->httpMessage().headers().size();
  mcp_bus->httpMessage().headers()[++l4_idx]->name("access-control-allow-methods");
  mcp_bus->httpMessage().headers()[l4_idx]->value("POST, GET, OPTIONS");
  mcp_bus->httpMessage().headers()[++l4_idx]->name("access-control-allow-headers");
  mcp_bus->httpMessage().headers()[l4_idx]->value("x-app-id, x-user-auth-token, x-app-version, x-api-auth-token, x-socket-id, x-requested-with");
  mcp_bus->httpMessage().headers()[++l4_idx]->name("access-control-expose-headers");
  mcp_bus->httpMessage().headers()[l4_idx]->value("x-zone, x-language-code");


  // origin
  if (mcp_ctx->originHeader().size() > xanrestsvm::kz_qobuzOrigin.size() &&
      mcp_ctx->originHeader().compare(mcp_ctx->originHeader().length() - xanrestsvm::kz_qobuzOrigin.length(), xanrestsvm::kz_qobuzOrigin.length(), xanrestsvm::kz_qobuzOrigin) == 0)
  {
    mcp_bus->httpMessage().headers()[++l4_idx]->name("access-control-allow-origin");
    mcp_bus->httpMessage().headers()[l4_idx]->value(mcp_ctx->originHeader());
    mcp_bus->httpMessage().headers()[++l4_idx]->name("access-control-allow-credentials");
    mcp_bus->httpMessage().headers()[l4_idx]->value("true");
  }
  else
  {
    mcp_bus->httpMessage().headers()[++l4_idx]->name("access-control-allow-origin");
    mcp_bus->httpMessage().headers()[l4_idx]->value("*");
  }

  // stat user data
  if (mcp_bus->isapp_id())
  {
    mcp_ctx->statUserData(mcp_ctx->statUserData() + ';' + mcp_bus->app_id());
  }
if (isVerbose()) cout << "[" << ka_funcName << " (" << __LINE__ << ")] " << "mcp_ctx->statUserData() :" << mcp_ctx->statUserData() << ":" << endl;
}



