#ifndef _Director_H_
#define _Director_H_

#include <LagHead.h>

namespace Lag {
	class Director {
	public:
		~Director();
		static Director* getInstance();
		void InitWithWinSize(WinSize size, const char* pName);
		const char* getWindowsName() const { return m_sWindowsName; }
		void setWindowsName(const char* val) { m_sWindowsName = val; }
		WinSize getSize() const { return m_Size; }
		void setSize(WinSize val) { m_Size = val; }
	private:
		Director();
		static Director* m_pInstance;
		WinSize m_Size;
		const char* m_sWindowsName;
	};
}
#endif // _Director_H_
