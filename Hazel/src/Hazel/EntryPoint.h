#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::create_application();

int main(int argc, char **argv) {
	Hazel::Application* app = Hazel::create_application();
	app->run();
	delete app;
}


#else
#error Hazel only supports Windows!
#endif // HZ_PLATFORM_WINDOWS

