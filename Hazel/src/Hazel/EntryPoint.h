#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::create_application();

int main(int argc, char **argv) {
	Hazel::Log::init();
	Hazel::Application* app = Hazel::create_application();
	HZ_CORE_LOG_TRACE("Application created!");
	int a = 0;
	HZ_LOG_WARN("a = {0}", a);
	app->run();
	delete app;
}


#else
#error Hazel only supports Windows!
#endif // HZ_PLATFORM_WINDOWS

