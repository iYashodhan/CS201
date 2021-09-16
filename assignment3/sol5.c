/*
Given an array of characters formed with a’s and b’s. The string is marked with special
character X which represents the middle of the list (for example: ababa...ababXbabab baaa).
Check whether the string is palindrome or not using stack
*/


//function to check if the string is Palindrome
int isPalindrome(char *str)
{
    //the first index
    int start_index = 0;
 
    //the last index
    int last_index = strlen(str);
 
    while(start_index < last_index && str[start_index] == str[last_index])
    {
        //increment start index and decrement last index
        start_index++;
        last_index--;
    }
 
    if(start_index < last_index)
    {
        //this means that we did not reach the center
        printf("NOT A PALINDROME");
        return 0;
    }
    else
    {
        //we reached the center
        printf("PALINDROME");
        return 1;
    }
}