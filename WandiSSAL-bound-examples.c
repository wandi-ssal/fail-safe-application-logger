/************************************************************
MIT License

Copyright (c) 2026 Bryan Woodley

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*************************************************************/
#include	<stdlib.h>
#include	<stdio.h>
#include	"WandiSSAL-LoggerLib-2.0.h"

enum components {
Main=100,
UI=101
};

enum secevirty {
Info=1,
Error=2
};

/***
This program shows how to use Wandi-SSAL API functions for the free version.

These examples are based on pre-defined fixed Bound Capability parameter
values which are listed in the section "These adjustable paraeters are fixed 
for the free version" of the Wandi-SSAL-Capabilities.pdf document.

Also, refer to the Wandi-SSAL-Bound-Capabilities.pdf document on how these 
values are checked and validated.

***/

int main()
{
	char	*str = "String Argument Value";
	unsigned	int	hex_value = 0x3d59ba4f;
	char	char_value = 'A';

	WandiSSAL_LoggerStartUp();

	/** Example 1: Number of format string specifiers types per log message.
		1y – Maximum number of format string specifiers types allowed with a message is 6.
	**/
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"1y - Maximum number of format string specifiers types allowed with a message is 6");
	WandiSSAL_LoggerAppsMsg(1,Main,Info,">>>> For example: [%d, %d, %d, %d, %d, %s]",91,92,93,94,95,str);

	/** Example 2: Different types of format string specifiers.
		2y – Different types of supported format string specifiers are %s, %d, %f, %c, %x, %p.
	**/
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"2y - Different types of supported format specifiers are %%s %%d %%f %%c %%x %%p");
	WandiSSAL_LoggerAppsMsg(1,Main,Info,">>>> For example:  [string=%s, integer=%d, double=%f, char=%c, hex=%x, pointer=%p]",str,99,3.4,char_value,hex_value, str);

	/** Example 3: Length for format string specifier %s arguments.
		3y – Maximum length for format string specifier %s argument is 64 characters.
	**/
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"3y - Maximum length for string specifier [%%s] argument is 64 characters]");
	WandiSSAL_LoggerAppsMsg(1,Main,Info,">>>> For example:  [%s]","Maximum length for string argument is 64 characters...aaaaaaaaa");

	/** Example 4: Length for message format string.
		4y – Maximum length format string specification is 256 characters.
	**/
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"4y - Maximum length format string specification is 256 characters");
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"For examle Maximum length format string specification is 256 characters...bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccccccccccccccccccccccccccccccccccccccccccccccccccdddddddddddddddddddddddddddddddddddddddddddddddddeeeeeeeeeeeeeeeeeeeeeeeee to 256 characters");

	/** Example 5: Subset of ASCII characters for both string arguments and output format strings.
		5y - Fixed subset of ASCII characters allowed: uppler/lower case alphanumeric, blank and  !#$%%&()*+,-./:;<=>?@[]_{|} characters.
	**/
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"5y - Fixed subset of ASCII characters allowed: uppler/lower case alphanumeric, blank and ! #$%%&()*+,-./:;<=>?@[]_{|} characters."); // print allowed characters in format string specification
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"For example ASCII subset is [%s]", "! #$&()*+,-./:;<=>?@[]_{|}"); // print allowed characters in string argument
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"%%"); // print %
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"100%%"); // print 100%
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"%%s = %s","STR"); // print %s = STR
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"\\"); // print single backslash
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"\""); // print single duble qoute
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"\'"); // print single qoute
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"\"string in qoutes\""); // string in double qoutes

	/** Example 6: Number of severity id=value pairs and length of value string.
		6y – Maximum number of severity levels is 4 and length of value is 16 characters.
	**/
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"6y - Maximum number of severity levels is 4 and length of value is 16 characters.");

	/** Example 7: Number of logical message grouping id=value pairs and length of value string.
		7y – Maximum number of logical message groups is 32 and length of value is 16 characters.
	**/
	WandiSSAL_LoggerAppsMsg(1,Main,Info,"7y - Maximum number of logical message groups is 32 and length of value is 16 characters.");

	WandiSSAL_LoggerShutDown();

	return(0);
}
