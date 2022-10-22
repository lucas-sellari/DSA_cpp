## What is Stack?

Stack is a linear data structure. Operates in a LIFO (Last In First Out) or FILO (First In Last Out) pattern.

- Operates like a real world stack;
- It is an abstract data type (ADT) with a bounded (predefined) capacity - it stores a limited number of data elements;


## Operations
- push():    add item to the top of the stack. It can overflow;
- pop():     remove item from the top of the stack. It can underflow;
- isEmpty(): tells if the stack is empty;
- isFull():  tells if the stack is full;
- peek(i):   access the item at the i position;
- count():   get the number of items in the stack;
- change(i): change the item at the i position;
- display(): display all the items in the stack.

Obs.: i starts from 0 at the bottom of the stack.


## Applications
- Balancing of symbols (check curly braces, etc);
- Infix to Postfix/Prefix conversion;
- Redo/Undo features;
- Forward/Backward features (cache);
- Used in algorithms like Tower of Hanoi, tree traversals, stock span problem, histogram problem;
- Backtracking, Knight tour problem, rat in a maze, N queen problem, sudoku solver;
- Graph algorithms: topological sorting, strongly connected components.