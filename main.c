#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20

// handle system function
void handleSystem(int num)
{
    if (num == 1)
    {
        system("ls");
    }
    else if (num == 2)
    {
        puts("\nPlease enter permission to change");
        char permission[100], cmd[200];
        fgets(permission, MAX_LIMIT, stdin); 
        puts("\n");
        strcpy(cmd, "sudo chmod ");
        strcat(cmd, permission);
        system(cmd);
    }
    else if (num == 3)
    {
        puts("\nPlease enter to\n1-)Make file\n2-)Make directory\n3-)Delete file\n4-)Delete directory\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            char fileName[100], command[100];
            puts("\nEnter file name please\n");
            scanf("%[^\n]%*c", fileName);
            strcpy(command, "touch ");
            strcat(command, fileName);
            system(command);
            puts("\nFile is created!\n");
        }
        else if (choice == 2)
        {
            char fileName[100], command[100];
            puts("\nEnter dire name please\n");
            fgets(fileName, MAX_LIMIT, stdin);
            strcpy(command, "mkdir ");
            strcat(command, fileName);
            system(command);
            puts("\nDirectory is created!\n");
        }
        else if (choice == 3)
        {
            char fileName[100], command[100];
            puts("\nEnter file name please\n");
            fgets(fileName, MAX_LIMIT, stdin);
            strcpy(command, "rm ");
            strcat(command, fileName);
            system(command);
            puts("\nFile is removed!\n");
        }
        else if (choice == 4)
        {
            char fileName[100], command[100] = "rmdir ";
            puts("\nEnter file name please\n");
            fgets(fileName, MAX_LIMIT, stdin);
            strcpy(command, "rmdir ");
            strcat(command, fileName);
            system(command);
            puts("\nDirectory is removed!\n");
        }
        else
        {
            puts("\nPlease enter valid input!!\n");
        }
    }
    else if (num == 4)
    {
        system("ls");
    }
    else
    {
        puts("\nPlease enter valid choice!\n");
    }
}

int main()
{
    // starting the main program
    printf("Welcome in your file manager, Enter your choice please : \n");
    printf("1. List files/directories.\n2. Change permissions of files.\n3. Make/delete files/directories\n4. Create symbolic link files.\n");
    
    // task number choice
    int taskNum = 0;
    scanf("%d", &taskNum);

    // Pass the number to the function "handlesystem"
    handleSystem(taskNum);

    return 0;
}