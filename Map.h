#pragma once
#include "pch.h"

namespace Composants {
	ref class Map {
	public:
		virtual String^ SELECT(int) abstract;
		virtual String^ INSERT(int) abstract;
		virtual String^ DELETE(void) abstract;
		virtual String^ UPDATE(String^) abstract;
	};
}