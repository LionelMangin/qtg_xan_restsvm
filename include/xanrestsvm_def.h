/*
 * xan_restsvm product was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 * This file was generated on 2019/01/18 at 14:54:46 with pro_tmp version V03_03 and bin tools version V02_17_16 .
 */

#ifndef XANRESTSVM_DEF_H
#define XANRESTSVM_DEF_H

// Write here all types definitions and constants.
#include "constants.h"

namespace xanrestsvm
{
  ///@name json
  //@{
  static const char * const kz_h_origin = "origin"; ///< header - origin
  static const char * const kz_h_date = "date"; ///< header - date
  static const char * const kz_h_server = "server"; ///< header - server
  static const char * const kz_h_accessControlMaxAge = "access-control-max-age"; ///< header - access-control-max-age
  static const char * const kz_h_accessControlAllowMethods = "access-control-allow-methods"; ///< header - access-control-allow-methods
  static const char * const kz_h_accessControlAllowHeaders = "access-control-allow-headers"; ///< header - access-control-allow-headers
  static const char * const kz_h_accessControlExposeHeaders = "access-control-expose-headers"; ///< header - access-control-expose-headers
  static const char * const kz_h_accessControlAllowOrigin = "access-control-allow-origin"; ///< header - access-control-allow-origin
  static const char * const kz_h_accessControlAllowCredentials = "access-control-allow-credentials"; ///< header - access-control-allow-credentials
  static const char * const kz_v_contentType = "text/plain; charset=UTF-8"; ///< value - text/plain; charset=UTF-8
  static const char * const kz_v_accessControlMaxAge = "1728000"; ///< value - 1728000
  static const char * const kz_v_accessControlAllowMethods = "POST, GET, OPTIONS"; ///< value - POST, GET, OPTIONS
  static const char * const kz_v_accessControlAllowHeaders = "x-app-id, x-user-auth-token, x-app-version, x-api-auth-token, x-socket-id, x-requested-with, content-type"; ///< value - x-app-id, x-user-auth-token, x-app-version, x-api-auth-token, x-socket-id, x-requested-with, content-type
  static const char * const kz_v_accessControlExposeHeaders = "x-zone, x-language-code"; ///< value - x-zone, x-language-code
  static const char * const kz_v_accessControlAllowCredentials = "true"; ///< value - true
  static const char * const kz_v_accessControlAllowAllOrigin = "*"; ///< value - *

  static const string kz_v_accessControlAllowQobuzOrigin("*.qobuz.com"); ///< value - *.qobuz.com
  //@}
};

#endif

