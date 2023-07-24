#include <GLCore.h>

class Sandbox : public GLCore::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
private:
};

GLCore::Application* GLCore::CreateApplication()
{
	return new Sandbox();
}
