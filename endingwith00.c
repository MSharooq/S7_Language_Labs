#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main(){

	char str[100];
	printf("ENter the string");
	scanf("%s",str);
	int state=0;
	int i=0;
	
	for(i=0;i<strlen(str);i++){
		switch(state){
			
			case 0:	if(str[i]==1)
					state=0;
					else
					state=1;
					
					//printf("%d :State\n",state);
					break;
			
			case 1:if(str[i]==1)
					state=0;
					else
					state=2;
					
					//printf("%d :State\n",state);
					break;
			
			case 2:if(str[i]==1)
					state=0;
					else
					state=2;
					break;
					
					//printf("%d :State\n",state);
			default:printf("wrong input");
	
		}
	}
	
	if(state==2)
	printf("Accepted\n");
	else
	printf("The string is Rejected with not ending 00\n");
}
