// FiltryGraficzne_Biblioteka.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "FiltryGraficzne_Biblioteka.h"


// This is an example of an exported variable
FILTRYGRAFICZNE_BIBLIOTEKA_API int nFiltryGraficzne_Biblioteka=0;

// This is an example of an exported function.
FILTRYGRAFICZNE_BIBLIOTEKA_API int fnFiltryGraficzne_Biblioteka(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see FiltryGraficzne_Biblioteka.h for the class definition
CFiltryGraficzne_Biblioteka::CFiltryGraficzne_Biblioteka()
{
	return;
}
