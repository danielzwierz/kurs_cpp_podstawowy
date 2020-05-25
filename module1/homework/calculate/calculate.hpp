#pragma once
#include <string>
#include <iostream>

std::string calculate(const std::string& command, int first, int second) {

 std::string result = "Invalid data";

  if(command == "add") result = std::to_string(first + second);
  if(command == "subtract") result = std::to_string(first - second);
  if(command == "multiply") result = std::to_string(first * second);
  if(command == "divide") 
  {
	  if(second == 0) result = "Division by 0";  
	  else result = std::to_string(first / second);
  }

  return result;

}