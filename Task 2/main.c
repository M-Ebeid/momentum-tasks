#include <stdio.h>
#include <string.h>

/*****************************     Members Data      ********************************/
// a structure to store members data
struct SMember{
    char name[20];
    unsigned char fac_level;
    char join_date[10];
    char gen[6];
    short team_level;
    char department[5];
};
// array of individual data
struct SMember members[6] = {
    {"Mohamed Ebeid", 100, "10/2/2024", "Ronin", 0xA1, "CCSE"},
    {"Ahmed Mwafy", 100, "10/2/2024", "Ronin", 0xA1, "MTE"},
    {"Fares ElKleny", 100, "10/2/2024", "Ronin", 0xA1, "MTE"},
    {"Omar Helmy", 100, "10/2/2024", "Ronin", 0xA1, "CCE"},
    {"Farah Alaa", 100, "10/2/2024", "Ronin", 0xA1, "ECE"},
    {"Esraa Abdulnaser", 200, "10/2/2024", "Ronin", 0xA1, "ECE"}
};
// array of passwords
char passwords[6][10]={"pw10001pw","pw10002pw","pw10003pw","pw10004pw","pw10005pw","pw10006pw"};

/**************************************************************************************/



/**************************       Program Functions         ***************************/

// welcoming function
void Welcome(char name[]){
    printf("--------------------------------------\n");
    printf("Welcome %s in Momentum", name);
}


// the function to print the data depednding on the member
void print_data(struct SMember member){
    printf("\n--------------------------------------\n");
    printf("Name : %s\n", member.name);
    printf("Faculty level : %d\n", member.fac_level);
    printf("Joining Team : %s\n", member.join_date);
    printf("Team generation : %s generation\n", member.gen);
    printf("Team level : %X\n", member.team_level);
    printf("Department : %s\n", member.department);
    printf("--------------------------------------\n");
}

// the quote مثلا
void quote(void){
    printf("\"Act like the person you want to become\"");
}


// the function to check Id and pw of member
void check(unsigned short ID, char PW[]){
    switch(ID){

        case 10001 ... 10006 :
            if(strcmp(PW,passwords[ID - 10001])){}

            else{
                Welcome(members[ID - 10001].name);
                print_data(members[ID - 10001]);
                quote();
                break;
            }

        default:   // Out of our data
            printf("Wrong Data!");
            break;
    }
}
/*********************************************************************/

int main () {
    unsigned short ID;
    char PW[11];

    printf("Enter Id of member : ");
    scanf("%d",&ID);
    printf("Enter password : ");
    scanf("%s",&PW);

    check(ID,PW);

    return 0;
}
