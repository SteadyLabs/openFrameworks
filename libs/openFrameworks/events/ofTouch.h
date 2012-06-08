#pragma once

#include "ofBaseApp.h"

class ofTouch{

public:
	ofTouch(ofBaseApp* ofAppPtr);
	~ofTouch(void);

	virtual void OnTouchDown(int id, int x, int y);
	virtual void OnTouchMove(int id, int x, int y);
	virtual void OnTouchUp(int id, int x, int y);
    
#ifdef TARGET_WIN32
	LRESULT processTouch(HWND hWnd, WPARAM wParam, LPARAM lParam);
#endif
    
	void setAppPointer(ofBaseApp * ofAppPtr);
	
private:
	ofBaseApp * _ofAppPtr;
};