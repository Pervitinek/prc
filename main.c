#include <stdio.h>

int main(void) {
    char input;
    float x;
    float y;

    printf("Kalkulacka. Vyber operaci:\n Scitani: +\n Nasobeni: *\n Deleni: /\n Odcitani: -\n");
    scanf("%c", &input);
+
    printf("Napis dve cisla: ");
    scanf("%f %f", &x, &y);

    switch(input)
    {
        case '+':
            printf("%f", x+y);
            break;
        case '-':
            printf("%f", x-y);
            break;
        case '*':
            printf("%f", x*y);
            break;
        case '/':
            printf("%f", x/y);
            break;
        default:
            printf("Vyber platnou operaci Z LISTU");
    }


    return 0;
}