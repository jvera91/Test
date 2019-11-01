# include <cs50.h>
# include <stdio.h>

int main (void)
{
    //Ask user's name
    string answer = get_string("What's your name?\n");
    
    printf ("Hello, %s!\n", answer);
    
    //Ask user's fav sport
    string sport = get_string("What's your favorite sport? \n");
    
    printf ("Nice! I like %s too!\n", sport);
    
    //Ask user's age
    int age = get_int( "How old are you?\n");
    //If over 50
    if (age > 50)
    {
        printf ("%i!!! Over the hill!\n", age);
    }
    //Any younger
    else
    {
        printf ("Nice!\n");
    }
    string c = get_string("Do you prefer dogs or cats?\n");
    //if user enters cat
    if (c == "cats")
    {
        printf ("gross!\n");
    }
    
    else
    {
        printf ("you better..\n");
    }
}
