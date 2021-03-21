#include "social_media.h"

void menu(void){

    int choice;
    init();
    menu:
    printf("Welcome to Mitko's social media!\n");
    printf("1.Add User\n");
    printf("2.Add Friends\n");
    printf("3.Remove Friends\n");
    printf("4.Serialize\n");
    printf("5.Deserialize\n");
    printf("6.Print List\n");
    printf("7.Exit\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    while(choice <= 0 || choice >= 8){
        printf("Please enter a valid choice\n");
        scanf("%d",&choice);
    }

    switch(choice){
        case 1:
        init();
        head = addUser(head);
        goto menu;
        break;

        case 2:
        head = addFriends(head);
        goto menu;
        break;

        case 3:
        head = deleteFriends(head);
        goto menu;
        break;

        case 4:
        serializeToXML(head);
        goto menu;
        break;

        case 5:
        head = deserializeXML();
        printList(head);
        goto menu;
        break;

        case 6:
        printList(head);
        goto menu;
        break;

        case 7:
        printf("Thank you for using this social media! It is still a beta version :P! Have a nice day \n");
        exit(0);
        break;
    }

}

void init(){
    head = NULL;
}

void printUsers(branch *head){
    /*prints all the users*/
    branch *current_user = head;
    printf("List of all users:\n");
    while(current_user != NULL){
        printf("Username: %s \n",current_user->newUser.name);
        printf("Email: %s \n",current_user->newUser.email);
        current_user = current_user->next;
    }
}

branch *addUser(branch *head){

    /*adds a new user to the social media*/
    branch *new_user;
    char *userName,*email;
    int result;
    userName = (char*)malloc(MAXLEN*sizeof(char));
    email = (char*)malloc(MAXLEN*sizeof(char));
    new_user = (branch*)malloc(sizeof(branch));
    printf("Please enter the name of the main user (up to 30 characters, without numbers, will be saved):\n");
    fflush(stdin); /*flushing, so that we don't get the \n (new line) at the end of the printf as the string*/
    fgets(userName,MAXLEN,stdin);
    userName[strcspn(userName, "\n")] = 0; /* removing the last saved \n (new line) in the string*/
    result = checkUserName(userName); /* checking if the username is valid, without symbols or numbers*/
    while(result == 1){
        printf("Please enter a valid name of the main user (up to 30 characters, without numbers, will be saved):\n");
        fflush(stdin);
        fgets(userName,MAXLEN,stdin);
        result = checkUserName(userName);
        userName[strcspn(userName, "\n")] = 0;
    }
    printf("Username accepted!\n");
    strcpy(new_user->newUser.name,userName);

    printf("Please enter the email of the main user (up to 30 characters will be saved):\n");
    fflush(stdin);
    fgets(email,MAXLEN,stdin);
    email[strcspn(email, "\n")] = 0;
    result = checkEmail(email); /* checking if the email is valid*/
    while(result == 1){
        printf("Please enter a valid email of the main user (up to 30 characters, without numbers, will be saved):\n");
        fflush(stdin);
        fgets(email,MAXLEN,stdin);
        email[strcspn(email, "\n")] = 0;
        result = checkEmail(email);
    }
    printf("Email accepted!\n");
    strcpy(new_user->newUser.email,email);
    new_user->friendsNumber = 0;
    new_user->next = head;
    head = new_user;
    printf("User successfully added!\n");
    return head;
}

int checkUserName(char string[]){
    /* checking if the username is valid, without symbols or numbers*/
    int i,stringLen;
    stringLen = strlen(string);
    for(i=0;i<stringLen - 1;i++){
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')){

        }
        else{ 
            return 1;
        }
    }

    return 0;
}

int checkEmail(char string[]){
    /*checking if the email is valid, if there are multiple @ or if there isnt a dot after the @*/
    int i,stringLen,dot,atSymbol,validStart;
    stringLen = strlen(string);
    if((string[0] >= 'a' && string[0] <= 'z') || (string[0] >= 'A' && string[0] <= 'Z')){
        validStart = 1;
    }
    else{
        validStart = 0;
        return 1;
    }

    dot = -1, atSymbol = -1;

    for(i=0;i<stringLen - 1;i++){
        if(string[i] == '@'){
            atSymbol = i;
        }
        else if(string[i] == '.'){
            dot = i;
        }
    }

    if(atSymbol == -1 || dot == -1){
        return 1;
    }

    if(atSymbol > dot){
        return 1;
    }

    return 0;
}

