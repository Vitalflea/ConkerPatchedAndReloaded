#pragma once

#include <Windows.h>

namespace conker {

	struct WindowRect {
		int m_x, m_y, m_w, m_h;
		WindowRect(const int& x = CW_USEDEFAULT, const int& y = CW_USEDEFAULT, const int& w = CW_USEDEFAULT, const int& h = CW_USEDEFAULT) : m_x{ x }, m_y{ y }, m_w{ w }, m_h{ h } {}
	};
}