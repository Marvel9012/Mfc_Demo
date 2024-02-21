//Hello write a code below ...

#include<afxwin.h>

class myframe :public CFrameWnd {
public:
	myframe() {
		Create(0, "title");
	}
};

class myapp :public CWinApp {
public:
	BOOL InitInstance() {
		myframe* pApp = new myframe;
		m_pMainWnd = pApp;
		pApp->ShowWindow(1);

		return TRUE;
	}
};

myapp obj;

