/*
Given a string S, find and return all the possible permutations of the input string.
Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.
Input Format :

*/



#include <string>
using namespace std;

void helper(string input, string output[],string ans){
    if(input[0]=='\0'){
        static int i=0;
        output[i] = ans;
        i++;
        return;
    }
    
    for(int i=0;i<input.size();i++){
        string smallInput = input.substr(0,i) + input.substr(i+1,input.size());
        helper(smallInput ,output, ans + input[i]);
    }
    
}

int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}


int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    string ans="";
    
    helper(input,output,ans);
    int fact = factorial(input.size());
    
    return fact;
}
