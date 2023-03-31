#include <stdio.h>

int main() {
    float basicSalary, HRA, DA, PF, netSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    HRA = 10 * basicSalary;
    DA = 5 * basicSalary;
    PF = 12 * basicSalary;
    netSalary = basicSalary + HRA + DA - PF;

    printf("\nSalary Details\n");
    printf("Basic Salary: Rs. %.2f\n", basicSalary);
    printf("HRA: Rs. %.2f\n", HRA);
    printf("DA: Rs. %.2f\n", DA);
    printf("PF: Rs. %.2f\n", PF);
    printf("Net Salary: Rs. %.2f\n", netSalary);

    return 0;
}

