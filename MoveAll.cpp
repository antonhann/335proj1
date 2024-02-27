#include "MoveAll.hpp"
#include "Book.hpp"

// Moves all Books in "source" with the specified keyword to "dest".
// A Book is moved if any of its keywords match the one specified in this function.
// Use iterators whenever appropriate.
// Hint: you need a const iterator for a const vector, but this will be automatically handled using "auto".

void moveAll (const std::string keyword, std::vector<Book> &source, std::vector<Book> &dest){
  const auto t1_start = std::chrono::steady_clock::now();
  int books_moved=0; // counts books moved
  // DO NOT ALTER ABOVE HERE
  for(auto it = source.begin(); it!=source.end(); ++it){ //outer iterator that iterates through the source
    std::vector<std::string> insideKeywords = it->getKeywords();
    for(auto word = insideKeywords.begin(); word != insideKeywords.end(); ++word){ //iterate through the current book's keywords
      if(*word == keyword){//checks if its the valid keyword and updates the source and dest vectors apporiately
        dest.push_back(*it);
        books_moved ++;
        source.erase(it);
      }
    }
  }
  // DO NOT ALTER BELOW HERE
  const auto t1_end = std::chrono::steady_clock::now();
  int t1 = std::chrono::duration <double, std::micro> (t1_end - t1_start).count();
  std::cout << "Moved " << books_moved << " books in " << t1 << " microseconds." << std::endl;
}