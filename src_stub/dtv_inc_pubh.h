/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_pubh.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_PUBH_H
#define DTV_INC_PUBH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef __cplusplus
#ifndef bool
#define bool    int
#endif

#ifndef true
#define true    1
#endif

#ifndef false
#define false   0
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ debug_print
 */
#ifndef dtv_dbg
#define dtv_dbg  printf
#endif

#ifdef __cplusplus
}
#endif

#endif