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
  	return true;

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

    // replace content-type value
	  mcp_bus->httpMessage().headers()[1]->value("text/plain charset=UTF-8");

	  mcp_bus->httpMessage().headers()[4]->name("Access-Control-Max-Age");
	  mcp_bus->httpMessage().headers()[4]->value("1728000");
  }
}



