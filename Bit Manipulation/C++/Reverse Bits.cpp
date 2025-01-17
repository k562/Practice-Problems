// Problem Description

// Reverse the bits of an 32 bit unsigned integer A.



// Problem Constraints
// 0 <= A <= 232



// Input Format
// First and only argument of input contains an integer A.



// Output Format
// Return a single unsigned integer denoting the decimal value of reversed bits.



// Example Input
// Input 1:

//  0
// Input 2:

//  3


// Example Output
// Output 1:

//  0
// Output 2:

//  3221225472


// Example Explanation
// Explanation 1:

//         00000000000000000000000000000000

// =>      00000000000000000000000000000000
// Explanation 2:

//         00000000000000000000000000000011    
// =>      11000000000000000000000000000000





unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unsigned int rev=0;
    for(int i=0; i<32;i++){
        rev = rev<<1;
        rev |= A&1;
        A = A>>1;
    }
    
    return rev;
}
