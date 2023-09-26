#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main(){
	
	char keywords[32][10] = {"auto", "break", "case", "char", "const", "continue", "default",
                           "do", "double", "else", "enum", "extern", "float", "for", "goto",
                           "if", "int", "long", "register", "return", "short", "signed",
                           "sizeof", "static", "struct", "switch", "typedef", "union",
                           "unsigned", "void", "volatile", "while"};
	
	char str[100];
	printf("Enter the string");
	scanf("%s",str);
	int state=0;
	int i=0;
	//char x='a';
	//printf("%d :State\n",(int)x);
	
	for(i=0;i<strlen(str);i++){
		char x = str[i];
		int ascii = (int)x;
		
		switch(state){
		
			case -1:exit(0);
					break;
					//65 to 90
					//97 to 122
					//_ is 95
					//printf("%d :State\n",state);
			case 0:	if( (ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122) || ascii==95 )
					{
						state=1;
					}
					else 
					{
						state=-1;
					}

					//printf("%d :State\n",state);
					break;
			
			case 1:
					//printf("%d :State\n",state);
					break;

			default:printf("wrong input");
			
	
		}
	}
	
		
		if(state==1){ 
   			 for(i=0;i<32;i++){
      			if(strcmp(str,keywords[i])==0){
        			printf("String not accepted\n");
        			return;
      			}
    		}
		printf("String accepted\n");
		return;
  		}
		else{
			printf("The string is Rejected\n");
			return;
			}
	}

	
