#include <stdio.h>
#include <math.h>
#include <locale.h>

      float eiler(int,int);
      float rk(int);
      void sistema(void);
      float fun(float,float);
      float fun1(float,float,float);
    int main(void)
    {
    	char *locale = setlocale(LC_ALL, "");
      int n=0,v,m;
      printf("\n�������� �������:");
      printf("\n1. ������� �� ������� �������");
      printf("\n2. ������� �� ������� �������");
      printf("\n3. ������� ������ ��");
      printf("\n4. �����");
      scanf("\n%d",&v);
      if (v==1) 
      {
         printf("\n�������� �����:");
         printf("\n1. ����� ������");
         printf("\n2. ����� �����-����� 4 �������");
         scanf("\n%d",&m);
         if (m==1)
         {
           printf("\n������� ��������: ");
           scanf("%d",&n);
           printf("�������: %f",eiler(n,1));
         }
         else if (m==2)
         {
           printf("\n������� ��������: ");
           scanf("%d",&n);                 
           printf("�������: %f",rk(n));
         }
       }
       else if (v==2)
       {
         printf("�� ������� �������");
         printf("�������: %f",eiler(n,2));
       }
       else if (v==3)
       {
         printf("������� ���������");
         sistema();
       }  
      getch();
      return 0;
    }
   	//����� ������
    float eiler(int n,int p) {
				float a,b,x,y,h,x1,y1,y2;
    {
      if (p==1)
      {
        a=0; 
								b=1;
        h=(b-a)/n;
        x=a;
        y=0;
      }
      else if (p==2)
      {
        a = 1;
								b = 1.5;
								x=1;
								y1=0.77;
								y2=-0.44;
								h=0.1;
								y=-0.44;
      }  
      while (x<=b)
      {
        if (p==1)
        {
          y=y+h*(fun(x,y));
        }
        else if (p==2)
        {
          y2=y1+h*y;
          y=y+h*((-y/x)-y1);
          printf ("x = %f, y' = %f, y'' = %f\n",x+h, y1,y);
          y1=y1+y2;
        }
        x=x+h;
      }
      return y;  
    }
}
       //����� �����-�����
    float rk(int n) {
      float a=0,b=1,x=a,y=0,h,k1,k2,k3,k4;
      h=(b-a)/n;
      while (x<=b)
      {
        k1=h*(fun(x,y));
        k2=h*(fun(x+h/2,y+k1/2));
        k3=h*(fun(x+h/2,y+k2/2));
        k4=h*(fun(x+h,y+k3));
        y=y+1/6*(k1+2*k2+2*k3+k4);
        x=x+h;
      }
      return y;
    }
       //������� ��������� ������� ������
    void sistema()     
    {                      
      float a=0,b=0.3,y=1,y1,x=2,x1,z=1,z1,t=a,h=0.003; 
      while (t<=b)         
      { 
        x=x1; y=y1; z=z1; 
        x=x1+h*(-2*x1+5*z1); 
        y=y1+h*(sin(t-1)*x1-y1-3*z1);
        z=z1+h*(-x1+2*z1);
        t=t+h;             
      }                    
      printf("�������: %f, %f, %f",x,y,z);            
    } 
       //��������������� �������              
    float fun(float x,float y)
    {
      float c;
      c=y*(1-x);
      return c;
    }

