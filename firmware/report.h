/*
 * report.h - rs274/ngc status report and other reporting functions
 * Part of TinyG project
 *
 * Copyright (c) 2010 - 2012 Alden S. Hart Jr.
 *
 * TinyG is free software: you can redistribute it and/or modify it 
 * under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, 
 * or (at your option) any later version.
 *
 * TinyG is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 * See the GNU General Public License for details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with TinyG  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef report_h
#define report_h

void rpt_init_status_report(uint8_t persist_flag);
void rpt_decr_status_report(void);
void rpt_queue_status_report(void);
uint8_t rpt_status_report_callback(void);
void rpt_run_status_report(void);
void rpt_run_multiline_status_report(void);
void rpt_run_json_status_report(void);

// If you are looking for the defaults for the status report see config.h

/* unit test setup */
//#define __UNIT_TEST_REPORT	// uncomment to enable report unit tests
#ifdef __UNIT_TEST_REPORT
void sr_unit_tests(void);
#define	REPORT_UNITS sr_unit_tests();
#else
#define	REPORT_UNITS
#endif // __UNIT_TEST_REPORT

#endif

