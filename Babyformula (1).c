# include <cs50.h>
# include <stdio.h>

//Prototype
float divide (int a, double b);
int mult (int a, double b);


int main (void)
{
    /* This program will ask for the user to enter amount of milk the baby needs.
     * Then based off of that information, will tell you how many scoops & cans are used daily.
     * Referencing a can of Enfamil for information:
     * NET WT 8oz(227g) in a full can
     * remember for every 2oz/ 1 scoop
     * 8.7 gs per scoop
    */
    // Define Variables
    int can = 8; float oz = 28.375; float scoop = 8.7;
    
    //run prototype for finding grams per full can
    int FullCan = mult(can, oz);
    
    //run prototype to find scoops per full can
    double ScoopsPerCan = divide(FullCan, scoop);
    
    //Get Amount from user in OZs
    int GetAmount = get_int("Please enter daily amount in ounces: ");
    
    //run prototype to find scoops per user amount in ounces
    double ScoopsForUser = divide(GetAmount, 2.0);
        

    
    //Get Amount of Grams per User's Amount in OZ
    double GramsPerUser = ScoopsForUser * scoop;
    
    //Get Cans Per Day
    double CansPerDay = GramsPerUser / FullCan;
    
    
    // Return answer
    printf("Since a full can is %d grams, You go through %f cans per day!\n", FullCan, CansPerDay);
    printf("There are %f scoops in a full can. You'll need %.2f scoops! \n", ScoopsPerCan, ScoopsForUser);
}
// Functions
float divide (int a, double b)
{
    if (true)
    {
        double c =  a / b;
        return c; 
    }
}
    int mult (int a, double b)
{
    if (true)
    {
        double c =  a * b;
        return c; 
    }
    
}    

