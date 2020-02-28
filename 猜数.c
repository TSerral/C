//2.22
#include<stdio.h> 
int main(){
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	double a=0;
	printf("我想好了一个1到100之间的整数。");
	do{
		printf("猜猜这个数：");
		scanf("%lf",&a);
		count++;
		if(a>number){
			printf("你猜的数大了。\n");
	    }else if(a<number){
	    	printf("你猜的数小了。\n");
	    }
	  }while(a!=number);
	  printf("太好了，你用了%d次就猜到了答案。",count);
} 
