/*
 Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}


*/

#include <stdio.h>

void sort(int a[], int n);

int main(void)
{
    int len = 5;
    int num[5] = {3, 2, 1, 5, 4};

    sort(num, len);

    return 0;
}

void sort(int a[], int n)
{
    int i, j, tmp;
    int *pi = a;
    int *pj = a + 1;
    printf("%p\n", pi);
    printf("%p\n", pj);
    printf("%p\n", &a[n] - 1);

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (*(a + i) > *(a + j)){
                tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}