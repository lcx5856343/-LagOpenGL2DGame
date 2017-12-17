#include "Director.h"
namespace Lag {
	Director* Director::m_pInstance = NULL;
	Director::~Director()
	{
	}

	Director * Director::getInstance()
	{
		if (m_pInstance == NULL) {
			m_pInstance = new Director();
		}
		return m_pInstance;
	}

	Director::Director()
	{
#ifdef _DEBUG
		LOGD("Director is OK!");
#endif
	}

	void Director::InitWithWinSize(WinSize size, const char* pName)
	{
		m_Size = size;
		m_sWindowsName = pName;
	}
}