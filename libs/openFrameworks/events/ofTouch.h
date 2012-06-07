#pragma once

#include "ofBaseApp.h"

class ofTouch{

public:
	ofTouch(ofBaseApp* ofAppPtr);
	~ofTouch(void);

	virtual void OnTouchDown(int id, int x, int y);
	virtual void OnTouchMove(int id, int x, int y);
	virtual void OnTouchUp(int id, int x, int y);

	LRESULT processTouch(HWND hWnd, WPARAM wParam, LPARAM lParam);

	void setAppPointer(ofBaseApp * ofAppPtr);
	
private:
	ofBaseApp * _ofAppPtr;
};