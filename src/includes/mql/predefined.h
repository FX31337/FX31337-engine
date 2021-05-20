//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible predefined structs and variables.
 */

// Includes.
#include "check.h"

/**
 * Returns number of decimal places.
 */
struct DigitsCurrent {
  operator int() { return Digits(); }
} _Digits;

/**
 * Returns the last error code.
 */
struct LastError {
  operator int() { return GetLastError(); }
} _LastError;

/**
 * Returns size of the current symbol point in the quote currency.
 */
struct PointCurrent {
  operator int() { return Point(); }
} _Point;

/**
 * Returns symbol of the current chart.
 */
struct SymbolCurrent {
  operator int() { return Symbol(); }
} _Symbol;
