#include "Hazel.h"

class Sandbox : public Hazel::Application
{
};

Hazel::Application* Hazel::create_application()
{
	return new Sandbox;
}
