#include <string.h>
#include <stdio.h>

#define MaxLenght 8

void myStrcpy(char* dest , const char* src){
    while(*src)
        *dest++ = *src++;
}


int Login(const char* userName, const char* password) {

    if(userName == NULL || password == NULL)
        return -1;

    // MaxLenght = 8
    int status = 0;
    char buffName[MaxLenght] = {'\0'};
    char dilmeter[] = "-", *buffer = NULL;
    char *token;
    
    FILE* users;
    
    if(users == NULL) {
        perror("Error opening file");
        return -1;
    }

    fprintf(stdout, "name: %s\nstatus flag: %d\n", buffName, status);
    myStrcpy(buffName, userName); 

    fprintf(stdout, "name: %s\nstatus flag: %d\n",buffName, status);
    return status;
}

int main() {
    Login("eran123455474", "1234");
}