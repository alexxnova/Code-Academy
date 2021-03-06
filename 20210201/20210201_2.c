/*
Напишете функцията int atof(char *s), която
преобразува стринг в число с десетична запетая. Тази функция е
подобна на разглежданата по-горе atoi(char *s), само че когато се
стигне до . точката, отделяща цялата част от дробната, трябва
да се пусне още един цикъл, който да изчисли числото в
дробната част по същия начин, както е числото в цялата част.
Само че тук при дробната част трябва да имаме една
променлива, която да умножаваме по 10 всеки път до края на
дробната част power *= 10; Накрая трябва да разделим
полученото число на тази променлива, за да получим реалното
число с плаващата заперая на точното място. 
*/
#include <stdio.h>
double atof( char *s);

int main(void){
    char str[] = "1234.567";
    printf("%f",atof(str));
    return 0;
}

double atof( char *s){
    int i=0;
    double n, p;
    for(n = 0; s[i] >= '0' && s[i] <= '9'; i++){
        n = 10 * n + (s[i] - '0');
    }
    if(s[i]=='.')i++;
    for(p = 1; s[i] >= '0' && s[i] <= '9'; i++){
        n = 10 * n + (s[i] - '0');
        p=p*10;
    }
    return n/p;
}

