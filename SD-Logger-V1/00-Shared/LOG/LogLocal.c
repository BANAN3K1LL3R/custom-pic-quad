#include "Log\LogLocal.h"

//===============================================================================
BOOL	_LogInit	= FALSE;
WORD	_LogLastID	= 0;
//-------------------------------------------------------------------------------
CETYPE	_LogFSError	= CE_GOOD;
//===============================================================================
// Helper function to convert WORD to 4-digit decimal number in a string array
//-------------------------------------------------------------------------------
void	wtoa(char dest[5], WORD Number)
	{
	WORD	Smb[5];
	int		i;
	//----------------------------------
	for (i = 4; i >= 0; i--)
		{
		Smb[i] = Number % 10;
		Number /= 10;
		}
	//----------------------------------
	for (i = 0; i < 5; i++)
		{
		dest[i] = (char)(0x30 + Smb[i]);
		}
	//----------------------------------
	return;
	}
//===============================================================================


