#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct User {
  string name;
  int energy;
};

int main() {
  fstream myFile;
  User user1, user2, user3, user;

  user1.name = "faris";
  user1.energy = 10;

  user2.name = "rafi";
  user2.energy = 7;

  user3.name = "ardi";
  user3.energy = 5;

  // Open the binary file "data.bin" for input/output without truncating existing data.
  myFile.open("data.bin", ios::in | ios::out | ios::binary);

  // Check if the file is successfully opened.
  if (!myFile.is_open()) {
    cerr << "Error opening the file!" << endl;
    return 1; // Return an error code.
  }

  // Write the data of user1, user2, and user3 to the binary file.
  myFile.write(reinterpret_cast<char*>(&user1), sizeof(User));
  myFile.write(reinterpret_cast<char*>(&user2), sizeof(User));
  myFile.write(reinterpret_cast<char*>(&user3), sizeof(User));

  // Move the file cursor back to the beginning of the file.
  myFile.seekg(0, ios::beg);

  // Loop to read data from the file (assuming each record in the file is of type User).
  for (int i = 0; i < 3; i++) {
    // Read data from the file into the user structure.
    if (myFile.read(reinterpret_cast<char*>(&user), sizeof(User))) {
      // Print the values of the name and energy members of the user structure.
      cout << "Name: " << user.name << endl;
      cout << "Energy: " << user.energy << endl;
      cout << endl;
    } else {
      cerr << "Error reading from the file!" << endl;
    }
  }

  // Close the file after reading and writing.
  myFile.close();

  // Wait for user input before exiting the program.
  cin.get();
  return 0;
}
