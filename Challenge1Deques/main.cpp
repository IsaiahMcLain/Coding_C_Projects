#include<iostream>
#include<cctype>
#include<deque>
#include<vector>
#include<string>
#include<iomanip>

bool isPalindrome(const std::string& palindrome){
    std::deque<char> isPal; 
    
    //Is alpha removes any characters that aren't alphabetical including spaces, toupper then makes
    //all characters upper case and adds it to the deque so no special characters or casing affects
    //the palindrome 
    for(char c : palindrome){
        if(std::isalpha(c)){
            isPal.push_back(std::toupper(c)); 
        }
    }
    
    char front {};
    char back {}; 
    
    //While the deques size is greater than 1 the loop will continue as a palindrome cannot be one
    //otherwise it isn't a palindrome since the char wont have another char to match with. If at any 
    //time the front char doesn't match the back char then it's not a palindrome and false is 
    //returned. The pop_back and pop_front functions enable the loop to continue working through
    //the deque. 
    while(isPal.size() > 1){
        front = isPal.front(); 
        back = isPal.back(); 
        isPal.pop_front();
        isPal.pop_back(); 
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
