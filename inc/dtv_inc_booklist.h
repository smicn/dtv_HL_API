/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_booklist.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
          possible high level interfaces of DTV/DVB and its similar
          neighbor application services.
          
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_BOOK_LIST_H
#define DTV_INC_BOOK_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ enter a book list.
 */
void dtv__enter_book_list(void);

/*
 @ select liveplay book list.
 */
void dtv__select_liveplay_book_list(void);

/*
 @ select recording book list.
 */
void dtv__select_recording_book_list(void);

/*
 @ get booked data count.
 */
int dtv__get_book_count(void);

/*
 @ get booked data, all parameters entirely, it's good but i dislike, so..
 */
//void dtv__get_book_data( char *channel_name, int channel_name_bufsize,
//	                        char *program_name, int program_name_bufsize,
//	                        char *start_time_hhmm, int start_time_bufsize, 
//	                        char *end_time_hhmm, int end_time_bufsize,
//	                        int book_index );

/*
 @ get a booked data's channel name.
 */
void dtv__get_book_channel( char *channel_name, int channel_name_bufsize, int book_index );

/*
 @ get a booked data's program name.
 */
void dtv__get_book_program( char *program_name, int program_name_bufsize, int book_index );

/*
 @ get a booked data's program start time.
 */
void dtv__get_book_start_time( char *start_time_hhmm, int time_bufsize, int book_index );

/*
 @ get a booked data's program end time.
 */
void dtv__get_book_end_time( char *end_time_hhmm, int time_bufsize, int book_index );

/*
 @ get a booked data's program start date.
 */
void dtv__get_book_start_date( char *start_date_ddmmyyyy, int date_bufsize, int book_index );

/*
 @ check whether a booked data's state is BOOKED.
 */	
bool dtv__is_data_booked( int book_index );

/*
 @ change a booked data's state temply.
 */
void dtv__set_data_booked( int book_index );

/*
 @ check whether data is changed in book list.
 */
bool dtv__is_book_list_data_changed(void);

/*
 @ exit book list, choose to save changings or not.
 */
void dtv__exit_book_list( bool bSave );

#ifdef __cplusplus
}
#endif

#endif
