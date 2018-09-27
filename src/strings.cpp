//--------------------------------------------------------------------------//
/// Copyright (c) 2018 by Milos Tosic. All Rights Reserved.                ///
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------// 

#include <rbase_pch.h>
#include <rbase/inc/stringfn.h>

namespace rtm {

char toNoop(char _ch)
{
	return _ch;
}

bool isUpper(char _ch)
{
	return _ch >= 'A' && _ch <= 'Z';
}

bool isLower(char _ch)
{
	return _ch >= 'a' && _ch <= 'z';
}

char toLower(char _ch)
{
	return _ch + (isUpper(_ch) ? 0x20 : 0);
}

char toUpper(char _ch)
{
	return _ch - (isLower(_ch) ? 0x20 : 0);
}

} // namespace rtm
