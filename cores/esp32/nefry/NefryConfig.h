#ifndef NefryConf_h
#define NefryConf_h

#include <Nefry.h>
#include "Nefry.h"
#include "NefryDataStore.h"

class Nefry_Conf
{
public:
	void
		begin(),
		setStoreTitle(const char set[15], const int num);

	String
		beginWeb(String link),
		setDefaultModuleId();

private:
	bool htmlPrint[20];//10
	char module_input[20][15];
};
extern Nefry_Conf NefryConfig;
#endif
