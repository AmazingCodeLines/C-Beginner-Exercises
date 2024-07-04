
/*
### Challenge for Beginner Programmers

#### Project: Amazing Cleaning Services Estimator

Welcome to the Amazing Cleaning Services Estimator project! Your goal is to write a C++ program that calculates the total cost of cleaning a specified number of small and large rooms, including tax. Follow the instructions and guidelines below to complete the project.

### Instructions

1. **Welcome Message:** Display a welcome message for the user.

2. **User Input:**
   - Prompt the user to enter the number of small rooms.
   - Prompt the user to enter the number of large rooms.

3. **Define Prices and Tax Rate:**
   - Set the price for cleaning a small room to $25.
   - Set the price for cleaning a large room to $35.
   - Set the tax rate to 6%.

4. **Calculate Costs:**
   - Calculate the total cost for cleaning the small rooms.
   - Calculate the total cost for cleaning the large rooms.
   - Calculate the total bill including tax.

5. **Display the Estimate:**
   - Display the estimated cost for cleaning the small rooms.
   - Display the estimated cost for cleaning the large rooms.
   - Display the total bill, including tax.

*/

# include <iostream>

using namespace std;



int main() {
    
    cout << "Welcome to The Amazing Cleaning Services!" << endl;
    
    cout << "\nNumber of small rooms: " << endl;
    int number_small_rooms {0};
    cin >> number_small_rooms;
    
    cout << "Number of large rooms: " << endl;
    int number_large_rooms {0};
    cin >> number_large_rooms;
    
    double price_small_room {25};
    double price_large_room {35};
    
    double tax_rate {0.06};
  
    double total_small_room_cost = price_small_room * number_small_rooms;
    double total_large_room_cost = price_large_room * number_large_rooms;
    double total_bill = (total_small_room_cost + total_large_room_cost) * (1 + tax_rate);
    
    cout << "Estimated Amazing Cleaning Cost:";
    cout << number_small_rooms << " samll room(s) price: $" << total_small_room_cost << endl;
    cout << number_large_rooms << " large room(s) price: $" << total_large_room_cost << endl;
    cout << "Total bill: $" << total_bill << " (Includes $" << total_bill * tax_rate << " tax)" << endl;
    
    return 0;
}