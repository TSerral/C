//2.22
#include<stdio.h> 
int main(){
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	double a=0;
	printf("�������һ��1��100֮���������");
	do{
		printf("�²��������");
		scanf("%lf",&a);
		count++;
		if(a>number){
			printf("��µ������ˡ�\n");
	    }else if(a<number){
	    	printf("��µ���С�ˡ�\n");
	    }
	  }while(a!=number);
	  printf("̫���ˣ�������%d�ξͲµ��˴𰸡�",count);
} 
