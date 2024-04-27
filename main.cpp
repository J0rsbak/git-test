#include <windows.h>

// Step 1: Define and implement the Window Procedure function.
LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
        case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            SetBkColor(hdc, RGB(255, 255, 255)); // Set the background color to red
            Rectangle(hdc, 0, 0, 12, 12);
            EndPaint(hwnd, &ps);
            
        }
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hwnd, message, wParam, lParam);
    }
    return 0;
}

// Step 2: Register the window class.
#ifdef UNICODE
#define CLASS_NAME L"Sample Window Class"
#else
#define CLASS_NAME "Sample Window Class"
#endif

ATOM MyRegisterClass(HINSTANCE hInstance) {
    WNDCLASSEX wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WindowProcedure;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = CLASS_NAME;
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    return RegisterClassEx(&wcex);
}

// Step 3: Create the window.
HWND CreateMyWindow(HINSTANCE hInstance, int nCmdShow) {
    HWND hWnd = CreateWindowEx(
        0,
        CLASS_NAME,
        TEXT("Learn to Program Windows"),
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 256, 256,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (!hWnd) {
        return NULL;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return hWnd;
}

// Step 4: The application entry point.
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    MyRegisterClass(hInstance);

    HWND hWnd = CreateMyWindow(hInstance, nCmdShow);

    if (!hWnd) {
        return 1;
    }

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}