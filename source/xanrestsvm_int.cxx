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
  trace(tg_traceProTrc,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  if (mcp_bus->httpMessage().ismethod() && mcp_bus->httpMessage().method() == "OPTIONS")
  {
  	return true;
  }

  return false;
}



/// @brief force response bus fields.
void XAN_RESTSVM::forceResponseBusFields()
{
  const char *ka_funcName = "XAN_RESTSVM::forceResponseBusFields";
  trace(tg_traceProTrc,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  if (mcp_bus->httpMessage().ismethod() && mcp_bus->httpMessage().method() == "OPTIONS")
  {
    mcp_bus->httpMessage().status("204");

  	mcp_bus->httpMessage().headers().bus(0);
	  byte4 l4_idx = 0;
	  mcp_bus->httpMessage().headers()[++l4_idx]->name("content-type");
	  mcp_bus->httpMessage().headers()[l4_idx]->value("text/plain charset=UTF-8");
	  mcp_bus->httpMessage().headers()[++l4_idx]->name("date");
	  mcp_bus->httpMessage().headers()[l4_idx]->value(mt_now.dateFormat("%a, %d %b %Y %H:%M:%S GMT")); // cf. https://tools.ietf.org/html/rfc2616#section-3.3
	  mcp_bus->httpMessage().headers()[++l4_idx]->name("server");
	  mcp_bus->httpMessage().headers()[l4_idx]->value(mcp_cfg->server());
	  mcp_bus->httpMessage().headers()[++l4_idx]->name("Access-Control-Max-Age");
	  mcp_bus->httpMessage().headers()[l4_idx]->value("1728000");
  }
}



