#include "xanrestsvm_unittests.h"

/**
 * This file contains setup for unittests of product xan_restsvm
 */


/**
 * The name of the class shall be passed to tg_unittest.
 * It'll be done here.
 */
SETUP_CLASS(XAN_RESTSVM);


/**
 * Fake dictionary containing fields used by tested object.
 * Warning: dangling comma after last element will cause
 *          weird compilation error messages
 *
 * Example:
 *   SETUP_DICTIONARY(
 *     "accountNumber",
 *     "instrumentName",
 *     "orderId"
 *   );
 */
SETUP_DICTIONARY(
);


/**
 * Database model and data declaration
 * Warning: dangling comma after last elements will cause
 *          weird compilation error messages
 *
 * Example:
 *   DECLARE_DATABASE_DATA(
 *     TABLE(CARD,
 *       COLUMNS(
 *         COLUMN(state,                  INT),
 *         COLUMN(accountBalance,      BIGINT),
 *         COLUMN(cardNumber,     VARCHAR(19))
 *       ),
 *       PK(cardNumber),
 *       ROWS(
 *         ROW(1, 10000, '123'),
 *         ROW(0,     0, '456')
 *       )
 *     )
 *   );
 */
DECLARE_DATABASE_DATA(
);


/**
 * Service configuration file (more precisely its replacement).
 * XML shall be written directly without quotes (no escaping problem).
 *
 * Example:
 *   SERVICE_CONFIG(
 *   <bus>
 *     <field name='logCfgFile' type='A'>config/logCfgFile_xanrestsvm.xml</field>
 *   </bus>
 *   );
 */
SERVICE_CONFIG(
<bus>
   <field name='logCfgFile' type='A'>config/logCfgFile_xanrestsvm.xml</field>
</bus>
);

// vim: ft=cpp
