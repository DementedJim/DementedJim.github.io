 #include<stdio.h>
 #include<conio.h>
 #include <locale.h>
 void main()
 {
 char *locale = setlocale(LC_ALL, "");
 int i,a,b;
 /* 覧覧覧覧覧覧覧覧覧 */
 printf("\nﾂ粢蒻�� 葢� �褄�� �頌��: "); scanf("%d %d",&a,&b);
 printf("\n");
printf("ﾍ��褞� � 鈿璞褊�� 礪��� ��瑩�裙� 矜鶯� �頌�� a:\n");
for (i=15;i>=8;i--) /* ﾎ磅���頸� 頌����銛褌�� 竟�褞籵� */
 printf("(%d,%d) ",i,(a>>i)&0x01); /* ﾎ磅���頸� 鈞�頌� (a>>i)&0x01 */
printf("\n\n");
/* 覧覧覧覧覧覧覧覧覧 */
printf("ﾍ��褞� � 鈿璞褊�� 礪��� ��琅�裙� 矜鶯� �頌�� a:\n");
for (i=7;i>=0;i--) /* ﾎ磅���頸� 頌����銛褌�� 竟�褞籵� */
 printf("(%d,%d) ",i,(a>>i)&0x01);
printf("\n\n");
/* 覧覧覧覧覧覧� */
printf("ﾁ頸� �頌�� b � ������ ����蓐� : ");
for (i=15;i>=0;i--)
 printf("%d",(b>>i)&0x01);
printf("\n");
/* 覧覧覧覧覧覧� */
printf("ﾁ頸� �頌�� b � �碣瑣��� ����蓐�: "); /* ﾄ��顏頸� ���, �������� ��
��韲褞: ｫﾁ頸� �頌�� b � ������ ����蓐蟒 */
for (i=0;i<=15;i++)
 printf("%d",(b>>i)&0x01);
printf("\n\n");
/* 覧覧覧覧覧覧覧覧 */
 getch();
}

