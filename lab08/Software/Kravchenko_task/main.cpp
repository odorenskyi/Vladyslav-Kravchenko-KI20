#include <iostream>
#include <windows.h>
#include <wchar.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#include "moduleskravchenko.h"
using namespace std;




int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _wsetlocale(LC_ALL,L"");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, y, z, a, b, q, w;
    wcout << L"___===Виконав студент групи КБ20 Кравченко Владислав Олегович © ===___" << endl;
    wcout << L"x=" << endl;
    wcin >> x;
    wcout << L"y=" << endl;
    wcin >> y;
    wcout << L"z=" << endl;
    wcin >> z;
    wcout << L"a=" << endl;
    wcin >> a;
    wcout << L"b=" << endl;
    wcin >> b;
    q = a + 1;
    w = b + 2;
    wcout << L"a+1=b+2 : ";
    if (q == w){
        wcout << L"true" << endl;
    } else
    {
        wcout << L"false" << endl;
    }

    wcout << L"S=" << s_calculation(x, y, z);

    return 0;
}
