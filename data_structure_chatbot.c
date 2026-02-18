#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void respond(char *user_input) {
    char lowercase_input[100];
    int i;
    strcpy(lowercase_input, user_input);
    for (i = 0; lowercase_input[i]; i++) {
        lowercase_input[i] = tolower(lowercase_input[i]);
    }

    if (strstr(lowercase_input, "hello") || strstr(lowercase_input, "hi")) 
    {
        printf("Chatbot: Hello! How can I help you?\n\n");
    } 
    else if (strstr(lowercase_input, "how are you")) 
    {
        printf("Chatbot: I'm just a program, but thanks for asking!\n\n");
    } 
    else if (strstr(lowercase_input, "what is information") || strstr(lowercase_input, "explain information") || strstr(lowercase_input, "define information")) 
    {
        printf("Chatbot:\nInformation refers to data that has been processed, organized, or structured in a meaningful way, providing context, relevance, and value. In a general sense, information is the result of interpreting and understanding data, allowing it to convey knowledge or convey a message. It represents a higher level of abstraction than raw data, as it often involves patterns, relationships, or insights derived from the data.\n\n");
    }  
    else if (strstr(lowercase_input, "applications of data structure")) 
    {
        printf("Chatbot:\nApplications of data structure are:\n1> compiler design\n2> operating system\n3> dbms\n4> graphs\n5> artificial intelligence\n\n");
    } 
    else if (strstr(lowercase_input, "advantages of data structure")) 
    {
        printf("Chatbot:\nAdvantages of using data structures:\n1> Organized Data Storage\n2> Efficient Data Retrieval\n3> Optimized Performance\n4> Abstraction\n5> Efficiency\n6> Reusability\n\n");
    } 
    else if (strstr(lowercase_input, "types of data structure")) 
    {
        printf("Chatbot:\nThere are two types of data structure :\n1> Primitive data structure :-\nprimitive data structure are fundamentals data types which are supported by programming language. Example integer, character, float, etc.\n\n2> Non-primitive data structure :-\nNon-primitive data structures are created using primitive data structure. Example array, stack, queue, linked list, tree, etc.  \n\n");
    } 
    else if (strstr(lowercase_input, "operations on data structure")) 
    {
        printf("Chatbot:\nOperations on data structure are as follows:\n1> Traversing\n2> Searching\n3> Inserting\n4> Deleting\n5> Sorting\n6> Merging  \n\n");
    } 
    else if (strstr(lowercase_input, "explain data structure") || strstr(lowercase_input, "what is data structure") || strstr(lowercase_input, "define data structure")) 
    {
        printf("Chatbot: \nA data structure is a specialized format or arrangement for organizing and storing data in a computer's memory or other storage devices. It defines a set of rules or operations for manipulating the data, providing a way to efficiently organize, retrieve, and update information. Data structures play a crucial role in computer science and programming, as they determine the efficiency of algorithms and the overall performance of software.\n\n");
    } 
    else if (strstr(lowercase_input, "advantages of bubble sort")) 
    {
        printf("Chatbot:\nBubble sort is a simple sorting algorithm with some advantages in specific situations. Here are the advantages of bubble sort:\n1> Simple Implementation\n2> No Additional Memory Usage\n3> Stable Sorting\n4> Adaptive to Nearly Sorted Data  \n\n");
    } 
    else if (strstr(lowercase_input, "disadvantages of bubble sort")) 
    {
        printf("Chatbot:\nWhile bubble sort has some advantages in simplicity and ease of implementation, it also comes with several disadvantages, particularly in terms of performance. Here are the main disadvantages of bubble sort:\n1> Inefficiency for Large Datasets\n2> Poor Performance in Worst and Average Cases\n3> Not Suitable for Large Datasets  \n\n");
    } 
    else if (strstr(lowercase_input, "advantages of insertion sort")) 
    {
        printf("Chatbot:\nAdvantages of insertion sort are:\n1> It is easy to implement and efficient to use on samll sets of data.\n2> It requires less memory space.  \n\n");
    } 
    else if (strstr(lowercase_input, "disadvantages of insertion sort")) 
    {
        printf("Chatbot:\nDisadvantages of insertion sort are:\n1> It is less efficient on list containing more numbers of elements.\n2> As the number of elements increases the performance of program would be slow  \n\n");
    } 
    else if (strstr(lowercase_input, "advantages of selection sort")) 
    {
        printf("Chatbot:\nAdvantages of selection sort are:\n1> It is simple and easy to implement\n2> It can be used for small data sets\n3> It is more efficience than bubble sort.  \n\n");
    } 
    else if (strstr(lowercase_input, "disadvantages of selection sort")) 
    {
        printf("Chatbot:\nThe main disadvantages of selection sort:\n1> Not suitable for large datasets\n2> Unstable sorting\n3> Fixed number of comparisons.  \n\n");
    } 
    else if (strstr(lowercase_input, "advantages of merge sort")) 
    {
        printf("Chatbot:\nAdvantages of merge sort are:\n1> Merge sort is stable sort\n2> It is easy to understand\n3 It gives better performance.  \n\n");
    } 
    else if (strstr(lowercase_input, "disadvantages of merge sort")) 
    {
        printf("Chatbot:\nDesadvantages of merge sort are:\n1> It requires extra memory space\n2> It is slow process.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is bubble sort") || strstr(lowercase_input, "define bubble sort") || strstr(lowercase_input, "explain bubble sort")) 
    {
        printf("Chatbot:\n\tBubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the entire list is sorted. The algorithm gets its name because smaller elements bubble to the top of the list.\n\tBubble Sort is not the most efficient sorting algorithm, especially for large datasets, due to its quadratic time complexity. More advanced sorting algorithms like Quick Sort or Merge Sort are often preferred for larger datasets. However, Bubble Sort is easy to understand and implement, making it useful for educational purposes or for small datasets where simplicity is more important than efficiency.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is insertion sort") || strstr(lowercase_input, "define insertion sort") || strstr(lowercase_input, "explain insertion sort")) 
    {
        printf("Chatbot:\nInsertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort has some advantages, such as its simplicity, low overhead, and efficient use of small datasets or datasets that are mostly sorted. \n\n");
    } 
    else if (strstr(lowercase_input, "what is selection sort") || strstr(lowercase_input, "define selection sort") || strstr(lowercase_input, "explain selection sort")) 
    {
        printf("Chatbot:\nSelection Sort is another simple sorting algorithm that sorts an array by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning. Like Insertion Sort, it has a time complexity of O(n^2), making it inefficient for large datasets, but it has the advantage of requiring only a constant amount of additional memory.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is merge sort") || strstr(lowercase_input, "define merge sort") || strstr(lowercase_input, "explain merge sort")) 
    {
        printf("Chatbot:\nMerge sort is a popular sorting algorithm that follows the divide-and-conquer paradigm. It works by recursively dividing the input array into smaller sub-arrays, sorting them, and then merging the sorted sub-arrays to produce a fully sorted array.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is sorting") || strstr(lowercase_input, "define sorting") || strstr(lowercase_input, "explain sorting")) 
    {
        printf("Chatbot:\nSorting is a fundamental operation in computer science and data processing that involves arranging elements in a specific order, typically based on some criteria. The primary purpose of sorting is to make it easier to search for and retrieve information from a dataset. There are various sorting algorithms, each with its own advantages and disadvantages, and the choice of algorithm depends on factors such as the size of the dataset, the nature of the data, and the desired efficiency. \n\n");
    } 
    else if (strstr(lowercase_input, "disadvantages of binary search")) 
    {
        printf("Chatbot:\nBinary search, despite its efficiency in many scenarios, also has certain disadvantages. Here are the main disadvantages of binary search:\n1>Requirement of sorted data.\n2> INapplicability to linked list.\n3> Not suitable for unordered data.  \n\n");
    } 
    else if (strstr(lowercase_input, "disadvantages of linear search")) 
    {
        printf("Chatbot:\n Linear search, also known as sequential search, is a straightforward method for finding a target element within a list. However, it comes with certain disadvantages:\n1> Inefficiency with Large Datasets\n2> Inefficient for Repeated Searches\n3> Performance Issues in Real-time Systems \n\n");
    }
    else if (strstr(lowercase_input, "advantages of linear search")) 
    {
        printf("Chatbot:\nLinear search is a simple searching algorithm that has its own set of advantages in certain situations. Here are the advantages of linear search:\n1> Easy to implementation\n2> No additional memory required\n3> Simplicity and Readability  \n\n");
    }  
    else if (strstr(lowercase_input, "advantages of binary search")) 
    {
        printf("Chatbot:\nBinary search is a more efficient algorithm compared to linear search, especially when dealing with sorted datasets. Here are some advantages of binary search:\n1> Effective in Real-time Systems\n2> Memory Efficiency\n3> Reduced Number of Comparisons \n\n");
    } 
    else if (strstr(lowercase_input, "what is linear search") || strstr(lowercase_input, "define linear search") || strstr(lowercase_input, "explain linear search")) 
    {
        printf("Chatbot:\nLinear search, also known as sequential search, is a straightforward searching algorithm used to find a specific element in a collection of data. The collection can be an array, list, or any linear data structure. The linear search algorithm iterates through each element in the data structure one by one until it finds the target element or reaches the end of the collection.\nLinear search is easy to understand and implement, but its main disadvantage is its linear time complexity, denoted as O(n), where n is the number of elements in the collection. This means that the search time increases linearly with the size of the collection, making it less efficient for large datasets compared to more advanced search algorithms like binary search on sorted arrays.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is binary search") || strstr(lowercase_input, "define binary search") || strstr(lowercase_input, "explain binary search")) 
    {
        printf("Chatbot:\nBinary search is a searching algorithm that efficiently finds a target element in a sorted collection by repeatedly dividing the search space in half. It is significantly more efficient than linear search, especially for large datasets, due to its logarithmic time complexity.\nBinary search is a powerful algorithm for searching in sorted datasets, and its efficiency makes it a preferred choice when dealing with large collections.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is searching") || strstr(lowercase_input, "define searching") || strstr(lowercase_input, "explain searching")) 
    {
        printf("Chatbot:\nIn the context of data structures and algorithms, searching refers to the process of locating a specific item or element within a collection of data. The data structure in which the search operation is performed could be an array, list, tree, graph, hash table, or any other organized format for storing and organizing data.\n\tThe primary goal of searching is to determine whether a particular element exists within the data structure and, if so, to identify its location or retrieve it. The efficiency of a search algorithm is a crucial factor, especially when dealing with large datasets, and different data structures may require different search strategies.  \n\n");
    }  
    else if (strstr(lowercase_input, "disadvantages of abstract data types")) 
    {
        printf("Chatbot:\nDisadvantages of ADT are:\n1>overhead\n2> complexity\n3> limited flexibility  \n\n");
    } 
    else if (strstr(lowercase_input, "advantages of abstract data types")) 
    {
        printf("Chatbot:\nAdvantages of ADT are:\n1> Abstraction\n2> Better conceptualization\n3> Encapsulation\n4> Modularity\n4> Information hiding  \n\n");
    } 
    else if (strstr(lowercase_input, "what is abstract data types") || strstr(lowercase_input, "define abstract data types") || strstr(lowercase_input, "explain abstract data types")) 
    {
        printf("Chatbot:\nAbstract Data Types are a high-level description of a set of operations that can be performed on a data structure, independent of the specific implementation details. An ADT defines a logical model for data and operations but does not specify how these operations should be implemented or how the data structure should be organized in memory. The focus is on what operations are possible and what their semantics are.  \n\n");
    }
    else if (strstr(lowercase_input, "operations on stack")) 
    {
        printf("Chatbot:\nThe operations commonly associated with a stack are:\n1> Push: Adding an element to the top of the stack.\n2> Pop: Removing the element from the top of the stack.\n3> Peek or Top: Examining the element at the top of the stack without removing it.\n4> IsEmpty: Checking if the stack is empty.\n5> Size: Determining the number of elements in the stack.  \n\n");
    }  
    else if (strstr(lowercase_input, "stack using linked list")) 
    {
        printf("Chatbot:\nA stack can be implemented using a linked list, where each element in the stack is represented by a node in the linked list. This implementation provides dynamic memory allocation, allowing the stack to grow or shrink as needed.   \n\n");
    } 
    else if (strstr(lowercase_input, "stack using array")) 
    {
        printf("Chatbot:\nA stack can be implemented using an array to represent the underlying data structure. In this array-based implementation, the array acts as a container for the elements of the stack, and an index variable is used to keep track of the top of the stack.   \n\n");
    } 
    else if (strstr(lowercase_input, "applications of stack")) 
    {
        printf("Chatbot:\n Applications of stack are as follows :-\n1> Stack is used by compilers to check for balancing of parentheses, brackets and braces\n2> Stack is used to convert an infix expression into postfix / prefix expression\n3> Stack is used to evaluate postfix expression \n\n");
    } 
    else if (strstr(lowercase_input, "what is stack") || strstr(lowercase_input, "define stack") || strstr(lowercase_input, "explain stack")) 
    {
        printf("Chatbot:\nA stack is a linear data structure that follows the Last In, First Out (LIFO) principle. This means that the last element added to the stack is the first one to be removed.\nThe analogy often used for a stack is that of a stack of plates in a cafeteria. You can only add a new plate to the top of the stack, and the last plate added is the first one you pick up. This ordering principle makes stacks useful in various computer science applications, including parsing expressions, managing function calls in programming languages, and undo mechanisms in software applications.   \n\n");
    } 
    else if (strstr(lowercase_input, "conversion of infix expression to postfix expression")) 
    {
        printf("Chatbot:\nConverting an infix expression to a postfix expression involves rearranging the operators and operands to postfix notation while respecting the original expression's precedence and associativity rules. The shunting yard algorithm is commonly used for this conversion. Here's a step-by-step explanation of the algorithm:\n1> Create two stacks: one for operators  and another for the output postfix expression.\n2> Scan the infix expression from left to right, token by token.\n3> If a token is an operand, add it to the output queue.\n4> If a token is an operatior then pop operators from the operator_stack and add them to the output queue until either the operatior_stack is empty or the top operator has lower precedence than the current operatior and after that push the current operator onto the operator_stack.\n4> If a tokern is an open parenthesis, push it onto the operator_stack. And if a token is a close parenthesis, pop operatiors from the operator_stack and add them to the output queue until an open parenthesis is encountered. Pop and discard the open parenthesis.\n6> After processing all tokens, pop any remaining operators from the operator_stack and add them to the output queue.\n 7> The elements in the output_queue now form the equivalent postfix expression.    \n\n");
    } 
    else if (strstr(lowercase_input, "conversion of infix expression to prefix expression")) 
    {
        printf("Chatbot:\nConverting an infix expression to a prefix expression involves rearranging the operators and operands to prefix notation while respecting the original expression's precedence and associativity rules. The process typically requires a stack to manage operators and parentheses. Here's a step-by-step explanation of the algorithm:\n1>Reverse the order of characters in the infix expression. This step simplifies the process of handling parentheses and associativity.\n2> Replace open parentheses  with close parentheses  and vice versa. This step ensures that the reversed expression still represents the original infix expression.\n3> Use the Shunting Yard Algorithm to convert the reversed infix expression to postfix notation. This involves processing each token, handling operands, operators, and parentheses, and using stacks to manage the conversion.\n4> Reverse the order of characters in the postfix expression obtained from the previous step. This step brings the expression back to the correct order.\n5> The reversed and modified postfix expression obtained in the previous step is the equivalent prefix expression.   \n\n");
    } 
    else if (strstr(lowercase_input, "evaluation of postfix expression")) 
    {
        printf("Chatbot:\nEvaluating a postfix expression involves processing mathematical expressions in a specific notation called postfix or reverse Polish notation (RPN). In postfix notation, the operators come after their operands. Here's a step-by-step explanation of how to evaluate a postfix expression:\n1> Create an empty stack to hold operands during the evaluation process.\n2> Start scanning the postfix expression one symbol at a time.\n3> For each symbol in the expression, do the following: If it's an operand (a number), push it onto the stack. And If it's an operator, pop the required number of operands from the stack, perform the operation, and push the result back onto the stack.\n4> Continue this process until you have processed all symbols in the postfix expression.\n5> The final result should be on the top of the stack after processing the entire expression. \n\n");
    } 
    else if (strstr(lowercase_input, "evaluation of prefix expression")) 
    {
        printf("Chatbot:\nEvaluating a prefix expression involves processing mathematical expressions in a specific notation called prefix or Polish notation. In prefix notation, the operators precede their operands. Here's a step-by-step explanation of how to evaluate a prefix expression:\n1> Create an empty stack to hold operands during the evaluation process.\n2> Start scanning the prefix expression one symbol at a time, beginning from the rightmost symbol.\n3> For each symbol in the expression, do the following: If it's an operand (a number), push it onto the stack. And If it's an operator, pop the required number of operands from the stack, perform the operation, and push the result back onto the stack.\n4> Continue this process until you have processed all symbols in the prefix expression.\n5> The final result should be on the top of the stack after processing the entire expression.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is infix expression") || strstr(lowercase_input, "define infix expression") || strstr(lowercase_input, "explain infix expression")) 
    {
        printf("Chatbot:\nAn infix expression is a mathematical expression where operators are written between operands. In other words, the usual way we write mathematical expressions follows the infix notation. For example, the expression '3 + 5' is in infix notation.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is postfix expression") || strstr(lowercase_input, "define postfix expression") || strstr(lowercase_input, "explain postfix expression")) 
    {
        printf("Chatbot:\nA postfix expression, also known as Reverse Polish Notation (RPN), is a mathematical expression in which operators come after their operands. Unlike infix expressions, postfix expressions do not require parentheses to indicate the order of operations because the notation itself determines the order.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is prefix expression") || strstr(lowercase_input, "define prefix expression") || strstr(lowercase_input, "explain prefix expression")) 
    {
        printf("Chatbot:\nA prefix expression, also known as Polish notation, is a mathematical expression in which operators precede their operands. Similar to postfix notation, prefix notation eliminates the need for parentheses to indicate the order of operations.   \n\n");
    } 
    else if (strstr(lowercase_input, "operations on queue")) 
    {
        printf("Chatbot:\nQueue support several fundamental operations which are as follows:-\n1> Enqueue : adding an element to the end of the queue\n2> Dequeue : Removing an element from the beginning of the queue\n3> Peek : viewing the element at the front of the queue without removing it.\n4> IsEmpty : checking if the queue is empty.  \n\n");
    } 
    else if (strstr(lowercase_input, "array representation of queue")) 
    {
        printf("Chatbot:\nThe array representation of a queue involves using a linear array to store elements in a First-In-First-Out (FIFO) order. The key components of this representation include a one-dimensional array to hold the queue elements, and two pointers, namely the front and rear, to keep track of the positions where elements can be added (enqueue) or removed (dequeue). Initially, both front and rear pointers are set to -1 to signify an empty queue. When an element is enqueued, the rear pointer is incremented, and the element is placed at the position indicated by the rear. If the queue was empty, the front pointer is set to 0. Conversely, during a dequeue operation, the front pointer is incremented, indicating the removal of the element at the front. If the queue becomes empty after a dequeue operation, both front and rear pointers are set back to -1. This array-based implementation of a queue is straightforward and efficient, particularly in programming languages that support arrays, and provides a simple way to manage elements with a clear order of insertion and removal.  \n\n");
    } 
    else if (strstr(lowercase_input, "linked representation of queue")) 
    {
        printf("Chatbot:\nThe linked representation of a queue involves using a linked list data structure to implement the queue's functionality. In this representation, each element in the queue is a node in the linked list, and pointers maintain the connections between these nodes. Typically, the front and rear of the queue are represented by pointers pointing to the first and last nodes of the linked list, respectively. To enqueue an element, a new node is created and added to the rear of the linked list. If the queue is empty, both front and rear pointers point to the newly added node. To dequeue an element, the front node is removed, and the front pointer is updated to point to the next node in the list. This representation allows for dynamic memory allocation, and it doesn't have a fixed size like an array-based implementation. It is particularly useful when the size of the queue is not known in advance or when there is a need for frequent insertions and deletions. However, it comes with the overhead of managing pointers and dynamic memory allocation. Overall, the linked representation provides a flexible and efficient way to implement a queue in various programming scenarios.  \n\n");
    } 
    else if (strstr(lowercase_input, "types of queue")) 
    {
        printf("Chatbot:\nQueues can be categorized into different types based on their specific characteristics and use cases. Here are some common types of queues:\n1> Simple Queue : A simple queue follows the basic First-In-First-Out (FIFO) principle. Elements are added at the rear and removed from the front. It is the most straightforward type of queue.\n2> Circular Queue: In a circular queue, the front and rear pointers are connected, forming a circular structure. When the rear reaches the end of the queue, it wraps around to the beginning. This type of queue efficiently utilizes available space and avoids the need to shift elements.\n3> Priority Queue: A priority queue assigns a priority to each element. Elements with higher priority are dequeued before those with lower priority, irrespective of their arrival order. Priority queues are commonly used in scheduling and resource allocation.  \n\n");
    } 
    else if (strstr(lowercase_input, "applications of queue")) 
    {
        printf("Chatbot:\nApplications of queue are as follows :-\n1> Task Sheduling\n2> Print Queue\n3> Data buffering\n4> Inventory Management\n5> Background task processing.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is queue") || strstr(lowercase_input, "define queue") || strstr(lowercase_input, "explain queue")) 
    {
        printf("Chatbot:\nA queue is a data structure that follows the First-In-First-Out (FIFO) principle, which means that the first element added to the queue will be the first one to be removed. It's analogous to a real-world queue or line, where the person who arrives first is the first to be served.  \n\n");
    } 
    else if (strstr(lowercase_input, "memory representation of linked list")) 
    {
        printf("Chatbot:\nThe memory representation of a linked list involves nodes linked together to form a sequence. Each node in the linked list contains two fields: a data field to store the actual information and a link field or next pointer to point to the next node in the sequence. The last node typically has a null reference or a special value in its link field to indicate the end of the list.  \n\n");
    } 
    else if (strstr(lowercase_input, "types of linked list")) 
    {
        printf("Chatbot:\nThere are several types of linked lists, each with its own characteristics and use cases. The main types include:\n1> Singly Linked List: Each node in a singly linked list contains a data field and a link or next pointer to the next node in the sequence. The last node typically has a null reference or a special value in its link field to indicate the end of the list. Traversal is straightforward, but reverse traversal is not as efficient.\n2> Doubly Linked List: Each node in a doubly linked list contains a data field, a link to the next node next pointer, and a link to the previous node prev pointer. Enables efficient traversal in both directions forward and backward. Requires more memory due to the additional prev pointers.\n3> Circular Linked List: In a circular linked list, the last node's link field points back to the first node, forming a circular structure. Useful for applications where continuous access to the elements is required. Traversal starts at any point and continues indefinitely. \n\n");
    } 
    else if (strstr(lowercase_input, "operations on linked list")) 
    {
        printf("Chatbot:\nLinked lists support various operations that allow you to manipulate and manage the data stored in the list. Here are some common operations on linked lists:\n1> Insertion:\na> Insert at the Beginning: Add a new node with the specified data at the beginning of the linked list.\nb> Insert at the End: Add a new node with the specified data at the end of the linked list.\nc> Insert at a Specific Position: Insert a new node with the specified data at a given position in the linked list.\n\n2> Deletion:\na> Delete from the Beginning: Remove the first node in the linked list.\nb> Delete from the End: Remove the last node in the linked list.\nc> Delete at a Specific Position: Remove the node at a specified position in the linked list.\\n3> Traversal: Visit each node in the linked list to perform some operation\\n4> Search : Find a node with a specific value in the linked list.\\n5> Reversal: Reverse the order of nodes in the linked list.   \n\n");
    } 
    else if (strstr(lowercase_input, "what is singly linked list") || strstr(lowercase_input, "define singly linked list") || strstr(lowercase_input, "explain singly linked list")) 
    {
        printf("Chatbot:\nA singly linked list is a data structure in which elements, called nodes, are connected linearly, with each node pointing to the next node in the sequence. It's one of the simplest forms of linked lists. In a singly linked list, traversal is possible only in one direction from the head to the tail.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is doubly linked list") || strstr(lowercase_input, "define doubly linked list") || strstr(lowercase_input, "explain doubly linked list")) 
    {
        printf("Chatbot:\nA doubly linked list is a type of linked list in which each node contains not only a reference to the next node in the sequence but also a reference to the previous node. This bidirectional linking enables traversal in both forward and backward directions. Each node in a doubly linked list has three fields: data, next, and prev.  \n\n");
    } 
    else if (strstr(lowercase_input, "what is array") || strstr(lowercase_input, "define array") || strstr(lowercase_input, "explain array")) 
    {
        printf("Chatbot:\nAn array is a fundamental and widely used data structure in computer science that stores a collection of elements, each identified by an index or a key. The elements in an array are stored in contiguous memory locations, making it efficient to access individual elements based on their position.   \n\n");
    }
    else if (strstr(lowercase_input, "what is linked list") || strstr(lowercase_input, "define linked list") || strstr(lowercase_input, "explain linked list")) 
    {
        printf("Chatbot:\nA linked list is a data structure used in computer science to organize and store data. It consists of a sequence of elements, where each element points to the next one in the sequence. Unlike arrays, linked lists do not have a fixed size, and their elements, called nodes, are not stored in contiguous memory locations. Instead, each node contains data and a reference or link to the next node in the sequence.\nThe basic building block of a linked list is a node, which typically has two fields:\n1> Data field: This field stores the actual data or information.\n2> Next field or link: This field contains a reference pointer or link to the next node in the sequence.\nThe last node in a linked list usually points to a special value often null or a sentinel value to indicate the end of the list. \n\n");
    } 
    else if (strstr(lowercase_input, "what is data") || strstr(lowercase_input, "define data") || strstr(lowercase_input, "explain data")) 
    {
        printf("Chatbot:\nData refers to raw facts, figures, symbols, or raw input that lacks context and meaning. It is unprocessed information, often in the form of numbers, text, or symbols, and it represents the basic building blocks from which information and knowledge are derived. Data can be collected, stored, and processed by computer systems for various purposes. \n\n");
    }
    else if (strstr(lowercase_input, "bye")) 
    {
        printf("Chatbot: Goodbye! Have a great day.\n\n");
    } 
    else if (strstr(lowercase_input, "source code") || strstr(lowercase_input, "programme") || strstr(lowercase_input, "program")) 
    {
        printf("Chatbot:\n I'm sorry, I can't have permissions to write the program. \n\n");
    } 
    else 
    {
        printf("Chatbot: I'm sorry, I didn't understand that.\n\n");
    }
}

int main() {
    char user_input[100];
    printf("--------------------------- ChatBot ---------------------------\n\n\n");
    printf("Chatbot: Hello! How can I help you? You can ask me anything related to data structure. Type 'exit' to end the conversation.\n\n");

    while (1) {
        printf("User: ");
        fgets(user_input, sizeof(user_input), stdin);

        user_input[strcspn(user_input, "\n")] = 0;
        if (strcmp(user_input, "exit") == 0) {
            printf("Chatbot: Goodbye! Exiting...\n");
            break;
        }

        respond(user_input);
    }

    return 0;
}
