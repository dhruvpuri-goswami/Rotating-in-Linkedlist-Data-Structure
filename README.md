# Rotating-in-Linkedlist-Data-Structure

Problem Statement :
    -- Given a list, rotate the list to the right by k places, where k is non negative.

    Input A = 1 -> 2 -> 3 -> 4 -> 5
    
    K = 2

    Output : 4 -> 5 -> 1 -> 2 -> 3 

    [ ASKED IN AMAZON ]

    // Programmer : Dhruvpuri Goswami //
    
This code is a program to rotate a linked list clockwise or anticlockwise. The linked list is implemented using a structure called node, which has two fields: data (an integer) and next (a pointer to another node). The code has functions to create a linked list, rotate the linked list clockwise or anticlockwise, and display the linked list.

The createlinkedlist function prompts the user to enter the size of the linked list, and then it creates the linked list by prompting the user to enter the value of each node in the list. The clockwise function rotates the linked list clockwise by a number of times specified by the user. It does this by moving the head pointer to the last node and the last pointer to the node before the last node. The anticlockwise function rotates the linked list anticlockwise by a number of times specified by the user. It does this by moving the head and last pointers to their next nodes. Finally, the display function prints the elements of the linked list.

Output:

>> Creates a linkedlist:

![image](https://user-images.githubusercontent.com/92724441/211048076-71eb2781-9534-4b7d-a36f-6247b466ddf2.png)


>> Rotate a linkedlist in Clockwise:

![image](https://user-images.githubusercontent.com/92724441/211048246-05c63d20-6935-402e-9d64-6f493eff70b4.png)


>> Rotate a linkedlist in Anticlockwise:

![image](https://user-images.githubusercontent.com/92724441/211048318-6d8472b4-800a-4802-8712-4379cc5d746e.png)