branch *addFriends(branch *head){

    /*adding friends by searching a specific user*/
    branch *user = findUser(head); /*finding the user by his/her details - name and email*/
    char *friendName, *friendFamily;
    friendName = (char*)malloc(MAXLEN * sizeof(char));
    friendFamily = (char*)malloc(MAXLEN * sizeof(char));
    unsigned int numberOfFriends;
    int i,result;
    if(user == NULL){
        return NULL;
    }
    else{
        printf("How many friends would you like to add? \n");
        scanf("%u",&numberOfFriends);
        user->friendsNumber = numberOfFriends;
        user->newFriend = (friends*)malloc(numberOfFriends*sizeof(friends));
        for(i=0;i<numberOfFriends;i++){
            printf("Please enter the name of friend number %d (up to 30 characters, without numbers, will be saved):\n",i+1);
            fflush(stdin);
            fgets(friendName,MAXLEN,stdin);
            friendName[strcspn(friendName, "\n")] = 0;
            result = checkUserName(friendName);
            while(result == 1){
                printf("Please enter a valid name of friend number %d (up to 30 characters, without numbers, will be saved):\n",i+1);
                fflush(stdin);
                fgets(friendName,MAXLEN,stdin);
                friendName[strcspn(friendName, "\n")] = 0;
                result = checkUserName(friendName);
            }
            printf("Friend name accepted!\n");
            strcpy(user->newFriend[i].name,friendName);

            printf("Please enter the family name of friend number %d (up to 30 characters, without numbers, will be saved):\n",i+1);
            fflush(stdin);
            fgets(friendFamily,MAXLEN,stdin);
            friendFamily[strcspn(friendFamily, "\n")] = 0;
            result = checkUserName(friendFamily);
            while(result == 1){
                printf("Please enter a valid family name of friend number %d (up to 30 characters, without numbers, will be saved):\n",i+1);
                fflush(stdin);
                fgets(friendFamily,MAXLEN,stdin);
                friendFamily[strcspn(friendFamily, "\n")] = 0;
                result = checkUserName(friendFamily);
            }
            printf("Friend family name accepted!\n");
            strcpy(user->newFriend[i].familyName,friendFamily);
        }
    }

    printf("Friends successfully save!\n");
    printFriends(user);
    return user;
}

void printFriends(branch *head){

    /*printing the friends of a specific user*/
    branch *current_user = head;
    int i;
    printf("User:\n");
    printf("Username: %s \n",current_user->newUser.name);
    printf("Email: %s \n",current_user->newUser.email);
    for(i=0;i<current_user->friendsNumber;i++){
        printf("Friend number %d information:\n",i+1);
        printf("Name: %s\n",current_user->newFriend[i].name);
        printf("Family: %s\n",current_user->newFriend[i].familyName);
    }
}

