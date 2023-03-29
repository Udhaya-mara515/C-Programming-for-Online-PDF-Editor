#include<stdio.h>
#include<conio.h>
int main() 
{
    int a[10], n;
    int largest1, largest2, i;
    printf("Enter number of elements you want in array : ");
    scanf("%d", &n);
    printf("Enter elements :\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    largest1 = a[0];
    for (i = 0; i < n; i++) 
	{
        if (a[i] > largest1) 
        largest1 = a[i];
    }
    largest2 = a[0];
    for (i = 1; i < n; i++) 
	{
        if (a[i] > largest2 && a[i] < largest1)
        largest2 = a[i];
    }
    printf("\nFirst largest number is : %d ", largest1);
    printf("\nSecond largest number is : %d ", largest2);
}
