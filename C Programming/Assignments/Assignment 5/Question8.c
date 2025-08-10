void main(){
	int no=4;
	for(int i=1;i<=no;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=2;i<=no;i++){
		for(int j=no;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}

}