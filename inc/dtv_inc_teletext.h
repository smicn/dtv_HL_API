/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_teletext.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_TELETEXT_H
#define DTV_INC_TELETEXT_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ start teletext show.
 */
void dtv__teletext_start(void);

/*
 @ stop teletext show.
 */
void dtv__teletext_stop(void);

/*
 @ teletext, go to next page.
 */
void dtv__teletext_goto_nextpage(void);

/*
 @ teletext, go to prev page.
 */
void dtv__teletext_goto_prevpage(void);

/*
 @ teletext, go to given page.
 */
void dtv__teletext_goto_page( int page_index );

/*
 @ teletext, go to next sub-page.
 */
void dtv__teletext_goto_next_subpage(void);

/*
 @ teletext, go to prev sub-page.
 */
void dtv__teletext_goto_prev_subpage(void);

/*
 @ check whether teletext is on-show status.
 */
bool dtv__teletext_is_working(void);

#ifdef __cplusplus
}
#endif

#endif
