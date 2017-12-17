#ifndef _LagStruct_H_
#define _LagStruct_H_

namespace Lag {
	typedef struct Size {
		int nWidth;
		int nHeight;
		Size() {
			nWidth = 0;
			nHeight = 0;
		}
		Size(int width, int height) {
			nWidth = width;
			nHeight = height;
		}
	}WinSize,VisiableSize;

	typedef struct Rect {
		int nLeft;
		int nTop;
		int nWidth;
		int nHeight;
		Rect() {
			nLeft = 0;
			nTop = 0;
			nWidth = 0;
			nHeight = 0;
		}
		Rect(int left, int top, int width, int height) {
			nLeft = left;
			nTop = top;
			nWidth = width;
			nHeight = height;
		}

		int getRight() {
			return nLeft + nWidth;
		}
		int getBottom() {
			return nTop + nHeight;
		}
	}LagRect;
}

#endif