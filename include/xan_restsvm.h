#ifndef XAN_RESTSVM_H
#define XAN_RESTSVM_H

/// XAN_RESTSVM class.
class TGAPPCLILIBSPC XAN_RESTSVM : public TG_RESTSVM
{

  public:

    /// @brief Constructor of the instance of XAN_RESTSVM.
    /// @param[in] pap_tangoId Tango client application identifier.
    /// @param[in] pcp_assCom Pointer on communication channel for dispatcher dialogs.
    /// @param[in] pap_configId  Tango configuration identifier.
#ifndef __TWIST__
    XAN_RESTSVM(byte1* pap_tangoId, TG_COM* pcp_assCom, byte1* pap_configId=0);
#else
    XAN_RESTSVM(const char* pap_tangoId, TG_COM* pcp_assCom, const char* pap_configId=0);
#endif // __TWIST__

    /// @brief Constructor of the instance of XAN_RESTSVM.
    /// @param[in] pap_tangoId Tango client application identifier.
    /// @param[in] pcp_cfg Pointer to the generated configuration class object.
    /// @param[in] pcp_assCom Pointer on communication channel for dispatcher dialogs.
    /// @param[in] pcp_bus Pointer to the generated autobus class object.
    /// @param[in] pcp_ctx Pointer to the generated request context class object.
    /// @param[in] pcp_ses Pointer to the generated session context class object.
    /// @param[in] pcp_db  Pointer to the database class object, NULL if dynamically linked.
#ifndef __TWIST__
    XAN_RESTSVM(byte1* pap_tangoId, XANRESTSVM_CFG* pcp_cfg, TG_COM* pcp_assCom, XANRESTSVM_BUS* pcp_bus, XANRESTSVM_CTX* pcp_ctx, XANRESTSVM_SES* pcp_ses, DB_MAIN * pcp_db);
#else
    XAN_RESTSVM(const char* pap_tangoId, XANRESTSVM_CFG* pcp_cfg, TG_COM* pcp_assCom, XANRESTSVM_BUS* pcp_bus, XANRESTSVM_CTX* pcp_ctx, XANRESTSVM_SES* pcp_ses, DB_MAIN * pcp_db);
#endif

    /// @brief Destructor.
    virtual ~XAN_RESTSVM();

  protected :

    XANRESTSVM_CFG *mcp_cfg; ///< Pointer to config parameters associated to XAN_RESTSVM.
    XANRESTSVM_BUS *mcp_bus; ///< Pointer to incoming autobus.
    XANRESTSVM_CTX *mcp_ctx; ///< Pointer to request context class of XAN_RESTSVM.
    XANRESTSVM_SES *mcp_ses; ///< Pointer to session context class of XAN_RESTSVM.


    /*****************************************
     * Internal elements                     *
     *****************************************/

    // Put your own methods here.

    /// @brief pre-processs request.
    bool preProcessRequest();

    /// @brief force response bus fields.
    void forceResponseBusFields();

    /*****************************************
     * Methods for object management         *
     *****************************************/

    /// @brief Constructs the object.
    /// This method is called in the two constructors.
    void construction();

#if 0
    /// @brief Loads the configuration parameters (database and object).
    void config();
#endif

    /// @brief build transUId Constant part.
    void buildTransUIdConstantPart();

    /// @brief convert ip to int
    /// @param pcp_ip 127.0.0.1 formatted ip
    /// @return byte8 integer ip
    byte8 ip_to_byte8(const char * pcp_ip);

    /// @brief Loads the logCfgFile event log data
    void configLog();

#if 0
    /// @brief Declares the SQL queries to prepare.
    void startQuery();
#endif

#if 0
    /// @brief Starts the object.
    void start();
#endif

#if 0
    /// @brief Stops (closes) the object.
    void close();
#endif

    /// @brief Provides the version number associated to XAN_RESTSVM class.
    void version();

    /// @brief Initializes the tg_tables to context tg_lines.
    void setCtxLineTables();

    /// @brief Initializes the tg_tables to session tg_lines.
    void setSesLineTables();

    /*****************************************
     * Methods for handling request events   *
     *****************************************/

#if 0
    /// @brief Processes normal direction request.
    void algoRequest();
#endif

#if 0
    /// @brief Processes reverse direction request.
    void algoRequestRevers();
#endif

    /*****************************************
     * Methods for handling response events  *
     *****************************************/

#if 0
    /// @brief Processes normal direction response.
    void algoResponse();
#endif

#if 0
    /// @brief Processes reverse direction response.
    void algoResponseRevers();
#endif

#if 0
    /// @brief Processes normal direction response on dispatcher error.
    /// @param[in] p4_code Dispatcher error code.
    void algoResponseErreurDisp(byte4 p4_code);
#endif

#if 0
    /// @brief Processes reverse direction response on dispatcher error.
    /// @param[in] p4_code Dispatcher error code.
    void algoResponseErreurDispRevers(byte4 p4_code);
#endif

