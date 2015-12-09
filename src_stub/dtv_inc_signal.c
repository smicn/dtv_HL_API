/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_signal.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_signal.h"

/*
 @ register signal notification callback. pls choose either of two callbacks with
 @ diff msg type as you wish, pls also notice that msg values are defined above.
 */
void dtv__register_signal_receiver( const char *whom,
		void (*callback_0)( const char *whom, unsigned int msg, void *context ),
		void (*callback_1)( const char *whom, const char *msg, void *context ),
		void *context )
{
}

/*
 @ unregister signal notification callback.
 */
void dtv__unregister_signal_receiver( const char *whom )
{
}

