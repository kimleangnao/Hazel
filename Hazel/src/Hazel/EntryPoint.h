#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
 
    //for now we call this in here
    Hazel::Log::Init();
    HZ_CORE_WARN("Initialize Log!");
    int a = 5;

    HZ_INFO("Hello! Var={0}", a);

    auto app = Hazel::CreateApplication(); 
    app->Run();
    delete app;

}

#endif
