#include <stdio.h>

// enum day {sunday , tuesday, wednesday, thursday, friday, saturday};
 
// int main()
// {
//     enum day d = thursday;
//     printf("The day number stored in d is %d", d);
//     return 0;
// }

struct Point{

 int x; //in a struct all is public thats differ with the class 
 int y;

};

int main()
{
    struct Point p1={3,4}; //just call the struct then instance

    struct Point *p2 = &p1; //reference to p1
    printf("%d %d",p2->x, p2->y); //and print here the value

    return 0;
}