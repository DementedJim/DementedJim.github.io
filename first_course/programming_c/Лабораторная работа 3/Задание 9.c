#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int a;
	printf("������� ����� ������: "); scanf("%d", &a);
	switch (a) {
		case 1:
            printf("������\n");
            break;
        case 2:
            printf("�������\n");
            break;
        case 3:
            printf("����\n");
            break;
        case 4:
            printf("������\n");
            break;
        case 5:
            printf("���\n");
            break;
        case 6:
            printf("����\n");
            break;
		case 7:
            printf("����\n");
            break;
		case 8:
            printf("������\n");
            break;
		case 9:
            printf("��������\n");
            break;
		case 10:
            printf("�������\n");
            break;
		case 11:
            printf("������\n");
            break;
		case 12:
            printf("�������\n");
            break;		    
        default:
            printf("�������� ����\n");
	}
	getch();
}
