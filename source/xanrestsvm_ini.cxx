/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#include "xanrestsvm_general.h"

/// @brief Constructs the object.
/// This method is called in the two constructors.
void XAN_RESTSVM::construction()
{
  const char*      ka_funcName = "XAN_RESTSVM::construction";
  trace(tg_traceProTrc,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // common code for the 2 constructors
}

#if 0
/// @brief Loads the configuration parameters (database and object).
void XAN_RESTSVM::config()
{
  TG_RESTSVM::config();

  // Write the code for (re-)loading configuration here
}
#endif

/// @brief build transUId Constant part.
void XAN_RESTSVM::buildTransUIdConstantPart()
{
  const char *ka_funcName = "XAN_RESTSVM::buildTransUIdConstantPart";
  trace(tg_traceProTrc,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // instanceId (1)

if (isVerbose()) cout << "[" << ka_funcName << " (" << __LINE__ << ")] " << "mcp_cfg->instanceId() :" << mcp_cfg->instanceId() << ":" << endl;

  mz_dummy.assign(litos(ip_to_byte8(mcp_cfg->instanceId().c_str())));
  mz_transUIdConstantPart.append(lpad(mz_dummy, 11 , '0'));

  // processId (4)
  mz_dummy.assign(itos(gcp_envMgr->getIdProcess()));
  mz_transUIdConstantPart.append(lpad(mz_dummy, 4, '0'));

  // instance id (3)
  mz_dummy.assign(itos(getAppliNumber()));
  mz_transUIdConstantPart.append(lpad(mz_dummy, 3, '0'));

}


/// @brief convert ip to int
/// @param pcp_ip 127.0.0.1 formatted ip
/// @return byte8 integer ip
byte8 XAN_RESTSVM::ip_to_byte8(const char * pcp_ip)
{
    byte8 l8_ret = 0; ///< return value
    byte4 l4_idx; ///< count of the number of bytes processed
    const char * lc_start; ///< A pointer to the next digit to process

    lc_start = pcp_ip;
    for (l4_idx = 0; l4_idx < 4; l4_idx++) {
        char lc_c; ///< digit being processed
        byte4 l4_n = 0; ///< value of this byte
        while (1) {
            lc_c = * lc_start;
            lc_start++;
            if (lc_c >= '0' && lc_c <= '9') {
                l4_n *= 10;
                l4_n += lc_c - '0';
            }
            /* We insist on stopping at "." if we are still parsing
               the first, second, or third numbers. If we have reached
               the end of the numbers, we will allow any character. */
            else if ((l4_idx < 3 && lc_c == '.') || l4_idx == 3) {
                break;
            }
            else {
                return 0;
            }
        }
        if (l4_n >= 256) {
            return 0;
        }
        l8_ret *= 256;
        l8_ret += l4_n;
    }
    return l8_ret;
}

#if 0
/// @brief Declares the SQL queries to prepare.
void XAN_RESTSVM::startQuery()
{
  const char*      ka_funcName = "XAN_RESTSVM::startQuery";
  trace(tg_traceProTrc,mc_rcvMskTraMsg, ka_funcName, (void*)0, (byte4)0);

  // Write the code to define the SQL query map, like this:
  // mm_queryText[k4_myQuery]  = "select * from TEST";
  // Where k4_myQuery is the query constant number defined in include/xanrestsvm_def.h
}
#endif

#if 0
/// @brief Starts the object.
void XAN_RESTSVM::start()
{
  const char*      ka_funcName = "XAN_RESTSVM::start";
  trace(tg_traceProTrc,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // Default behaviour of TG_RESTSVM is to switch the object on.
  // TG_RESTSVM::start();

  // You can define your own behaviour here and then switch the object on with the following call:
  // changeAppliState(1);

  // ... or off:
  // changeAppliState(0);
}
#endif

#if 0
/// @brief Stops (closes) the object.
void XAN_RESTSVM::close()
{
  const char*      ka_funcName = "XAN_RESTSVM::close";
  trace(tg_traceProTrc,tg_traceMskNone, ka_funcName, (void*)0, (byte4)0);

  // Default behaviour of TG_RESTSVM is to switch the object off.
  TG_RESTSVM::close();
}
#endif

/// @brief Loads the logCfgFile event log data
void XAN_RESTSVM::configLog()
{
  const char*      ka_funcName = "XAN_RESTSVM::configLog";
  trace(tg_traceProCfg, mc_rcvMskTraMsg, ka_funcName, (void*)0, (byte4)0);

  string lz_logErrorString;
  string lz_logCfgFile;

#if (defined LOGCFG_IN_TGSYS)
  lz_logCfgFile = mcp_cfg->logCfgFile();
#else
  string lz_type;
  mcp_cfg->mc_bus.getVField("logCfgFile", lz_type, lz_logCfgFile);
#endif

  byte4 l4_logCfgConfigStatus = mc_logCfg.config(lz_logCfgFile, "XAN_RESTSVM", lz_logErrorString);

  if(l4_logCfgConfigStatus != 1)
  {
    mz_logData = (configLogParsingResult(l4_logCfgConfigStatus, lz_logErrorString)+lz_logCfgFile);
    logCliApp(k4_r7);
  }
}

