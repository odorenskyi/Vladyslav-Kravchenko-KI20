#include <iostream>
#include <math.h>
#include "moduleskravchenko.h"
#include <wchar.h>
#include <fcntl.h>
#include <fstream>
#include <clocale>
#include <windows.h>
#include <codecvt>
#include <ctime>
#include<cmath>

using namespace std;

void copyright_info();
void clean_input();
void input_funct1();
void input_funct2();
void input_funct3();
void input_funct4();
void input_funct5();
void input_funct6();
void input_funct7();
void task1();
void task2();
void task3();





int main()
{
    copyright_info();

    wchar_t sym;

    wcout << L"Вiтаю! Будь-ласка, введiть символ для вибору операцiї:" << endl;
    do
    {
        wcout << L"Виконання функцiї s_calculation()(z)." << endl;
        wcout << L"Виконання функцiї для розрахунку надбавки заробiтної плати працiвникам(r)." << endl;
        wcout << L"Виконання функцiї для розрахунку температури за шкалою Цельсiя та Фаренгейта(s)." << endl;
        wcout << L"Виконання функцiї для розрахунку кiлькостi бiтових чисел(t)." << endl;
        wcout<<L"Введіть (a) для перевірки на помилки вірш...\n";
        wcout<<L"Введіть (b) для дозапису інформації...\n";
        wcout<<L"Введіть (с) для переведення числа у двійкову систему...\n";

        wcout << L"Вихiд з програми(q/Q)." << endl;
        wcin >> sym;
        if(sym == 'q' || sym == 'Q') return 0;
        else
            switch(sym)
            {
                case 'z':
                    wcout << L"Ви обрали функцiю s_calculation()" << endl;
                    input_funct1();
                    break;
                case 'r':
                    input_funct2();
                    break;
                case 's':
                    input_funct3();
                    break;
                case 't':
                    input_funct4();
                    break;
                case 'a':
                    input_funct5();
                    break;
                case 'b':
                    input_funct6();
                    break;
                case 'c':
                    input_funct7();
                    break;

                default:
                    wcout << L"Невiрно введений ключ, будь-ласка використайте запропонованi!\a";
                    clean_input();
                    break;
            }
    }
    while(true);

    return 0;
}

void copyright_info()
{
    _wsetlocale(LC_ALL,L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);

    wcout << L"Розробник застосунка: студент ЦНТУ Кравченко Владислав Олегович" << endl;
    wcout << L"----------------(с) All rights reserved-------------------" << endl;
}

void clean_input()
{
    fflush(stdin);
    wcin.clear();
}

void input_funct1()
{
    int x,y, z;

    wcout << L"Введіть число, що включно більше -1 та не дорівнює 0" << endl;
    while(!(wcin >> x))
    {
        wcout << L"Помилка, невiрнi вхiднi данi. Будь-ласка спробуйте ще раз." << endl;
        clean_input();
    }
    wcout << L"Введіть число, що включно більше -1 та не дорівнює 0" << endl;
    while(!(wcin >> y))
    {
        wcout << L"Помилка, невiрнi вхiднi данi. Будь-ласка спробуйте ще раз." << endl;
        clean_input();
    }

    wcout << L"Введiть число, що бiльше 0 включно" << endl;
    while(!(wcin >> z))
    {
        wcout << L"Помилка, невiрнi вхiднi данi. Будь-ласка спробуйте ще раз." << endl;
        clean_input();
    }

    if(!isnan(s_calculation(x, y, z )))
        wcout << L"Результат = " << s_calculation(x,y,z) << endl;
    else
    {
        wcout << L"Помилка, невалiднi вхiднi данi для роботи функцiї. Будь-ласка спробуйте ще раз." << endl;
        input_funct1();
    }
}

void input_funct2()
{
    float x, z;
    int y;
    wcout << L"Ви обрали функцiю для розрахунку надбавки працiвникам" << endl;
    wcout << L"Введiть число в iнтервалi вiд 1 до 10347" << endl;
    while(!(wcin >> x))
    {
        wcout << L"Помилка, невiрнi вхiднi данi. Будь-ласка спробуйте ще раз." << endl;
        clean_input();
    }
    wcout << L"Введіть число в iнтервалi вiд 1 до 29999" << endl;
    while(!(wcin >> z))
    {
        wcout << L"Помилка, невiрнi вхiднi данi. Будь-ласка спробуйте ще раз." << endl;
        clean_input();
    }
    wcout << L"Введiть число в iнтервалi включно від 0 до 50" << endl;
    while(!(wcin >> y))
    {
        wcout << L"Введiть число в iнтервалi вiд 1 до 29999" << endl;
        clean_input();
    }
    if(income_eval(x,z,y) != -1)
        wcout << L"Результат = " << income_eval(x,z,y) << endl;
    else
    {
        wcout << L"Помилка, невалiднi вхiднi данi для роботи функцiї. Будь-ласка спробуйте ще раз." << endl;
        input_funct2();
    }
}

