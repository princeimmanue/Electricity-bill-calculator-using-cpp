ELECTRICITY BILL CALCULATOR

This program is written in C++ language and helps you to calculate your electricity bill by taking the previous reading and current reading as input. The bill amount is calculated based on the number of units consumed and the tariff rate.
How to run the program

    Open your preferred C++ compiler or IDE.
    Create a new file and copy the code.
    Save the file with a suitable name and extension (e.g., main.cpp).
    Compile and run the program.

Program functionality

The program uses a class elec_bill and two member functions, get and printamount. The get function takes input from the user, the previous reading and current reading of electricity consumption. The printamount function calculates the bill amount based on the tariff rate and displays the output.

The tariff rate is based on the number of units consumed, and it is calculated as follows:

    Up to 100 units: 0 Rs/unit
    From 101 to 200 units: 2 Rs/unit
    From 201 to 400 units: 4 Rs/unit
    From 401 to 600 units: 6 Rs/unit
    From 601 to 800 units: 8 Rs/unit
    Above 800 units: 10 Rs/unit

Program output

Upon running the program, the user will be prompted to enter the previous reading and current reading. The program will then calculate the bill amount and display the output on the screen.

Example output:

Output

                                :::>ELECTRICITY BILL CALCULATOR<:::
                                                         ::>WELCOME<:::     :>by prince immanuel 
        -->Enter previous reading:
        200
        -->Enter current reading:
        300
        -->Bill amount is:200

Conclusion

This program is a basic implementation of a calculator to calculate electricity bills. It can be modified to include additional functionalities like displaying the tariff rates, keeping a record of bills, and generating reports.
