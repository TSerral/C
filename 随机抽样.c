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
			printf("��һ�γ鵽������%d  ",number);
			i++;
		}else if(number<7&&number!=A&&number!=B&&i==2){
			B=number;
			printf("�ڶ��γ鵽������%d  ",number);
			i++;
		}else if(number<7&&number!=A&&number!=B&&i==3){
			C=number;
			printf("�����γ鵽������%d\n",number);
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
printf("������%d��,�����γ鵽��1��2��3��4��5��6�����ֱ�Ϊ%d %d %d %d %d %d",g,a,b,c,d,e,f);
}

