# MALDEV_CreateProcess

Stepping stone for Malware Dev (this is not entirely a malware, it's just one of the basics... I am by no means good in this shit, I just wanna learn.. for educational purposes........
So! diving in, providing some comments of my general understanding about certain parts (for myself cause I easily forget shit.) to easily understand.

This is a program that creates a process (hence the name "Create process" no shit sherlock).

Structure od the program basically is first are the "#include"s:
  <windows.h> for the win32 API.
  <stdlib.h> && <stdio.h> for basically you know what...

NEXT! The commented out structure for the syntax of the CreateProcessW() function, there are the CreateProcessA() and the normal CreateProcess(), both of which I don't know shit... Basically a blueprint/guide...

Next are the data types STARTUINFOW && PROCESS_INFORMATION both of which are Structures (Please refer to the WIN32 API Documentary cause I don't know jeckshit about the fields of the structures, might read or might not, atp nahh.. But these basically holds the information... that's all.

Both of the structures are declared as '0' inside the curly bracket "= { 0 }". Basically initializes all struct fields to 0 or NULL.

Next is an if() statement to check if the CreateProcessw() is null, if it is, exits the program with the EXIT_FAILURE (Similar to return 0 or return 1)

The rest is about the parameters, (AGAIN! Please read the Documentation)
