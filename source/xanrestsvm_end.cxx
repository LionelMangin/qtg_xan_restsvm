/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

// #include "xanrestsvm_general.h"

#if 0
/// @brief Consigns transaction data before sending the response.
void XAN_RESTSVM::consignation()
{
  const char* ka_funcName = "XAN_RESTSVM::consignation";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // Put in this method the operations that must be absolutely performed before 
  // the end of the event processing, for example database logging.
}
#endif    

#if 0
/// @brief Handles database commit or rollback according to transaction processing outcome.
/// @note Any uncommitted SQL queries beyond this point will result in database rollback.
void XAN_RESTSVM::manageCommitRollback()
{
  const char* ka_funcName = "XAN_RESTSVM::manageCommitRollback";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // Code sample to rollback technical errors only

  // if (mcp_multDb->countReqInsertUpdate())
  // {
  //   switch (m4_codeInterne)
  //   {
  //     case k4_r4: // case XX : put here any error that needs a rollback
  //       mcp_multDb->rollbackDb(); 
  //       break;
  //     case k4_i0: // when waiting for response or other event
  //     case k4_a1:
  //     default:
  //       mcp_multDb->commitDB();
  //       break;
  //   }
  // }
}
#endif    

#if 0
/// @brief Prepares the data for reverse direction reply.
/// @note This method is the last one called in TG_RESTSVM processing.
/// @return 1 if reply should be sent, 0 otherwise
byte4 XAN_RESTSVM::preparationResponseRevers()
{
  const char* ka_funcName = "XAN_RESTSVM::preparationResponseRevers";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // Set the resultCode here for instance.

  // Returning other value than 0 will send the response.
  return 1;
}
#endif    

#if 0
/// @brief Prepares the data for normal direction reply.
/// @note This method is the last one called in TG_RESTSVM processing.
/// @return 1 if reply should be sent, 0 otherwise
byte4 XAN_RESTSVM::preparationResponse()
{
  const char* ka_funcName = "XAN_RESTSVM::preparationResponse";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // Set the resultCode here for instance.

  // Returning other value than 0 will send the response.
  return 1;
}
#endif    

#if 0
/// @brief Prepares the data before ending the event.
/// @note This method is the last one called in TG_RESTSVM processing if the event is not a response.
void XAN_RESTSVM::preparationEndEvent()
{
  const char* ka_funcName = "XAN_RESTSVM::preparationEndEvent";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // Set the resultCode here for instance.
}
#endif    

#if 0
/// @brief Logs at the end of event.
void XAN_RESTSVM::logEndEvent()
{
  const char* ka_funcName = "XAN_RESTSVM::logEndEvent";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);
}
#endif    

