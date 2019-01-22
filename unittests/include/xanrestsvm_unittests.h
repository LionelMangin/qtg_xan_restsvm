#ifndef __XANRESTSVM_UNITTESTS_H__
#define __XANRESTSVM_UNITTESTS_H__

#include "tg_unittests.h"
#include "xanrestsvm_general.h"

// Main unittest class registration
DECLARE_TG_UNITTESTS(XAN_RESTSVM,     // Name of tested class (should be TG_RESTSVM based)
  TG_UNITTESTS_BUS(XANRESTSVM_BUS);   // Declare accessor to the bus       bus()
  TG_UNITTESTS_CFG(XANRESTSVM_CFG);   // Declare accessor to the config    cfg()
  TG_UNITTESTS_CTX(XANRESTSVM_CTX);   // Declare accessor to the context   ctx()
  TG_UNITTESTS_SES(XANRESTSVM_SES);   // Declare accessor to the session   ses()

/**
 * Here definition of members and methods can be added, these
 * members/methods can then be directly used within each test
 *
 * There are two special methods that can be declared:
 *   init  : will be called at start of each test
 *   clean : will be called at end of each test
 *
 * Example:
 *   
 *   int m4_counter;
 *   char *m1p_buffer;
 *
 *   void init()
 *   {
 *     m4_counter = 0;
 *     m1p_buffer = (char*)malloc(1024);
 *   }
 *
 *   void clean()
 *   {
 *     free(m1p_buffer);
 *   }
 *
 *   void incCounter() { m4_counter++; }
 */
);

#endif
