#pragma once

#include "Core.h"

#include "Window.h"
#include "Hazel/LayerStack.h"
#include "Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application(); //constructor
		virtual ~Application(); //destructor

		void Run();

		void onEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverLayer(Layer* layer);
	private:
		bool onWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// To be defined in Client
	Application* CreateApplication();


}
