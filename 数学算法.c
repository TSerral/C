//2.21
int main(){
	double s=0;
	int n=1;
	double p=n*(n+1);
	s=s+1/p;
	while(n <= 20){
		n++;
		p=n*(n+1);
		s=s+1/p;
	} 
	printf("%.5lf",s); 
}
