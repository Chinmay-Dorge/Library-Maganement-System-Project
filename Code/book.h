#ifndef _Book
#define _Book
#include <string>
using std::string;
namespace b
{
   class book
   {
   protected:
      int bookId;
      string author;
      string title;
      int price;
      bool availability;

   public:
      book();
      book(book &bo);
      virtual void inputDetails();
      virtual void displayDetails();
      void updateStatus();
      string get_book_name();
      int retBookId();
      bool retavlblty();
   };
}
#endif