#include <stdio.h>
#include<conio.h>
int main()
{
	int score=0;
    char ans;

    // Question 1
    printf("1. Which is the capital of India?\n");
    printf("a) Mumbai\tb) New Delhi\tc) Kolkata\td) Chennai\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='b' || ans=='B'){
        printf("Correct answer\n\n");
        score++;}
    else
        printf("Wrong answer\n\n");

    // Question 2
    printf("2. Who is known as the Father of the Nation (India)?\n");
    printf("a) Jawaharlal Nehru\tb) Subhash Chandra Bose\n");
    printf("c) Mahatma Gandhi\td) Bhagat Singh\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='c' || ans=='C'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");

    // Question 3
    printf("3. Which planet is known as the Red Planet?\n");
    printf("a) Earth\tb) Venus\tc) Mars\td) Jupiter\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='c' || ans=='C'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");

    // Question 4
    printf("4. How many days are there in a leap year?\n");
    printf("a) 365\tb) 366\tc) 364\td) 360\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='b' || ans=='B'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");

    // Question 5
    printf("5. Which is the largest ocean in the world?\n");
    printf("a) Indian Ocean\tb) Atlantic Ocean\n");
    printf("c) Arctic Ocean\td) Pacific Ocean\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='d' || ans=='D'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");

    // Question 6
    printf("6. What is the national animal of India?\n");
    printf("a) Lion\tb) Elephant\tc) Tiger\td) Leopard\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='c' || ans=='C'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");

    // Question 7
    printf("7. Which festival is called the Festival of Lights?\n");
    printf("a) Holi\tb) Diwali\tc) Pongal\td) Eid\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='b' || ans=='B'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");

    // Question 8
    printf("8. Which is the longest river in India?\n");
    printf("a) Yamuna\tb) Godavari\tc) Ganga\td) Krishna\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='c' || ans=='C'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");

    // Question 9
    printf("9. How many continents are there in the world?\n");
    printf("a) 5\tb) 6\tc) 7\td) 8\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='c' || ans=='C'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");

    // Question 10
    printf("10. Which gas do plants use for photosynthesis?\n");
    printf("a) Oxygen\tb) Nitrogen\tc) Carbon dioxide\td) Hydrogen\n");
    printf("Enter answer: ");
    scanf(" %c", &ans);
    if(ans=='c' || ans=='C'){
        printf("Correct answer\n\n");
         score++;}
    else
        printf("Wrong answer\n\n");
    printf("score = %d",score);
    getch();
    return 0;
}