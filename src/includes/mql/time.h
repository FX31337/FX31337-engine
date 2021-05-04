//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes functions related to date and time.
 */

// Forward declarations.
struct MqlDateTime;

/**
 * Returns number of seconds in a period.
 *
 * @docs
 * - https://www.mql5.com/en/docs/common/periodseconds
 */
int PeriodSeconds(int period) { return WRONG_VALUE; }
// int PeriodSeconds(ENUM_TIMEFRAMES period) { return WRONG_VALUE; };

/**
 * Returns the last known server time.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/timecurrent
 */
datetime TimeCurrent(MqlDateTime& dt_struct) { return WRONG_VALUE; }
