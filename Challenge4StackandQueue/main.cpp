#include<iostream>
#include<cctype>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<iomanip>

bool isPalindrome(const std::string& palindrome){
    std::stack<char> isPal; 
    std::queue<char> isPal2; 
    
    //Is alpha removes any characters that aren't alphabetical including spaces, toupper then makes
    //all characters upper case and adds it to the deque so no special characters or casing affects
    //the palindrome 
    for(char c : palindrome){
        if(std::isalpha(c)){
            isPal.push(std::toupper(c)); 
        }
    }
    
    for(char c : palindrome){
        if(std::isalpha(c)){
            isPal2.push(std::toupper(c)); 
        }
    }
    
    char front {};
    char back {}; 
    
    //While the stack and queue size is greater than 1 the loop will continue as a palindrome cannot be one
    //otherwise it isn't a palindrome since the char wont have another char to match with. If at any 
    //time the front char doesn't match the back char then it's not a palindrome and false is 
    //returned. The pop functions enable the loop to continue working through
    //the stack and queue
    while(isPal.size() > 1 && isPal2.size() > 1){
        back = isPal.top(); 
        front = isPal2.front(); 
        isPal.pop();
        isPal2.pop(); 
        if(front != back)
            return false; 
    }
    return true; 
}

int main()
{
    std::vector<std::string> testStrings {"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob",
    "ana", "avid diva", "Amore, Roma", "A Toyota's toyota", "A Santa at NASA", "C++", 
    "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama", "This is a palindrome",
    "palindrome"}; 
    
    std::cout << std::boolalpha; 
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl; 
    for(const auto& i: testStrings){
        std::cout << std::setw(8) << std::left << isPalindrome(i) << i << std::endl; 
    }
    std::cout << std::endl; 
    
    return 0; 
}
