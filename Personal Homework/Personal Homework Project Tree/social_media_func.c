#include "social_media.h"

void insert(char* name,char* email,user** leaf,Compare cmp){

    int resName,resEmail;
    if(*leaf == NULL){
        *leaf = (user*)malloc(sizeof(user));
        (*leaf)->name = malloc(strlen(name)+1);
        (*leaf)->email = malloc(strlen(email)+1);
        strcpy((*leaf)->name,name);
        strcpy((*leaf)->email,email);
        (*leaf)->left = NULL;
        (*leaf)->right = NULL;
    }
    else{
        resName = cmp(name,(*leaf)->name);
        resEmail = cmp(email,(*leaf)->email);
        if(resName < 0 || resEmail < 0){
            insert(name,email,&(*leaf)->left,cmp);
        }
        else if(resName > 0 || resEmail > 0){
            insert(name,email,(*leaf)->right,cmp);
        }
        else{
            printf("Name: %s\t Email: %s already in the social media!\n");
        }
    }
}

int cmpStr(const char* str1,const char* str2){
    return (strcmp(str1,str2));
}

char* inputName(void){
    static char nameLine[MAXLEN+1];
    printf("Please enter a name: \n");
    fgets(nameLine,sizeof(nameLine),stdin);
    return (strtok(nameLine,"\n"));
}

char* inputEmail(void){
    static char emailLine[MAXLEN+1];
    printf("Please enter a name: \n");
    fgets(emailLine,sizeof(emailLine),stdin);
    return (strtok(emailLine,"\n"));
}

void orderUser(user* root){
    if(root != NULL){
        orderUser(root->left);
        printf("\t%s\t%s\n",root->name,root->email);
        orderUser(root->right);
    }
}

void search(char* name,char* email,user** leaf,Compare cmp){
    
}

void delete_tree(user** leaf){
    if(*leaf != NULL);
    delete_tree(&(*leaf)->right);
    delete_tree(&(*leaf)->left);
    free((*leaf)->name);
    free((*leaf)->email);
    free((*leaf));
}

void menu(void);