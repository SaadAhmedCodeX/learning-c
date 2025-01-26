#include <stdio.h>

 struct c
{
    int real;
    int imaginary;
} ;

void display(struct c c)
{
    printf("The value of struct c number is %d +%di \n", c.real, c.imaginary);
}
int main()
{
    struct c carr[5];
    for (int i = 0; i < 5; i++)
    {

        printf("Enter real part\n");
        scanf("%d", &carr[i].real);
        printf("Enter Imaginary part\n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }
    return 0;
}