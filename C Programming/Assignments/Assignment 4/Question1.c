void main(){
	int no,r,sum,temp;
	
	printf("Enter the value of n:");
	scanf("%d",&no);
	
	for(int i=1;i<=no;i++){
		temp=i;
		sum=0;
		
		while(temp!=0){
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
		}
		if(sum==i){
			printf("%d\n",i);
		}
		
	}
	
	
}