branch *findUser(branch *head){

    /*finding a specific user by his/her details - name and email*/
    branch *current = head;
    int choice;
    if(head == NULL){
        return NULL;
    }

    char *mainUserName,*mainUserEmail;
    int result;
    mainUserName = (char*)malloc(MAXLEN*sizeof(char));
    mainUserEmail = (char*)malloc(MAXLEN*sizeof(char));

    search:
    printUsers(head);
    printf("Please enter a username to search for (up to 30 characters): \n");
    fflush(stdin);
    fgets(mainUserName,MAXLEN,stdin);
    mainUserName[strcspn(mainUserName, "\n")] = 0;
    result = checkUserName(mainUserName);
    while(result == 1){
        printf("Please enter a valid name of the main user (up to 30 characters, without numbers, will be saved):\n");
        fflush(stdin);
        fgets(mainUserName,MAXLEN,stdin);
        result = checkUserName(mainUserName);
        mainUserName[strcspn(mainUserName, "\n")] = 0;
    }
    printf("Username accepted!\n");

    printf("Please enter the email of the main user (up to 30 characters will be saved):\n");
    fflush(stdin);
    fgets(mainUserEmail,MAXLEN,stdin);
    mainUserEmail[strcspn(mainUserEmail, "\n")] = 0;
    result = checkEmail(mainUserEmail);
    while(result == 1){
        printf("Please enter a valid email of the main user (up to 30 characters, without numbers, will be saved):\n");
        fflush(stdin);
        fgets(mainUserEmail,MAXLEN,stdin);
        mainUserEmail[strcspn(mainUserEmail, "\n")] = 0;
        result = checkEmail(mainUserEmail);
    }
    printf("Email accepted!\n");

    while(1){

        if((strcmp(current->newUser.email,mainUserEmail) != 0)){
            if((strcmp(current->newUser.name,mainUserName) != 0)){
                printf("User not found, sorry :(\n");
                printf("Would you like to try again?\n 1. Yes\n 2.No\n");
                scanf("%d",&choice);
                while(choice<=0 && choice >= 3){
                    printf("Enter a valid choice\n");
                    scanf("%d",&choice);
                }
                if (choice == 1){
                    goto search;
                }
                else{
                    return NULL;
                }
            }
        }
        else{
            if((strcmp(current->newUser.name,mainUserName) == 0)){
                printf("User found!\n");
                return current;
            }
            else{
                printf("User not found, sorry :(\n");
                printf("Would you like to try again?\n 1. Yes\n 2.No\n");
                scanf("%d",&choice);
                while(choice<=0 && choice >= 3){
                    printf("Enter a valid choice\n");
                    scanf("%d",&choice);
                }
                if (choice == 1){
                    goto search;
                }
                else{
                    return NULL;
                }
            }
        }

        if(current->next == NULL){
            printf("User not found, sorry :(\n");
            printf("Would you like to try again?\n 1. Yes\n 2. No\n");
            scanf("%d",&choice);
            while(choice<=0 && choice >= 3){
                printf("Enter a valid choice\n");
                scanf("%d",&choice);
            }
            if (choice == 1){
                goto search;
            }
            else{
                return NULL;
            }
        }
        else{
            current = current->next;
        }
    }
}

void printList(branch *head){

    /*printing all users and their saved friends*/
    branch *current_user = head;
    int i;
    while(current_user != NULL){
        printf("User:\n");
        printf("Username: %s \n",current_user->newUser.name);
        printf("Email: %s \n",current_user->newUser.email);
        if(current_user->friendsNumber > 0){
            for(i=0;i<current_user->friendsNumber;i++){
                printf("Friend number %d information:\n",i+1);
                printf("Name: %s\n",current_user->newFriend[i].name);
                printf("Family: %s\n",current_user->newFriend[i].familyName);
            }   
        }
        else{
            printf("There are no friends saved for this user!\n");
        }
        current_user = current_user->next;
    }
}

