#include "inverted.h"

void search_database(M_node *HT[])
{
    char word[20];
    printf("Enter the word you wanted to search : ");
    scanf("%s",word);
    int index=get_index(word);
    if(HT[index]==NULL){
        printf("NO WORD EXIST\n");
        return;
    }
    M_node *temp=HT[index];
    while(temp){
        if(strcmp(temp->word,word)==0){
            printf(GREEN"Word %s is present in  %d  time in file "RESET,word,temp->file_count);
            S_node *stemp=temp->sub_link;
            while(stemp){
                printf(GREEN"%s %d times\n"RESET,stemp->filename,stemp->word_count);
                stemp=stemp->sub_link;
            }
            return;
        }
        temp=temp->main_link;
    }
    //printf("WORD NOT FOUND IN THE LIST\n");
}
   

