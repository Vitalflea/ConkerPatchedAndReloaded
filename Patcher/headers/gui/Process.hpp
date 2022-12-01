#pragma once

#include <Windows.h>

#include "ProcessInfo.hpp"

namespace conker {

	class Process {
	public:
		Process(const ProcessInfo& info);
		~Process();
		const HWND& GetWindowHandle() const {

			return m_window_handle;
		}
	private:
		WNDCLASSEX m_class_info;
		HWND m_window_handle;
	};
}