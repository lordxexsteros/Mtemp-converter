#include <iomanip> // Include this header for setting decimal precision
#include <iostream>

int main() {
  using std::endl;

  double temp;
  double ans;
  char unit;

  // Display
  std::cout << "" << endl;
  std::cout << "Temp converter by Mayank Biswas" << endl;

  // Get user main unit
  std::cout << "Choose your unit to convert to:" << endl;
  std::cout << "F = Fahrenheit , C = Celsius" << endl;
  std::cout << "Enter your unit: ";
  std::cin >> unit;

  // END---------------

  // Set precision for floating-point output
  std::cout << std::fixed << std::setprecision(2);

  if (unit == 'F' || unit == 'f') {
    std::cout << "\nEnter your temperature in Celsius: ";
    std::cin >> temp;

    std::cout << "Calculating -> " << temp << " °C to °F" << endl;
    ans = ((temp * 9) / 5) + 32;
    std::cout << ans << " °F" << endl;
  }

  else if (unit == 'C' || unit == 'c') {
    std::cout << "\nEnter your temperature in Fahrenheit: ";
    std::cin >> temp;

    std::cout << "Calculating -> " << temp << " °F to °C" << endl;
    ans = (temp - 32) * 5 / 9;
    std::cout << ans << " °C" << endl;
  } else {
    std::cout << "Invalid input. Exiting!" << endl;
  }

  std::cout << "Exiting! Bye." << endl;
  std::cout << "" << endl;
  return 0;
}

