#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct book{
	int id;
	char name[30];
	char author[20];
	float rating;
	int price;
	char category[20];
	
}book;
void storebook(book**,int*,int*);
void displaybook(book*,int);
void searchbook(book*,int);
int deletebook(book*,int);
int updatebook(book*,int);
void sortByPrice(book*,int);
void displayBooksByCategory(book*,int);
void displayBooksByCategory(book*, int);
void main(){
	int capacity=10;
	int size=0;
	book* books=(book*)malloc(sizeof(book)*capacity);
	//book books[10];
	int choice;
	
	while(1){
		printf("\n\nBook Management Menu");
        printf("\n1. Add Book");
        printf("\n2. Display All Books");
        printf("\n3. Search Book");
        printf("\n4. Delete Book");
        printf("\n5. Update Book");
        printf("\n6. Sort Books by Price");
        printf("\n7. Sort Books By Category");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        if(choice==1)
        	storebook(&books,&size,&capacity);
		else if(choice==2)
			displaybook(books,size);
		else if(choice==3)
			searchbook(books,size);
		else if(choice==4)
			size = deletebook(books, size);
		else if(choice==5)
			size=updatebook(books,size);
		else if(choice==6)
			sortByPrice(books, size);
		else if(choice==7)
			displayBooksByCategory(books,size);
		else if(choice==8){
			printf("\nExiting");
			break;
		}else
			printf("\nInvalid Choice");
	}	
}
void storebook(book** books,int *size,int *capacity){
	int num;
	printf("\nEnter the number of book to add: ");
	scanf("%d",&num);
	if(*size+num>*capacity){
        *capacity=(*size+num)*2;
    }
	*books=(book*)realloc(*books,sizeof(book)*(*capacity));
	if(*books==NULL){
    printf("Memory allocation failed.\n");
    exit(1);
	}
	
	for(int i=0;i<num;i++){
		printf("Enter the id,name,author,publisher and price of book %d :",i+1);
		printf("\nId: ");
		scanf("%d",&(*books)[*size].id);
		getchar();
		printf("Book Name: ");
		scanf("%s",(*books)[*size].name);
		getchar();    
		printf("Author's' Name: ");
		scanf("%s",(*books)[*size].author);
		printf("Book Ratings: ");
		scanf("%f",&(*books)[*size].rating);
		printf("Price: ");
		scanf("%d",&(*books)[*size].price);
		printf("Category: ");
		scanf("%s",(*books)[*size].category);
		(*size)++;
	}
}
void displaybook(book* books,int size){
	for(int i=0;i<size;i++){
		printf("\nThe details of book %d are",i+1);
		printf("\nId: %d",books[i].id);
		printf("\nBook Name: %s",books[i].name);
		printf("\nAuthor Name: %s",books[i].author);
		printf("\nRatings: %f",books[i].rating);
		printf("\nPrice: %d",books[i].price);
		printf("\nCategory: %s",books[i].category);
	}
}
void searchbook(book* books,int size){
	int option;
	printf("\nEnter the option: 1(By Id) / 2(By Name)");
	scanf("%d",&option);
	if(option==1){
		int id;
			printf("\nEnter the id of book you want to search:");
			scanf("%d",&id);
			int index=-1;
			for(int i=0;i<size;i++){
				if(books[i].id==id){
					index=i;
					break;
				}
			}
			if(index!=-1)
					displaybook(&books[index],1);
					//printf("%s found at index %d",books[index].name,index);
				else
					printf("id not found");
			
		}
	else if(option==2){
		char name[20];
			printf("\nEnter the name of book you want to search: ");
			scanf("%s",&name);
			int index=-1;
			for(int i=0;i<size;i++){
				if(strcmp(books[i].name,name)==0) {
					index=i;
					break;
				}
			}
			if(index!=-1)
					displaybook(&books[index],1);
					//printf("%s found at index %d",books[index].name,index);
				else
					printf("%s not found in the list",name);
		}
}
int deletebook(book* books,int size){
	int id;
	printf("\nEnter the id of book you want to delete: ");
	scanf("%d",&id);
	int index=-1;
	for(int i=0;i<size;i++){
		if(books[i].id==id){
			index=i;
			break;
		}
	}
	if(index!=-1){
		for(int i=index;i<size-1;i++)
			books[i]=books[i+1];
		printf("\nBook Deleted Successfully");
		return size-1;	
	}else{
		printf("\nBook Not Found");
		return size;
	}
}
int updatebook(book* books,int size){
	int id;
	int index=-1;
	printf("\nEnter the id of book you want to update: ");
	scanf("%d",&id);
	for(int i=0;i<size;i++){
		if(books[i].id==id){
			index=i;
			break;
		}
	}
		if(index!=-1){
			printf("\nEnter new details for the book:");
			printf("\nId:");
			scanf("%d",&books[index].id);
			printf("Book's Name: ");
			scanf("%s",&books[index].name);
			printf("Author`s Name: ");
			scanf("%s",&books[index].author);
			printf("Ratings:");
			scanf("%f",&books[index].rating);
			printf("Price:");
			scanf("%d",&books[index].price);
			printf("Category: ");
			scanf("%s",&books[index].category);
			printf("Book Details Updated Successfully");
		}else
			printf("\nBook Not Found");
	return size;
}
void sortByPrice(book* books, int size) {
    int indices[100];
    for(int i=0;i<size;i++){
        indices[i]=i;
    }
	for(int i=0;i<size-1;i++) {
        for (int j=0;j<size-i-1;j++){
            if(books[indices[j]].price>books[indices[j+1]].price){
                int temp=indices[j];
                indices[j]=indices[j+1];
                indices[j+1]=temp;
            }
        }
    }
	book sortedBooks[100];
	for(int i=0;i<size;i++){
		sortedBooks[i]=books[indices[i]];
	}
	printf("\nBooks sorted by price:\n");
  	displaybook(sortedBooks, size);
}

void displayBooksByCategory(book* books, int size) {
    char selectedCategory[20];
    printf("\nEnter the category to filter books (e.g., Romance, Business): ");
    scanf("%s", selectedCategory);

    int found=0;
    printf("\nBooks in category '%s':\n", selectedCategory);
    for (int i=0;i<size;i++){
        if (strcmp(books[i].category,selectedCategory)==0){
            printf("\nBook %d:", i+1);
            printf("\nId: %d", books[i].id);
            printf("\nName: %s", books[i].name);
            printf("\nAuthor: %s", books[i].author);
            printf("\nRating: %.2f", books[i].rating);
            printf("\nPrice: %d", books[i].price);
            printf("\nCategory: %s\n", books[i].category);
            found=1;
        }
    }
    if(!found){
        printf("No books found in this category.\n");
    }
}

 