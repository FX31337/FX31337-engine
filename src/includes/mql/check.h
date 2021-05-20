//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible check/terminal functions.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check
 */

/**
 * Returns the number of decimal digits determining the accuracy of price of the current chart symbol.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/digits
 */
int Digits() { return 0; }

/**
 * Returns the contents of the system variable _LastError.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/getlasterror
 */
int GetLastError() { return 0; }

/**
 * Checks the forced shutdown of an mql5 program.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/isstopped
 */
bool IsStopped() { return false; }

/**
 * Returns the value of a corresponding property of a running mql5 program.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/mqlinfointeger
 */
int MQLInfoInteger(int property_id) { return 0; }

/**
 * Returns the value of a corresponding property of a running mql5 program.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/mqlinfostring
 */
string MQLInfoString(int property_id) { return "UNKNOWN"; }

/**
 * Returns the current chart timeframe.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/period
 */
ENUM_TIMEFRAMES Period() { return PERIOD_CURRENT; }

/**
 * Returns the point size of the current symbol in the quote currency.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/point
 */
double Point() { return 0.0; }

/**
 * Returns the name of a symbol of the current chart.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/symbol
 */
string Symbol() { return "UNKNOWN"; }

/**
 * Returns the value of a corresponding property of the mql5 program environment.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/terminalinfodouble
 */
double TerminalInfoDouble(int property_id) { return 0.0; }

/**
 * Returns the value of a corresponding property of the mql5 program environment.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/terminalinfointeger
 */
int TerminalInfoInteger(int property_id) { return 0; }

/**
 * Returns the value of a corresponding property of the mql5 program environment.
 *
 * @docs
 * - Returns the value of a corresponding property of the mql5 program environment.
 */
string TerminalInfoString(int property_id) { return "UNKNOWN"; }

/**
 * Returns the code of a reason for deinitialization.
 *
 * @docs
 * - https://www.mql5.com/en/docs/check/uninitializereason
 */
int UninitializeReason() { return 0; }
