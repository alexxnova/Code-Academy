/* Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс)
*/

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>


void handleSignal(int iSignal)
{
    printf("\nCaught signal %d\n", iSignal);
}
int main()
{
    //signal(SIGQUIT, handleSignal);
    signal(SIGINT, handleSignal);
    signal(SIGABRT, handleSignal);
    while(!0)
    {
        Sleep(1);
    }
    return 0;
}