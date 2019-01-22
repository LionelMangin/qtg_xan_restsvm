/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

// #include "xanrestsvm_general.h"

#if 0
/// @brief Processes normal direction response.
void XAN_RESTSVM::algoResponse()
{
  const char*      ka_funcName = "XAN_RESTSVM::algoResponse";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  m4_codeInterne = k4_a1;
}
#endif

#if 0
/// @brief Processes reverse direction response.
void XAN_RESTSVM::algoResponseRevers()
{
  const char*      ka_funcName = "XAN_RESTSVM::algoResponseRevers";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  m4_codeInterne = k4_a1;
}
#endif

#if 0
/// @brief Processes normal direction response on dispatcher error.
/// @param[in] p4_code Dispatcher error code.
void XAN_RESTSVM::algoResponseErreurDisp(byte4 p4_code)
{
  const char*      ka_funcName = "XAN_RESTSVM::algoResponseErreurDisp";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // After this function algoResponse will be called.
  // There are two ways of using this function:
  //   * throw an exception here and skip algoResponse
  //   * set appropriate resultCode in bus an let tango process the response
}
#endif

#if 0
/// @brief Processes reverse direction response on dispatcher error.
/// @param[in] p4_code Dispatcher error code.
void XAN_RESTSVM::algoResponseErreurDispRevers(byte4 p4_code)
{
  const char*      ka_funcName = "XAN_RESTSVM::algoResponseErreurDispRevers";
  trace(tg_traceProTrc, tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // After this function algoResponse will be called.
  // There are two ways of using this function:
  //   * throw an exception here and skip algoResponse
  //   * set appropriate resultCode in bus an let tango process the response
}
#endif

