#pragma once

#include "Core.h"


namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application(); //constructor
		virtual ~Application(); //destructor

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();


}