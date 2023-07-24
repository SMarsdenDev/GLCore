#pragma once

#ifdef GL_PLATFORM_WINDOWS

extern GLCore::Application* GLCore::CreateApplication();

int main(void)
{
	auto app = GLCore::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif