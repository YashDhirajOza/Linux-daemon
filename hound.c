#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>
#include<stdint.h>
#include<string.h>
#include<signal.h>

#define EXIT_SUCCESS 0
#define EXIT_ERR_ARGS 1
int main(int argc,char** argv){
   char *basepath=NULL;
   char *token =NULL;

    if(argc <2){
        fprintf(stderr,"USAGE:hound PATH\n");
        exit(EXIT_ERR_ARGS);
    }
    
    basepath=(char *)malloc(sizeof(char)*strlen(argv[1]+1));
    strcpy(basepath,argv[1]);

   token=strtok(basepath,"/");
   while(token !=NULL){
    basepath= token;
    token=strtok(NULL,"/");
   }
   while(true){
    a=read(filepath);

    
   }




    exit(EXIT_SUCCESS);
}