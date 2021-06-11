#include <conio.h>
#include <conio.h>
#include <stdio.h>
void main() {
int length;
char *p1, *p2;
char tmp;
float a = 5.0f;
float b = 3.0f;
printf("a = %.3f\n", a);	//¬ывод переменной с 3 знаками после зап€той
printf("b = %.3f\n", b);	//¬ывод переменной с 3 знаками после зап€той
p1 = (char*) &a;	//—охранение адреса переменной в типе char
p2 = (char*) &b;	//—охранение адреса переменной в типе char
length = sizeof(float);	//ћакс. значение float
while (length--) {	//÷икл, параметром которого €вл€ес€ length. ”словием выхода из цикла €вл€етс€ length равный 0
tmp = *p1;
*p1 = *p2;	
*p2 = tmp;	//Ёта и две строки выше выполн€ют "обмен" значений переменных p1 и p2
p1++; //ѕереход на следующее значение адреса
p2++;	//ѕереход на следующее значение адреса
}
printf("a = %.3f\n", a);
printf("b = %.3f\n", b);
getch();
}
