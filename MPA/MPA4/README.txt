MPA4 (Flame it on the Gene)
Prompt the user with the following Menu.

Menu

1. Flames

2. Gene

3. Exit



For item 1, ask the user to enter two strings (two names). Then simulate the game FLAMES (FRIENDS, LOVERS, ACCEPTANCE, MARRIAGE, ENGAGEMENT and SWEETHEARTS). Display the result for the first person, then the result of the second person, and finally, the overall result. For purposes of counting similar letters, the uppercase letter 'A' is the same as the lowercase 'a'.

For item 2, ask the user to enter a human gene sequence. The human DNA has 4 types of nitrogen bases, namely Adenine, Guanine, Cytosine and Thymine. A human gene sequence string usually looks like "GTACTATTATA" but longer of course. For this task, ask the user to enter a string of that form. Ask a second string (shorter, if not same length). The goal is to check whether the shorter second string is found in the first longer string and if it is, how many times does it occur and at which indices they occur. Let's take "GTACTATTATA" for instance. And let's have "TA" as the second shorter string. The outputs based on these inputs are that yes, the shorter string exists in the longer string 4 times. And they occur in indices 1, 4, 7 and 9.

NOTE: For both items, check for valid inputs. If the inputs are invalid, ask the user to re-enter them. For item 1, names should only contain letters from the English character and the space character. For item 2, only the upper case letters A, G, C and T are valid. There is no need to use functions yet.