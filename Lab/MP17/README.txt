MP17 (No Strings Attached? I don't think so!)
Topic: Strings

Objective: The students should be able to manipulate strings.

Instructions:

Prompt the user with the following menu:

Menu:

Palindrome

String Reversal

Count Words

Item 1 simply asks the user to enter a string and determines whether the string is a palindrome or not. A string is said to be a palindrome when read backwards, produces the same string. Samples: yehey, anna, nodevillivedon, racecar, etc.

Item 2 will also ask the user to enter a string. This time, it has to reverse the contents of the string. In doing so, the use of a temporary or extra string (or any form of temporary or extra array) is prohibited. Sample: if the string is "hello", then the string should be successfully reversed as "olleh". Simply printing the string backwards, i.e. printing the string from the last character down to the first character of the string does NOT reverse the string. Make sure that after the routine on reversing the string, printing it using printf("%s\n",st); - assuming that the string is st - should display the string in reverse.

Item 3 will ask the user to enter a string as well. It should be able to display the count or the number of words found in the string. Assume that words are separated by a space. And we define a word as a sequence of one or more characters (space not included). Sample: "hello world" has 2 words. "hello      from      the             other side" has 5 words. Notice that simply counting the spaces present in the string will not work.

NOTE: For this exercise, you are not allowed to use any helper function from any librabry for the manipulation of the string. Also notice that when you enter a number for the choice in the menu, then ask the user to enter a string, the program "skips" the input. To solve this, use the fflush after asking the user's choice. This only happens when you ask the user to enter any numerical data followed by string data.

scanf("%d", &choice);

fflush(stdin);

or simply use scanf(" %[^\n]s",&str); to flush the new line character. If that wasn't clear, place a space prior to %.

To get an entire line from the user (including spaces) use scanf("%[^\n]s",str); 