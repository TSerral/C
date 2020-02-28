//2.27
#include <stdio.h>
int main(){
	int a=0,b=0,c=0,d=0,e=0,f=0,i=0,g=0;
	int A=-1,B=-1,C=-1; 
	srand(time(0));
	int number=rand()%10+1;
	while(g<1000){
		i=1;
	 while(i!=4){
		number=rand()%10+1;
		if(number<7&&number!=A&&number!=B&&i==1){	
			A=number;
			printf("第一次抽到了数字%d  ",number);
			i++;
		}else if(number<7&&number!=A&&number!=B&&i==2){
			B=number;
			printf("第二次抽到了数字%d  ",number);
			i++;
		}else if(number<7&&number!=A&&number!=B&&i==3){
			C=number;
			printf("第三次抽到了数字%d\n",number);
			i++;
			g++;

			switch(C){
	        case 1:
	        	a++;
		        break; 
	        case 2:
		        b++;
		        break; 
	        case 3:
	            c++;
		        break; 
		    case 4:
		        d++;
	          	break; 
        	case 5:
        		e++;
        		break; 
         	case 6:
        	    f++;
        		break; 
	    	}
	   }
    }
}
printf("共抽了%d轮,第三次抽到的1、2、3、4、5、6次数分别为%d %d %d %d %d %d",g,a,b,c,d,e,f);
}

