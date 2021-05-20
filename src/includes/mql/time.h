//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes functions related to date and time.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime
 */

// Forward declarations.
struct MqlDateTime;

/**
 * Returns the last known server time.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/timecurrent
 */
datetime TimeCurrent() { return 0; }
datetime TimeCurrent(MqlDateTime& dt_struct) { return 0; }
