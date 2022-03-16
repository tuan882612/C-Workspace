#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[100];
};

struct student s1;

void get_name(char* a){
    printf("Enter your full name: ");
    fgets(s1.name, 100, stdin);
}

void get_id(int b){
    printf("Please enter your id: ");
    scanf("%d", &s1.id);
}

void check(int a, char *b){
    int ct = 0, temp = a, ct2 = 0;
    while(temp!=0){
        temp/=10;
        ct++;
    }
    if(ct!=6){
        printf("Invalid id type, ");
    } else printf("%d, ", a);
        for(int i=0; i<strlen(b); i++){
            ct2++;
            if(b[i]==' ' && b[strlen(b)-1]!=' '){ 
                ct2--;
            }
        }
    if(ct2<=strlen(b)-1){
        printf("%s", s1.name);
    } else printf("Invalid name or not full name.");
}

int main(){
    get_name(s1.name);
    get_id(s1.id);
    check(s1.id, s1.name);
    return 0;
}