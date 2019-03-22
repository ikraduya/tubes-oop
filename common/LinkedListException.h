/**
 * @file LinkedListException.h
 * @author Ikraduya
 * @date 2019-03-22
 */

#ifndef LINKED_LIST_EXCEPTION_H
#define LINKED_LIST_EXCEPTION_H

#include <string>
#include <iostream>
#include <exception>

class LinkedListExp : public std::exception {
  public:
    LinkedListExp(const std::string& msg) {
      _msg = msg;
    }

    virtual const char* what() const noexcept override {
      return _msg.c_str();
    }
    
  private:
    std::string _msg;
};


#endif