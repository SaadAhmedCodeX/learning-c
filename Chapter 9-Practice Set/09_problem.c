#include <stdio.h>

struct Date
{
    int mm;
    int dd;
    int yyyy;
};
int compare(struct Date d1, struct Date d2)
{
    // if d1 is in the future, return =
    if ((d1.yyyy == d2.yyyy)  && (d1.mm == d2.mm) && (d1.dd == d2.dd))
       
        {
            return 0;
        }

    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}
int main()
{
    struct Date d1 = {12, 4, 2004};
    struct Date d2 = {11, 4, 2008};
    printf("%d", compare(d1, d2));
    return 0;
}