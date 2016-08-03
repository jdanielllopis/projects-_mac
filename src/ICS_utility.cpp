//============================================================================
// Name        : ICS_utility.cpp
// Author      : Jose Daniel Llopis
// Created on  : 20 Jul 2016
// Updated on  :
// Version     : 1.0.0
// Company     : Garbi Research Limited 2016
// Copyright   : Confidential Proprietary, NDA Required
// Description :
//============================================================================

#include "ICS_utility.h"

using namespace std;

/**
 * Convert any string with UpperCase
 * @param _str original string.
 */
void convertUpperCase(string &_str)
{
   for(uint32_t i=0; i<_str.length();i++)
   {
      _str[i] = toupper(_str[i]);
   }
}
