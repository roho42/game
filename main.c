#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getinput( char * );

enum rooms {outside, porch, livingroom, kitchen, diningroom, study};
int currentRoom = outside;
char commandString[256];
char currentRoomDesc[512];

int main()
{
        commandString[0] = 0;
        while( strcmp(commandString, "quit" )) // While the command entered is not "quit" keep going
        {
                getinput(commandString);
                printf("You said [%s]\n", commandString);
        }
}

/*
** getinput returns 1 if a response was entered, 0 if not
*/
int getinput( char * input)
{
        int returnValue = 0;
        scanf("%s",input);
        return returnValue;
}

int room_outside()
{
    /*
        Valid Commands:
            up - to go up steps
    */
    char roomDescription[256];

}
