A Simple Calculator
Done By: Yoseph Tenaw ETS1318/10

This mini-project employs 3 design patters. Factory Method, Facade Pattern and State Pattern.
The code changes it behaviour(what it does) in each state(State Pattern).
The code makes four classes( Add(),Sub(),Mul(),Div() ) from Arithmetic Class by Polymorphism(Factory Pattern)
The code provides an Interface(Calculator) to use other sub-systems like Addition, Subtraction, Division and Multiplication (Facade Pattern)

How to use:

1) To use the calculator in its Add state, just double click on 'a.exe'.

2) To use the calculator in various states:
	a) Open your command line or terminal in this folder
	b) write 'a.exe STATE CHOICE'. The STATE CHOICE can have four options
		 'AddState', 'SubState', 'MulState' and 'DivState'

Example: To use the calculator in its Multiplication State, you write 'a.exe MulState',
	 To use the calculator in its Division State, you write 'a.exe DivState',
	 To use the calculator in its Subtraction State, you write 'a.exe SubState',
	 To use the calculator in its Addtion State, you write 'a.exe AddState'