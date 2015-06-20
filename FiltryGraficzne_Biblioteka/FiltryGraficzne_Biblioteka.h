// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FILTRYGRAFICZNE_BIBLIOTEKA_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FILTRYGRAFICZNE_BIBLIOTEKA_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FILTRYGRAFICZNE_BIBLIOTEKA_EXPORTS
#define FILTRYGRAFICZNE_BIBLIOTEKA_API __declspec(dllexport)
#else
#define FILTRYGRAFICZNE_BIBLIOTEKA_API __declspec(dllimport)
#endif

// This class is exported from the FiltryGraficzne_Biblioteka.dll
class FILTRYGRAFICZNE_BIBLIOTEKA_API CFiltryGraficzne_Biblioteka {
public:
	CFiltryGraficzne_Biblioteka(void);
	// TODO: add your methods here.
};

extern FILTRYGRAFICZNE_BIBLIOTEKA_API int nFiltryGraficzne_Biblioteka;

FILTRYGRAFICZNE_BIBLIOTEKA_API int fnFiltryGraficzne_Biblioteka(void);

extern "C" FILTRYGRAFICZNE_BIBLIOTEKA_API void _stdcall FiltryGraficzne(void *, int, int, void *, void *, int);