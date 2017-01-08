##1-2
- We learned in Chapter 0 that << is left-associative, so that std::cout << s << t means the same as (std::cout << s) << t . Similarly, the + operator (and, for that matter, the >> operator) is also left-associative.
- The second expression, ' ' , is a character literal. Character literals are completely distinct from string literals. A character literal is always enclosed in single quotes; a string literal is always enclosed in double quotes.
- (why?)The result of this expression is an std::string that contains a copy of the characters in s followed by a copy of the characters int . Either s or t , but not both, may be a string literal or a value of type char .

##Questions
- What's the differences between **string** and a **string literal**.