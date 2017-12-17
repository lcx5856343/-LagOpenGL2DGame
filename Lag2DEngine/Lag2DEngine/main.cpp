///-------------------------------------------------------------------------------------------------
/// @file	main.cpp.
///
/// @brief	主程序入口
///-------------------------------------------------------------------------------------------------

#include<iostream>
#include<stdio.h>
#include<LagHead.h>
#include<AppDelegate.h>
using namespace std;
using namespace Lag;

int main() {
	AppDelegate app;
	app.run();
	LOGD("This game is end");
	return 0;
}