branch *deleteFriends(branch *head){

    /*deleting the friends/friend of a specific user by his/her details*/

    branch *current_user = head;

    if(current_user->friendsNumber == 0){
        printf("This user doesn't have saved friends! \n");
        return head;
    }

    char *firstName, *familyName;
    int result,i,choice;

    firstName = (char*)malloc(MAXLEN * sizeof(char));
    familyName = (char*)malloc(MAXLEN * sizeof(char));
    
    search:
    printList(current_user);
    printf("Please enter the name of a friend (up to 30 characters, without numbers, will be saved):\n");
    fflush(stdin);
    fgets(firstName,MAXLEN,stdin);
    firstName[strcspn(firstName, "\n")] = 0;
    result = checkUserName(firstName);
    while(result == 1){
        printf("Please enter a valid name of  a friend (up to 30 characters, without numbers, will be saved):\n");
        fflush(stdin);
        fgets(firstName,MAXLEN,stdin);
        firstName[strcspn(firstName, "\n")] = 0;
        result = checkUserName(firstName);
    }
    printf("Friend name accepted!\n");

    printf("Please enter the family name of a friend (up to 30 characters, without numbers, will be saved):\n");
    fflush(stdin);
    fgets(familyName,MAXLEN,stdin);
    familyName[strcspn(familyName, "\n")] = 0;
    result = checkUserName(familyName);
    while(result == 1){
        printf("Please enter a valid family name of a friend (up to 30 characters, without numbers, will be saved):\n");
        fflush(stdin);
        fgets(familyName,MAXLEN,stdin);
        familyName[strcspn(familyName, "\n")] = 0;
        result = checkUserName(familyName);
    }
    printf("Friend family name accepted!\n");

    i = 0;
    while(1){
        if((strcmp(current_user->newFriend[i].name,firstName)) == 0){
            if((strcmp(current_user->newFriend[i].familyName,familyName)) == 0){
                printf("Friend found! \n");
                /*moving the records of a friend by using memmove so that we can free the already deleted memory*/
                memmove(&current_user->newFriend[i].name,&current_user->newFriend[i+1].name,(current_user->friendsNumber - i - 1)*sizeof(friends));
                memmove(&current_user->newFriend[i].familyName,&current_user->newFriend[i+1].familyName,(current_user->friendsNumber - i - 1)*sizeof(friends));
                memset(&current_user->newFriend[current_user->friendsNumber-1].name,0,sizeof(friends));
                memset(&current_user->newFriend[current_user->friendsNumber-1].familyName,0,sizeof(friends));
                current_user->friendsNumber = current_user->friendsNumber - 1;
                goto delete;
                break;
            }
        }

        if(i<current_user->friendsNumber){
            i++;
        }
        else{
            printf("Friend not found!:( \n");
            printf("Would you like to try again?\n 1. Yes\n 2. No\n");
            scanf("%d",&choice);
            while(choice<=0 && choice >= 3){
                printf("Enter a valid choice\n");
                scanf("%d",&choice);
            }
            if(choice == 1){
                goto search;
            }
            else{
                return head;
                break;
            }
        }
    }

    delete:
    printf("Friend successfully deleted! \n");
    printList(current_user);
    return current_user;
}

void serializeToXML(branch *head){

    /*serializating to xml format files*/

    if (head == NULL){
        printf("Serialization failed! There are no users saved! \n");
        exit(2);
    }

    FILE *fp;
    char* fileName = "social_media.xml";
    fp = fopen(fileName,"w");
    if (fp == NULL){
        perror("Error: ");
        exit(1);
    }

    int i;
    fprintf(fp,userSerialization,head->newUser.name,head->newUser.email);
    fprintf(fp,"<friends>\n");
    for(i=0;i<head->friendsNumber;i++){
        fprintf(fp,friendsSerialization,head->newFriend[i].name,head->newFriend[i].familyName);
    }
    fprintf(fp,"</friends>\n");
    fprintf(fp,"</user>");

    fclose(fp);
}

branch *deserializeXML(void){

    /*deserializing an xml format document by searching for a specific words and counting the number of friends for a user*/
    
    branch *getUser = (branch*)malloc(sizeof(branch));
    FILE *fin;
    char* fileName = (char*)malloc(MAXLEN * sizeof(char));

    printf("Enter a file name (up to 30 characters will be saved): \n");
    fflush(stdin);
    fgets(fileName,MAXLEN,stdin);
    fileName[strcspn(fileName, "\n")] = 0;

    fin = fopen(fileName,"r");
    if(fin == NULL){
        perror("Error: ");
        exit(3);
    }

    char getLine[BUFFER_SIZE];
    char *match, *finish;
    char *searchWord = "<surname>";
    char *finishLine = "</user>";
    int count,i;

    while(fgets(getLine,BUFFER_SIZE,fin) != NULL){
        match = strstr(getLine,searchWord);
        if(match){
            count++;
        }
    }
    rewind(fin);
    getUser->friendsNumber = count;
    getUser->newFriend = (friends*)malloc(getUser->friendsNumber * sizeof(friends));


    fscanf(fin,userDeserialization,getUser->newUser.name,getUser->newUser.email);

    rewind(fin);
    char *searchFriends = "<friends>";
    while(fgets(getLine,BUFFER_SIZE,fin) != NULL){
        match = strstr(getLine,searchFriends);
        if(match){
            for(i=0;i<getUser->friendsNumber;i++){
                fscanf(fin,friendsDeserialization,getUser->newFriend[i].name,getUser->newFriend[i].familyName);
                finish = strstr(getLine,finishLine);
                if(finish){
                    goto finish;
                }
            }
        }
    }

    finish:
    if(getUser == NULL){
        printf("Deserialization failed!\n");
        exit(4);
    }

    getUser->next = NULL;
    fclose(fin);
    return getUser;
}