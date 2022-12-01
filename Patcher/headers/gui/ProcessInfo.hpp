#pragma once

#include <Windows.h>

#include "WindowRect.hpp"

namespace conker {

	struct ProcessInfo {

		HINSTANCE m_instance;
		const char* m_class_name;
		const char* m_window_name;
		int m_flags;
		int m_extended_flags;
		WindowRect m_window_rect;
		int m_icon;

		ProcessInfo(const HINSTANCE& instance, const char* class_name = "conker", const char* window_name = "conker", const int& flags = WS_OVERLAPPEDWINDOW | WS_VISIBLE, const int& extended_flags = WS_EX_LAYERED, const WindowRect& window_rect = {}, const int& icon = 0)
			: m_instance{ instance }, m_class_name{ class_name }, m_window_name{ window_name }, m_flags{ flags }, m_extended_flags{ extended_flags }, m_window_rect{ window_rect }, m_icon{ icon } {}
	};
}