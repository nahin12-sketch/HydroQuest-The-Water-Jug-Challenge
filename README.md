This project is a command-line-based simulation of the classic "Water Jug Problem," which involves using two jugs with different capacities to measure a specific amount of water. The program allows the user to simulate different operations on the jugs to achieve the target amount of water, either in one of the jugs.

Key Features and Functionality:

1. User Input:

The user is prompted to input the capacities of two jugs and the target amount of water they want to measure.

2. Validation:

The program checks if the target amount can be measured using the two jugs. If the target is larger than both jugs' capacities or if the target is not a multiple of the greatest common divisor (gcd) of the two jug capacities, it informs the user that the measurement is impossible.

3. GCD Calculation:

The program calculates the greatest common divisor (gcd) of the two jugs' capacities using the Euclidean algorithm. The target can only be measured if it's a multiple of the gcd.

4. Gameplay Loop:

The program enters an interactive loop where the user can input various commands to manipulate the water in the jugs:

 	fill1: Fills the first jug to its capacity.

 	fill2: Fills the second jug to its capacity.

 	empty1: Empties the first jug.

 	empty2: Empties the second jug.

 	pour1to2: Pours water from the first jug into the second jug until the second jug is full or the first jug is empty.

 	pour2to1: Pours water from the second jug into the first jug until the first jug is full or the second jug is empty.

 	exit: Exits the program.

5. Instructions and Fun Messages:

The game provides fun, humorous messages after each operation, like "Water juggling at its finest!" and "You have got water, you have got power!" to keep the experience lighthearted and engaging.

6. Game Objective:

The goal of the game is to measure exactly the target amount of water in either of the jugs. The user continues interacting with the program until this target is reached, or they choose to exit.

7. Ending the Game:

If the user successfully measures the target amount, they receive a congratulatory message. If they wish to stop playing, they can type exit to end the simulation.

Example Use Case:
Suppose the user has two jugs, one with a capacity of 4 liters and another with 3 liters. They want to measure exactly 2 liters. The program guides the user through the process, providing step-by-step operations, such as filling, pouring, and emptying the jugs, until the target of 2 liters is achieved. It also validates if the problem is solvable and informs the user if it’s not.

Educational Purpose:
This project is designed to demonstrate how the water jug problem can be solved programmatically. It gives users a hands-on understanding of the problem-solving process, the importance of gcd in number theory, and how simple algorithms can be applied to real-world problems.

In summary, this project serves as both a fun and educational tool to solve the water jug problem interactively while introducing basic algorithms and logical problem-solving techniques.


The goal of the game is to measure exactly the target amount of water in either of the jugs. The user continues interacting with the program until this target is reached, or they choose to exit.

Ending the Game:

If the user successfully measures the target amount, they receive a congratulatory message. If they wish to stop playing, they can type exit to end the simulation.

Example Use Case:
Suppose the user has two jugs, one with a capacity of 4 liters and another with 3 liters. They want to measure exactly 2 liters. The program guides the user through the process, providing step-by-step operations, such as filling, pouring, and emptying the jugs, until the target of 2 liters is achieved. It also validates if the problem is solvable and informs the user if it’s not.

Educational Purpose:
This project is designed to demonstrate how the water jug problem can be solved programmatically. It gives users a hands-on understanding of the problem-solving process, the importance of gcd in number theory, and how simple algorithms can be applied to real-world problems.

In summary, this project serves as both a fun and educational tool to solve the water jug problem interactively while introducing basic algorithms and logical problem-solving techniques.
