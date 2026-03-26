#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    int choice;
    float a, b, sum, sub, mul, div, per;

    do
    {
        system("cls");
        gotoxy(50, 8);
        printf("......................");
        gotoxy(50, 9);
        printf("  Simple Calculator");
        gotoxy(50, 10);
        printf("......................");
        gotoxy(50, 12);
        printf("1.Addition");
        gotoxy(50, 13);
        printf("2.Subtraction");
        gotoxy(50, 14);
        printf("3.Multiplication");
        gotoxy(50, 15);
        printf("4.Divide");
        gotoxy(50, 16);
        printf("5.Percentage");
        gotoxy(50, 17);
        printf("6.Exit");
        gotoxy(50, 18);
        printf("Enter your choice:");
        scanf("%d", &choice);
        if (choice < 1 || choice > 6)
        {
            gotoxy(50, 19);
            printf("Error");
            Sleep(2000);
        }
        // SWITCH CASE START HERE
        switch (choice)
        {
        case 1:
            gotoxy(50, 21);
            printf("Enter 1st Number :");
            scanf("%f", &a);
            gotoxy(50, 22);
            printf("Enter 2nd Number :");
            scanf("%f", &b);
            sum = a + b;
            gotoxy(50, 23);
            printf("Sum = %.3f", sum);
            getch();
            break;

        case 2:
            gotoxy(50, 21);
            printf("Enter 1st Number :");
            scanf("%f", &a);
            gotoxy(50, 22);
            printf("Enter 2nd Number :");
            scanf("%f", &b);
            sub = a - b;
            gotoxy(50, 23);
            printf("Sub = %.3f", sub);
            getch();
            break;

        case 3:
            gotoxy(50, 21);
            printf("Enter 1st Number :");
            scanf("%f", &a);
            gotoxy(50, 22);
            printf("Enter 2nd Number :");
            scanf("%f", &b);
            mul = a * b;
            gotoxy(50, 23);
            printf("Mul = %.3f", mul);
            getch();
            break;

        case 4:
            gotoxy(50, 21);
            printf("Enter 1st Number :");
            scanf("%f", &a);
            gotoxy(50, 22);
            printf("Enter 2nd Number :");
            scanf("%f", &b);
            div = a / b;
            gotoxy(50, 23);
            printf("Div = %.3f", div);
            getch();
            break;

        case 5:
            gotoxy(50, 21);
            printf("Enter 1st Number :");
            scanf("%f", &a);
            gotoxy(50, 22);
            printf("How to percentage :");
            scanf("%f", &b);
            per = (a / 100) * b;
            gotoxy(50, 23);
            printf("per = %.3f", per);
            getch();
            break;

        case 6:
            exit(0);
        }
    } while (choice != 6);

    return 0;
}