void input_funct3()
{
    float arr[6];

    wcout << L"Введiть температури за градусами";
    wcout << L"Цельсiя в iнтервалi вiд -100 до 100 градусiв о 00:00 04:00 08:00 12:00 16:00 20:00 годинах";
    for(int i = 0; i < 6; i++)
    {
        while(!(wcin >> arr[i]))
        {
            clean_input();
            wcout << L"Помилка! Будь-ласка, введiть заново 6 натуральних чисел\n";
            i = 0;
        }
    }
    if(!isnan(mid_temperature_celsius(arr)))
    {
        wcout << L"Результат за Цельсiєм = " << mid_temperature_celsius(arr) << endl;
        wcout << L"Результат за Фаренгейтом = " << mid_temperature_farengates(arr) << endl;
    }
    else
    {
        wcout << L"Помилка, невалiднi вхiднi данi для роботи функцiї. Будь-ласка спробуйте ще раз." << endl;
        input_funct3();
    }
}

void input_funct4()
{
    int N;

    wcout << L"Ви обрали функцiю розрахунку кiлькостi бiтових чисел." << endl;
    wcout << L"Будь-ласка, введiть число в iнтервалi вiд 0 до 10008000";
    wcout << L"для пiдрахунку бiтових чисел залежно вiд 11 бiту." << endl;
    while(!(wcin >> N))
    {
        wcout << L"Помилка, невiрнi вхiднi данi. Будь-ласка спробуйте ще раз." << endl;
        clean_input();
    }
    if(bit_counter(N) != -1)
        wcout << L"Результат  пiдрахунку кiлькостi нулiв, або одиниць = " << bit_counter(N) << endl;
    else
    {
        wcout << L"Помилка, невалiднi вхiднi данi для роботи функцiї. Будь-ласка спробуйте ще раз." << endl;
        input_funct4();
    }
}
std::wifstream::pos_type filesize(const char* filename)
{
    std::wifstream in(filename, std::wifstream::ate | std::wifstream::binary);
    return in.tellg();
}
wstring author = {L"Кравченко Владислав. Версія 1.0"};
wstring virsh ={L"Свята моя ненько, я вдячний Тобі,\n"
                       "Що в хаті тепленько і сіль є, і хліб,\n"
                       "За те, що ще можу свій хрест я нести,\n"
                       "О Матінько Божа, спаси і прости.\n"};

void localization(){
    _wsetlocale(LC_ALL, L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);
    _setmode(_fileno(stdin), _O_U8TEXT);
}
wstring Getter_Input(){
    wifstream input;
    input.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    input.open("input.txt");
    wstring line;
    wstring copys;
    while (getline(input, line))
    {
        copys+=line;
        copys.push_back('\n');
    }
    input.close();
    return copys;
}



void task1(){
    wstring copys=Getter_Input();
    wstring author = L"Кравченко Владислав. Версія 1.0";
    wofstream output;
    output.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    output.open("output.txt");
    output<<L"Ім'я розробника: "<<author<<endl;
    output<<L"а б в г д е є ж з и і ї й к л м н о п р с т у ф х ц ч ш щ ь ю я"<<endl;

    if (virsh==copys){
        output<<L"Твір був перевірений , помилок не виявлено.";
    }
    else{
        output<<L"Твір був перевірений , помилки були виявленні.";
    }
    output.close();
}
void task2(){
    time_t cur_date=time(0);
    wofstream input;
    input.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    input.open("input.txt", ios_base::app);
    input<<L"Державний Прапор України — стяг із двох рівновеликих горизонтальних смуг синього і жовтого кольорів.\n\n";
    input<<L"Великий Державний Герб України встановлюється з урахуванням малого Державного Герба України та герба \nВійська Запорізького законом, що приймається не менш як двома третинами \nвід конституційного складу Верховної Ради України\n\n";
    input<<L"Державний Гімн України — ";
    input<<L"Ще не вмерла України і слава, і воля,\n"
                 L"Ще нам, браття молодії, усміхнеться доля.\n"
                 L"Згинуть наші воріженьки, як роса на сонці.\n"
                 L"Запануєм і ми, браття, у своїй сторонці.\n"
                 L"Душу й тіло ми положим за нашу свободу,\n"
                 L"І покажем, що ми, браття, козацького роду.\n\n";
    input<<endl<<L"Дата дозапису: "<<ctime(&cur_date);
    input.close();
}

int validation(){
    int a=0;
    while (!(wcin >> a)){
        wcout <<L"Введіть число:\n";
        wcin.clear();
        fflush(stdin);
        wcout<<L"===>";
    }
    while(a<0 || a==0 ){
        if(a<0 || a==0){
            wcout<<L"Введіть число більше 0"<<endl;
            wcout<<L"===>";
            wcin.clear();
            fflush(stdin);
        }
        a=validation();
    }
    return a;
}

void task3(){
    wcout<<L"Введіть число\n"<<endl;
    wstring text;
    int a=0;
    a=validation();
    int k=0;
    while(a) {
        k = a % 2;
        a = a / 2;
        text =to_wstring(k)+text;
    }
    wcout<<L"Число у двійковій системі: "<<text<<endl;

}
void input_funct5(){
        {

            wcout<<L"Створіть файл (input) з розширенням .тхт у папці з .ехе файлом, \nпотім в (input.txt) запишіть вірш який знаходиться на гітхабі в папці (task). \nЦе все необхідно для коректної роботи программи. \nДякую за увагу!\n";
            task1();
        }
    }
 void input_funct6()
        {
            wcout<<L"Дозапис було створено у файлі input.Для коректної роботи функції (а) видаліть дозапис після перегляду\n";
            task2();

        }
void input_funct7()
        {
            task3();

        }
