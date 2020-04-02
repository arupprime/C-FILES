#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    struct Family {
        char name[40];
        int age;
        char father[20];
        char mother[20];
    };
    struct Family roma = {"roma roy",18,"sanjoy roy","sushuma roy"};
    struct Family joy = {"joy roy",20,"sanjoy roy","sushuma roy"};

    struct Family *sister = &roma;
    struct Family *brother = &joy;

    bool sameAge(struct Family *member1, struct Family *member2){
        if(strcmp(member1->father,member2->father)==0)    // (*member).father = member->father
            return true;
        else
            return false;
    }

    sameAge(sister,brother)?printf("siblings"):printf("not siblings");

    return 0;
}
