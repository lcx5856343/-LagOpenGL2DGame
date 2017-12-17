#include "AppDelegate.h"
#include "Director.h"
namespace Lag {
	AppDelegate::AppDelegate()
	{
		Init();
	}
	AppDelegate::~AppDelegate()
	{
		Release();
	}
	void AppDelegate::run()
	{
		while (!glfwWindowShouldClose(m_pHandle))
		{
			glfwSwapBuffers(m_pHandle);
			glClearColor(0.2f, 0.3f, 0.3f, 1.0);
			glClear(GL_COLOR_BUFFER_BIT);
			LOGD("I told you I render something");
			glfwPollEvents();
		}
	}
	void AppDelegate::Init()
	{
		glfwInit();
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

		int nWidth = 800;
		int nHeight = 600;
		WinSize winSize(nWidth, nHeight);
		const char* windowsName = "Lag2DGame";
		Director::getInstance()->InitWithWinSize(winSize, windowsName);
		m_pHandle = glfwCreateWindow(nWidth, nHeight, windowsName, NULL, NULL);
		if (m_pHandle == NULL)
		{
			LOGE("Failed to create GLFW window");
			glfwTerminate();
			return;
		}
		glfwMakeContextCurrent(m_pHandle);
	}

	void AppDelegate::Release()
	{
		glfwDestroyWindow(m_pHandle);
		//delete m_pHandle;
		m_pHandle = NULL;
	}

}