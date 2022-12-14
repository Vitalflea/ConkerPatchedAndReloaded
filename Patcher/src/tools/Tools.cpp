#include "tools/Tools.hpp"

#include <Windows.h>

void conker::tools::PreventMultipleInstances() {

	auto mutex_handle = CreateMutex(NULL, TRUE, __TIME__);

	if (mutex_handle == NULL
		|| GetLastError() == ERROR_ALREADY_EXISTS) {

		ExitProcess(0);
	}
}