/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_hbbtv.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_hbbtv.h"

/*
 @ get hbbtv app count.
 */
int dtv__hbbtv_get_application_count(void)
{
	return 10;
}

/*
 @ get given hbbtv app name.
 */
void dtv__hbbtv_get_application_name( char *app_name, int name_buflen, int app_index )
{
	if( app_name != NULL && name_buflen >= 16 )
	{
		snprintf( app_name, name_buflen, "HbbTV_NAME_%d", app_index + 1 );
	}
}

/*
 @ check whether given app is to be auto or manual launched.
 */
bool dtv__hbbtv_is_application_auto( int app_index )
{
	return true;
}

/*
 @ launch a given app.
 */
void dtv__hbbtv_launch_application( int app_index )
{
}

/*
 @ check whether any auto-launched app is available now.
 */
bool dtv__hbbtv_is_auto_application_available(void)
{
	return true;
}

/*
 @ launch an auto app, if any.
 */
void dtv__hbbtv_launch_auto_application(void)
{
}

/*
 @ check whether any teletext app is available now.
 */
bool dtv__hbbtv_is_teletext_application_available(void)
{
	return true;
}

/*
 @ launch an teletext app, if any.
 */
void dtv__hbbtv_launch_teletext_application(void)
{
}

/*
 @ quit any hbbtv app, if there's any app running now.
 */
void dtv__hbbtv_quit_current_application(void)
{
}

/*
 @ check whether there's any hbbtv app running now.
 */
bool dtv__hbbtv_is_any_application_running(void)
{
	return true;
}

