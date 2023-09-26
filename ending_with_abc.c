#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main(){

	char str[100];
	printf("Enter the string");
	scanf("%s",str);
	int state=0;
	int i=0;
	
	for(i=0;i<strlen(str);i++){
		switch(state){
			
			case 0:	if(str[i]=='b' || str[i]=='c')
					state=0;
					else if(str[i]=='a')
					state=1;
					else
					return;
					
					//printf("%d :State\n",state);
					break;
			
			case 1:if(str[i]=='b')
					state=2;
					else if(str[i]=='a')
					state=1;
					else if(str[i]=='c')
					state=0;
					else
					return;
					
					//printf("%d :State\n",state);
					break;
			
			case 2:if(str[i]=='b')
					state=0;
					else if(str[i]=='a')
					state=1;
					else if(str[i]=='c')
					state=3;
					else
					return;
					
					//printf("%d :State\n",state);
					break;
					
			case 3:exit(0);
					break;
					
					//printf("%d :State\n",state);
			default:printf("wrong input");
	
		}
	}
	
	if(state==3)
	printf("Accepted\n");
	else
	printf("The string is Rejected\n");
}
