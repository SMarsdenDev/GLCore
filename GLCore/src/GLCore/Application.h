#pragma once
#include "Core.h"

namespace GLCore
{
	class GLCORE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
	};

	//! To be defined by Client
	Application* CreateApplication();
}
