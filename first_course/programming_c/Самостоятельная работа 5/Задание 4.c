 #include<stdio.h>
 #include<locale.h>
 
 void main() {
 	char *locale = setlocale(LC_ALL, "");
 	int x=1,y,z;
 	printf("����� ��������� �������� ������� y=2*x+z.\n");
 	printf("������� �������� z: "); 
	scanf("%d",&z);
 	while ((x<100) && (y!=50)) {
 		y=2*x+z; x++;
 		if (y==50) {
 			printf("y=50\n"); 
 		}
 	}
 	if (y==50) {
 	printf("���� ��������!\n");
 	}
 	else {
 		printf("���� ��������! �� y<>50.\n");
	}
 	getch();
}

