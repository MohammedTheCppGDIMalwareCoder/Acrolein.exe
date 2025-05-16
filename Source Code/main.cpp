#include <windows.h>
#include <math.h>
#include <windowsx.h>
static ULONGLONG n, r;
int randy() { return n = r, n ^= 0x8ebf635bee3c6d25, n ^= n << 5 | n >> 26, n *= 0xf3e05ca5c43e376b, r = n, n & 0x7fffffff; }
typedef union _RGBQUAD {
	COLORREF rgb;
	struct {
		BYTE b;
		BYTE g;
		BYTE r;
		BYTE unused;
	};
} *PRGBQUAD;
int red, green, blue;
bool ifcolorblue = false, ifblue = false;
COLORREF Hue(int length) {
	if (red != length) {
		red < length; red++;
		if (ifblue == true) {
			return RGB(red, 0, length);
		}
		else {
			return RGB(red, 0, 0);
		}
	}
	else {
		if (green != length) {
			green < length; green++;
			return RGB(length, green, 0);
		}
		else {
			if (blue != length) {
				blue < length; blue++;
				return RGB(0, length, blue);
			}
			else {
				red = 0; green = 0; blue = 0;
				ifblue = true;
			}
		}
	}
}
VOID WINAPI sound1() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t ^ 56 + t * 2 >> t);

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound2() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>((t ^ t * (t >> (t >> 8 & 9) & 30) | t * 4));

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound3() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t>>4)*(t>>1)|t>>7;

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound4() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>((t*9)&(t>>4))|(t*5&t>>7)|(t*3&t/1024)-1;

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound5() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 16000, 16000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[16000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(10*(t>>8|t|t>>(t>>17))+(1&t>>11)*t);

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound6() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t*(0xCA98>>(t>>9&14)&15)|t>>3);

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound7() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t*t/(1+(t>>9&t>>8)))&128;

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound8() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t*(t>>8|t>>7));

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound9() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t * (t * t + (t >> 15 | 1) / (t - 1280 ^ t) >> 10));

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
DWORD WINAPI rgbtrain(LPVOID lpParam) {
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    while (1) {
        HDC hdc = GetDC(0);
    	HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
        BitBlt(hdc, 0, 0, w, h, hdc, -30, 0, 0x1900ac010e);
        BitBlt(hdc, 0, 0, w, h, hdc, w - 30, 0, 0x1900ac010e);
        //BitBlt(hdc, 0, 0, w, h, hdc, 0, -30, 0x1900ac010e);
        //BitBlt(hdc, 0, 0, w, h, hdc, 0, h - 30, 0x1900ac010e);
    	DeleteObject(brush);
        ReleaseDC(0, hdc);
        //Sleep(rand() % 100);
    }
}
DWORD WINAPI plgbit(LPVOID lpParam) {
	HDC hdc = GetDC(0);
 
	int sw = GetSystemMetrics(SM_CXSCREEN);
	int sh = GetSystemMetrics(SM_CXSCREEN);
 
	POINT points[3];
 
	DWORD startTime = GetTickCount();
	const DWORD duration = 50000;
 
	while (GetTickCount() - startTime < duration)
	{
		points[0].x = 0;
		points[0].y = 0;
 
		points[1].x = rand() % sw;
		points[1].y = rand() % sh;
 
		points[2].x = sw + (rand() % sw);
		points[2].x = sh + (rand() % sh);
 
		PlgBlt(hdc, points, hdc, 0, 0, sw, sh, 0, 0, 0);
 
		Sleep(50);
	}
 
	ReleaseDC(0, hdc);
	return 0;
}
DWORD WINAPI hslshader(LPVOID lpParam) {
    int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
    _RGBQUAD* data = (_RGBQUAD*)VirtualAlloc(0, (w * h + w) * sizeof(_RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    for (int i = 0;; i++, i %= 3) {
        HDC desk = GetDC(NULL);
        HDC hdcdc = CreateCompatibleDC(desk);
        HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
        SelectObject(hdcdc, hbm);
		BitBlt(hdcdc, 0, 0, w, h, desk, 0, 0, SRCCOPY);
        GetBitmapBits(hbm, w * h * 4, data);
        for (int i = 0; i < w * h; i++) {
			int x = i % w, y = i / h, t = y ^ y | x;
            data[i].rgb = RGB(GetRValue(Hue(239)),GetGValue(Hue(239)),GetBValue(Hue(239)));
		}
        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(desk, 0, 0, w, h, hdcdc, 0, 0, SRCCOPY);
        DeleteObject(hbm);
        DeleteObject(hdcdc);
        DeleteObject(desk);
    }
    return 0;
} 
DWORD WINAPI triangles(LPVOID lpParam) {
		while(1){
		int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
		HDC hdc = GetDC(0);
		HPEN hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
		HPEN hOldPen = SelectPen(hdc, hPen);
	
		HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 255));
		HBRUSH hOldBrush = SelectBrush(hdc, hBrush);
		
		POINT vertices[] = { {rand() % w, rand() % h}, {rand() % w, rand() % h}, {rand() % w, rand() % h} };
		Polygon(hdc, vertices, sizeof(vertices) / sizeof(vertices[0]));
		
		SelectBrush(hdc, hOldBrush);
		DeleteObject(hBrush);
		
		SelectPen(hdc, hOldPen);
		DeleteObject(hPen);
		ReleaseDC(0,hdc);
	}
}
DWORD WINAPI venomvirusshader(LPVOID lpParam) {
    int x = GetSystemMetrics(SM_CXSCREEN);
    int y = GetSystemMetrics(SM_CYSCREEN);
    while (1)
    {
        HDC hdc = GetDC(0);
        HDC desk = GetDC(NULL);
        PatBlt(desk, 10, 10, 10, 10, PATCOPY);
        BitBlt(desk, rand() % 1200, rand() % 1200, x, y, hdc, rand() % 1200, rand() % 1200, rand() % 0x100000);
        ReleaseDC(0, hdc);
        Sleep(10);
    }
}
DWORD WINAPI whiteiner(LPVOID lpParam) {
	while (1) {
	    HDC hdc = GetDC(0);
	    int x = SM_CXSCREEN;
	    int y = SM_CYSCREEN;
	    int w = GetSystemMetrics(0);
	    int h = GetSystemMetrics(0);
	    BitBlt(hdc, rand() % 10, rand() % 10, w, h, hdc, rand() % 12, rand() % 12, SRCPAINT);
	    Sleep(10);
    }
}
DWORD WINAPI rgb(LPVOID lpParam) {
    int time = GetTickCount();
    int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
    RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0, (w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    for (int i = 0;; i++, i %= 3) {
        HDC desk = GetDC(NULL);
        HDC hdcdc = CreateCompatibleDC(desk);
        HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
        SelectObject(hdcdc, hbm);
        BitBlt(hdcdc, 0, 0, w, h, desk, 0, 0, SRCCOPY);
        GetBitmapBits(hbm, w * h * 4, data);
        int v = 0;
        BYTE byte = 0;
        if ((GetTickCount() - time) > 60000)
            byte = rand()%0xff;
        for (int i = 0; w * h > i; i++) {
            if (i % h && rand() % 110)
                v = rand() % 100;
            *((BYTE*)data + 4 * i + v) -= 5;
        }
        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(desk, 0, 0, w, h, hdcdc, 0, 0, SRCCOPY);
        DeleteObject(hbm);
        DeleteObject(hdcdc);
        DeleteObject(desk);
    }
    return 0;
} 
DWORD WINAPI wide(LPVOID lpParam) {
		HDC desk;
	int sw, sh;
	
	while(1){
		desk = GetDC(0);
		sw = GetSystemMetrics(0);
		sh = GetSystemMetrics(1);
		StretchBlt(desk, -20, 0, sw+40, sh, desk, 0, 0, sw, sh, SRCCOPY);
		ReleaseDC(0, desk);
		Sleep(4);
	}
}
DWORD WINAPI rgbquad(LPVOID lpParam) {
	    int time = GetTickCount();
    int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
    RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0, (w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    for (int i = 0;; i++, i %= 3) {
        HDC desk = GetDC(NULL);
        HDC hdcdc = CreateCompatibleDC(desk);
        HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
        SelectObject(hdcdc, hbm);
        BitBlt(hdcdc, 0, 0, w, h, desk, 0, 0, SRCCOPY);
        GetBitmapBits(hbm, w * h * 4, data);
        int v = 0;
        BYTE byte = 0;
        if ((GetTickCount() - time) > 60000)
            byte = randy()%0xff;
        for (int i = 0; w * h > i; i++) {
            if (i % h == 0 && randy() % 100 == 0)
                v = randy() % 50;
            ((BYTE*)(data + i))[v % 3] += ((BYTE*)(data + i + v))[v] ^ byte;
        }
        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(desk, 0, 0, w, h, hdcdc, 0, 0, SRCCOPY);
        DeleteObject(hbm);
        DeleteObject(hdcdc);
        DeleteObject(desk);
    }
    return 0;
} 
int main(){
	    if (MessageBoxW(NULL, L"Run Malware?", L"Acrolein.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
    {
        ExitProcess(0);
    }
    else
    {
        if (MessageBoxW(NULL, L"Are You Sure?", L"Acrolein.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
        {
            ExitProcess(0);
        }
        else{
			HANDLE t1 = CreateThread(0, 0, rgbtrain, 0, 0, 0);
	        sound1();
	        Sleep(30000);
	        TerminateThread(t1, 0);
	        CloseHandle(t1);
	        HANDLE t2 = CreateThread(0, 0, plgbit, 0, 0, 0);
	        sound2();
	        Sleep(30000);
	        TerminateThread(t2, 0);
	        CloseHandle(t2);
	        HANDLE t3 = CreateThread(0, 0, hslshader, 0, 0, 0);
	        sound3();
	        Sleep(30000);
	        TerminateThread(t3, 0);
	        CloseHandle(t3);
	        HANDLE t4 = CreateThread(0, 0, triangles, 0, 0, 0);
	        sound4();
	        Sleep(30000);
	        TerminateThread(t4, 0);
	        CloseHandle(t4);
	        HANDLE t5 = CreateThread(0, 0, venomvirusshader, 0, 0, 0);
	        sound5();
	        Sleep(30000);
	        TerminateThread(t5, 0);
	        CloseHandle(t5);
	        HANDLE t6 = CreateThread(0, 0, whiteiner, 0, 0, 0);
	        sound6();
	        Sleep(30000);
	        TerminateThread(t6, 0);
	        CloseHandle(t6);
	        HANDLE t7 = CreateThread(0, 0, rgb, 0, 0, 0);
	        sound7();
	        Sleep(30000);
	        TerminateThread(t7, 0);
	        CloseHandle(t7);
	        HANDLE t8 = CreateThread(0, 0, wide, 0, 0, 0);
	        sound8();
	        Sleep(30000);
	        TerminateThread(t8, 0);
	        CloseHandle(t8);
	        HANDLE t9 = CreateThread(0, 0, rgbquad, 0, 0, 0);
	        sound9();
	        Sleep(30000);
	        TerminateThread(t9, 0);
	        CloseHandle(t9);
	    }
	}
}
