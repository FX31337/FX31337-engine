//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible account functions.
 */

/**
 * Returns a value of double type of the corresponding account property.
 *
 * @docs
 * - https://www.mql5.com/en/docs/account/accountinfodouble
 */
double AccountInfoDouble(int property_id) { return 0.0; }

/**
 * Returns a value of integer type of the corresponding account property.
 *
 * @docs
 * - https://www.mql5.com/en/docs/account/accountinfointeger
 */
int AccountInfoInteger(int property_id) { return 0; }

/**
 * Returns a value of string type of the corresponding account property.
 *
 * @docs
 * - https://www.mql5.com/en/docs/account/accountinfostring
 */
string AccountInfoString(int property_id) { return "UNKNOWN"; }
