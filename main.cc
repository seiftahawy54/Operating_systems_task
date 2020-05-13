#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

// Handle system function prototype.
void handleSystem(int);


// Start files and folders lister.

void listFilesAndFolders()
{
    /*
        For list files and directories.
    */
    cout << "Files and directories are " << endl;
    system("ls");
}
// End files and folders lister.
// Start premissions changer.
void changeFilesPermissions()
{
    /*
        To change files permissions.
    */
    puts("\nPlease enter permission to change");
    char permission[100], cmd[200];
    fgets(permission, 15, stdin);
    puts("\n");
    strcpy(cmd, "sudo chmod ");
    strcat(cmd, permission);
    system(cmd);
}
// End premissions changer.

// Start files manager
void initFileManagement()
{
    /*
        For add files/directories and remove files/directories.
    */
    // Prompts user to make choice
    cout << "\nPlease enter to\n1-)Make file\n2-)Make directory\n3-)Delete file\n4-)Delete directory\n5-)Exit this command" << endl;
    // Choice variable
    int choice;
    cin >> choice;
    // Decicide which command chosen
    if (choice == 1)
    {
        // File name and commands variables. 
        string fileName, command;
        // Prompt user to enter file name.
        cout << "\nEnter file name please\n" << endl;
        cin >> fileName;
        // Concatenate command.
        command += "touch ";
        command += fileName;
        // covert the string command into array of characters.
        const char * cmd = command.c_str();
        // Make system call.
        system(cmd);
        cout << "\nFile is created!\n" << endl;
    }
    else if (choice == 2)
    {
        // Directory name and commands variables. 
        string dirName, command;
        // Prompt user to enter directory name.
        cout << "\nEnter directory name please\n" << endl;
        cin >> dirName;
        // Concatenate command.
        command += "mkdir ";
        command += dirName;
        // covert the string command into array of characters.
        const char * cmd = command.c_str();
        // Make system call.
        system(cmd);
        cout << "\nDirectory is created!\n" << endl;
    }
    else if (choice == 3)
    {
        // File name and commands variables. 
        string fileName, command;
        // Prompt user to enter file name.
        cout << "\nEnter file name please\n" << endl;
        cin >> fileName;
        // Concatenate command.
        command += "rm ";
        command += fileName;
        // covert the string command into array of characters.
        const char * cmd = command.c_str();
        // Make system call.
        system(cmd);
        cout << "\nFile is removed!\n" << endl;
    }
    else if (choice == 4)
    {
        // Directory name and commands variables. 
        string dirName, command;
        // Prompt user to enter directory name.
        puts("\nEnter directory name please\n");
        cin >> dirName;
        // Concatenate command.
        command += "rmdir ";
        command += dirName;
        // covert the string command into array of characters.
        const char * cmd = command.c_str();
        // Make system call.
        system(cmd);
        cout << "\nDirectory is removed!\n" << endl;
    }
    else if (choice == 5)
    {
        // Exits the function to excute anthor command or exit.
        // Prompt user to enter choice.
        cout << "1. List files/directories.\n2. Change permissions of files.\n3. Make/delete files/directories\n4. Create symbolic link files.\n5. To Exit" << endl;
    
        // task number choice.
        int taskNum = 0;
        cin >> taskNum;
        handleSystem(taskNum);
    }
    else
    {
        // Prompt the user to enter valid choice number
        cout << "\nPlease enter valid input!!\n" << endl;
    }
}
// End files manager

// Start Files handler function
// handle system function
void handleSystem(int num)
{
    if (num == 1)
    {
        listFilesAndFolders();
    }
    else if (num == 2)
    {
        changeFilesPermissions();
    }
    else if (num == 3)
    {
        initFileManagement();
    }
    else if (num == 4)
    {
        system("ls");
    }
    else if (num == 5)
    {
        cout << "Thanks for using our program <3" << endl;
        exit(0);
    }
    else
    {
        cout << "\nPlease enter valid choice!\n" << endl;
    }
}
// End Files handler function

void systemInit()
{
    // starting the main program.
    // Promting user to enter choices.
    cout << "Welcome in your file manager, Enter your choice please : \n" << endl;
    cout << "1. List files/directories.\n2. Change permissions of files.\n3. Make/delete files/directories\n4. Create symbolic link files.\n5. To Exit" << endl;
    
    // task number choice.
    int taskNum = 0;
    cin >> taskNum;

    // Pass the number to the function "handlesystem"
    handleSystem(taskNum);
}

// Main function to start executing the program.
int main()
{
    // System initiallizing function.
    systemInit();

    return 0;
}