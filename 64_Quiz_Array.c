#include <stdio.h>
#include<ctype.h>
int main()
{
    // quiz game using array
    /*
    2 d array that asking a question with options  and use can guess the correct answer and if they they get the point
    at end we will display the point


    */
    char questions[][200] = {
        "\nWhat is the largest planet in solar system: ",
        "\nWhat is the Hottest object in solar system: ",
        "\nWhat planet has the most moons: ",
        "\nIs Earth Flat?: ",
        "\nWhich planet is known as the Red Planet?: ",
        "\nWhat is the smallest planet in our solar system?: ",
        "\nWhich planet is famous for its big beautiful rings?: ",
        "\nHow many planets are in our solar system?: "};

    char options[][200] = {
        " A.Jupiter\n B.Saturn\n C.Pluto\n D.Neptune",
        " A.Moon\n B.Sun\n C.Earth\n D.Mars",
        " A.Earth\n B.Mars\n C.Jupiter\n D.Saturn",
        " A.Yes\n B.No\n C.Maybe\n D.No answer",
        " A.Venus\n B.Saturn\n C.Mars\n D.Mercury",
        " A.Mercury\n B.Mars\n C.Earth\n D.Venus",
        " A.Jupiter\n B.Saturn\n C.Uranus\n D.Neptune",
        " A.7\n B.8\n C.9\n D.10"};

    int points = 0;
    // Updated answer key including the 4 new questions
    char answer_key[] = {'A', 'B', 'D', 'B', 'C', 'A', 'B', 'B'};
    int size = sizeof(questions) / sizeof(questions[0]);
    for (int i = 0; i < size; i++)
    {
        /* code */
        char userchoice;
        printf("\n%s", questions[i]);
        printf("\n%s", options[i]);
        printf("\n\nplease Enter Your option :");
        scanf(" %c", &userchoice);
        userchoice =toupper(userchoice);
        if (userchoice == answer_key[i])
        {

            printf("\nyour options is correct ");
            points++;
            printf("\nYour point is %d", points);
        }
        else
        {
            printf("\nyour options is wrong ");

            points--;
            printf("\nYour point is %d", points);
        }

        printf("\nThe Answer is : %c", answer_key[i]);
    }
    printf("\n");
    return 0;
}