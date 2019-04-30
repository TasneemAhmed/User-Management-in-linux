#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
    int option;
    char a[50];
    char b[50];
    char command[200];

    printf("Enter the number of the operation:\n");
    printf("1- Add user\n2- Delete user\n3- Add group\n4- Delete group\n5- Change user's information\n6- Assign user to a specific group\n 0- Exit\n");
    scanf("%d",&option);

    while(option != 0){
	

        if(option == 1){
            printf("Enter the username of the user you want to add: ");
            scanf("%s",a);
            strcpy(command,"sudo useradd ");
            strcat(command,a);
	    /*strcat(command," -D");
	    strcat(command," -m");
            strcat(command," -s");
	    strcat(command," /bin/bash");*/
            //system(command);
            printf("User added\n");
        }else if(option == 2){

            printf("Enter the username of the user you want to delete: ");
            scanf("%s",a);
            strcpy(command,"sudo userdel ");
            strcat(command,a);
            //system(command);
            printf("User deleted\n");
	     
        }else if(option == 3){

            printf("Enter the name of the group you want to add: ");
            scanf("%s",a);
            strcpy(command,"sudo groupadd ");
            strcat(command,a);
            //system(command);
             printf("group added\n");
        }else if(option == 4){

            printf("Enter the name of the group you want to delete: ");
            scanf("%s",a);
            strcpy(command,"sudo groupdel ");
            strcat(command,a);
            //system(command);
	    printf("User deleted\n");

        }else if(option == 5){
            int change;

            printf("Enter the username of the user you want to change their information: ");
            scanf("%s",a);
            printf("Choose a change:\n1- Change password\n2- Change username\n");
	    scanf("%d",&change);
                if(change == 1){
                    strcpy(command,"sudo passwd ");
                    strcat(command,a);
                    //system(command);
                    printf("User password changed\n");
                }else if(change == 2){
                    printf("Enter the new username: ");
                    scanf("%s",b);
                    strcpy(command,"sudo usermod -l ");
                    strcat(command,b);
                    strcat(command," ");
                    strcat(command,a);
                    //system(command);
                    printf("User name changed\n");
                }

        }else if(option == 6){
            printf("Enter the username of the user: ");
            scanf("%s",a);
            printf("Enter the name of the group: ");
            scanf("%s",b);
            strcpy(command,"sudo usermod -g ");
            strcat(command,b);
            strcat(command," ");
            strcat(command,a);
            //system(command);
	     printf("User added to specific group\n");
        }
	system(command);
        printf("Enter the number of the operation:\n");
    	printf("1- Add user\n2- Delete user\n3- Add group\n4- Delete group\n5- Change user's information\n6- Assign user to a specific group\n 0- Exit\n");
        scanf("%d",&option);


  }    
	
    return 0;

    }






    

