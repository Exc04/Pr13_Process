// PR13_PRoCCES_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>


using namespace std;


int main()
{
    int n = 3;
    string start = "2";
    string end = "500000";

    PROCESS_INFORMATION pi[5];
    string files[5];
    DWORD priorities[5] = { IDLE_PRIORITY_CLASS, NORMAL_PRIORITY_CLASS, HIGH_PRIORITY_CLASS };

    cout << "=== СОЗДАНИЕ ПРОЦЕССОВ ===" << endl;

    for (int i = 0; i < n; i++) {
        files[i] = "res_" + to_string(i) + ".txt";

        STARTUPINFO si;
        ZeroMemory()
    }
}

