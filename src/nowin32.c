// nowin32.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "fproc.h"

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        printf("*** NO WIN32 MANUAL ***\n");
        printf("./nowin32 [path/app.exe] [path/app2.exe] ... (etc)\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        int result =
            fcatch(argv[i]);

        printf("Executed: %d", result);
    }
    return 0;
}
