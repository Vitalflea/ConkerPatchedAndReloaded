#include "Patcher.hpp"

#include "tools/Tools.hpp"

INT APIENTRY WinMain(_In_ HINSTANCE /*instance*/, _In_opt_ HINSTANCE /*prevInstance*/, _In_ PSTR /*cmdLine*/, _In_ INT /*cmdShow*/) {

	tools::PreventMultipleInstances();

	return 0;
}