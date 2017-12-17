///-------------------------------------------------------------------------------------------------
/// @file	LagLogHelp.h.
///
/// @brief  Lag日志输出头文件
///-------------------------------------------------------------------------------------------------
#ifndef _LagLogHelp_H_
#define _LagLogHelp_H_
#include <windows.h>
#include <stdio.h>
#include <ctime>

#define LOGI(...) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY); \
											fprintf(stderr,"%08d : ",clock());fprintf(stderr,__VA_ARGS__);fprintf(stderr,"\r\n");

#define LOGD(...) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_BLUE |  FOREGROUND_INTENSITY); \
											fprintf(stderr,"%08d : ",clock());fprintf(stderr,__VA_ARGS__);fprintf(stderr,"\r\n");

#define LOGE(...) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED |  FOREGROUND_INTENSITY); \
										 fprintf(stderr,"%08d : ",clock());fprintf(stderr,__VA_ARGS__);fprintf(stderr,"\r\n%s(%d)\r\n",__FILE__,__LINE__);


#endif // 