    /*****************************************
     * Methods for handling notif events     *
     *****************************************/

#if 0
    /// @brief Processes normal direction notification.
    void algoNotif();
#endif

#if 0
    /// @brief Processes reverse direction notification.
    void algoNotifRevers();
#endif

#if 0
    /// @brief Processes unknown direction notification.
    void algoNotifUnknow();
#endif

    /*****************************************
     * Methods for handling timer events     *
     *****************************************/

#if 0
    /// @brief Processes object timer.
    /// @param[in] p4_timer Object timer index.
    void algoTimerObjet(byte4 p4_timer);
#endif

#if 0
    /// @brief Processes user timer.
    /// @param[in] pcp_timer Pointer to timer user.
    void algoTimerUser(TG_TIMER *pcp_timer);
#endif

#if 0
    /// @brief Processes direct request timer.
    /// @param[in] p4_timer Context timer index.
    void algoTimerCtx(byte4 p4_timer);
#endif

#if 0
    /// @brief Processes reverse request timer.
    /// @param[in] p4_timer Context timer index.
    void algoTimerCtxReverse(byte4 p4_timer);
#endif

#if 0
    /// @brief Processes session timer.
    /// @param[in] p4_timer Session timer index.
    void algoTimerSes(byte4 p4_timer);
#endif

#if 0
    /// @brief Searches for the object timer index.
    /// @param[in] pc_whichTimer Object timer internal ID.
    /// @return Object timer index.
    byte4 isTimerObject(byte8 pc_whichTimer);
#endif

#if 0
    /// @brief Searches for the user timer.
    /// @param[in] pc_whichTimer Session timer internal ID.
    /// @return Pointer to timer user.
    TG_TIMER * isTimerUser(byte8 pc_whichTimer);
#endif

#if 0
    /// @brief Searches for the context timer index.
    /// @param[in] pc_whichTimer Context timer internal ID.
    /// @return Context timer index.
    byte4 isTimerCtx(byte8 pc_whichTimer);
#endif

#if 0
    /// @brief Searches for the session timer index.
    /// @param[in] pc_whichTimer Session timer internal ID.
    /// @return Session timer index.
    byte4 isTimerSes(byte8 pc_whichTimer);
#endif

    /*****************************************
     * Methods for handling command events   *
     *****************************************/

#if 0
    /// @brief Initializes the command parser.
    void initParser();
#endif

#if 0
    /// @brief Processes the command.
    void algoCommand();
#endif

#if 0
    /// @brief Prepares and formats the command reply.
    void preparationCrCommand();
#endif

    /*****************************************
     * Methods for handling other events     *
     *****************************************/

#if 0
    /// @brief Processes external event.
    void algoEvent();
#endif

    /*****************************************
     * Methods called at the end of event    *
     *****************************************/

#if 0
    /// @brief Consigns transaction data before sending the response.
    void consignation();
#endif

#if 0
    /// @brief Handles database commit or rollback according to transaction processing outcome.
    void manageCommitRollback();
#endif

#if 0
    /// @brief Prepares the data for reverse direction reply.
    /// @note This method is the last one called in TG_RESTSVM processing.
    /// @return 1 if reply should be sent, 0 otherwise
    byte4 preparationResponseRevers();
#endif

#if 0
    /// @brief Prepares the data for normal direction reply.
    /// @note This method is the last one called in TG_RESTSVM processing.
    /// @return 1 if reply should be sent, 0 otherwise
    byte4 preparationResponse();
#endif

#if 0
    /// @brief Prepares the data before ending the event.
    /// @note This method is the last one called in TG_RESTSVM processing if the event is not a response.
    void preparationEndEvent();
#endif

#if 0
    /// @brief Logs at the end of event.
    void logEndEvent();
#endif

    /*****************************************
     * Methods called for events direction   *
     *****************************************/

#if 0
    /// @brief Determines the request direction.
    /// @note Default behaviour will look at the direction field value of the incoming bus.
    /// @return k4_directionDirect or k4_directionRevers.
    byte4 whichDirectionRequest();
#endif

#if 0
    /// @brief Determines the response direction.
    /// @note Default behaviour will assign the same direction as the request sent.
    /// @return k4_directionDirect or k4_directionRevers.
    byte4 whichDirectionResponse();
#endif

#if 0
    /// @brief Determines the notification direction.
    /// @note Default behaviour will look at the direction field value of the incoming bus.
    /// @return k4_directionDirect or k4_directionRevers.
    byte4 whichDirectionNotif();
#endif

#if 0
    /// @brief Determines the context timer direction.
    /// @note Default behaviour returns k4_directionDirect.
    /// @return k4_directionDirect or k4_directionRevers.
    byte4 whichDirectionTimerCtx();
#endif

};

#endif // XAN_RESTSVM_H

