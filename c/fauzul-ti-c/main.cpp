#include <iostream>

#include "./data/tickets.cpp"
#include "./data/movies.cpp"
#include "./data/seats.cpp"

#include "./service/CreateTicket.h"
#include "./service/ReadSeats.h"

using namespace std;


int main() {
  int movieNumber;
  string buyerName, date;

  ReadSeats();

  cout << "================ Welcome to Cinema ================ \n \n";

  cout << "Enter a name : ";
  getline(cin, buyerName);

  cout << "Enter the date (e.g = Mon, 1--Jan) : ";
  getline(cin, date);

  ticket.buyerName = buyerName;
  ticket.date = date;

  cout << "\n==== Movie List ==== \n";

  for (int i = 0; i < movies.size(); i++) {
    cout << i + 1 << ". " << movies[i].title << "\n";
  }

  if (!buyerName.empty() && !date.empty()) {
    cout << "\nSelect a movie (1 - " << movies.size() << ") : "; cin >> movieNumber;

    if (movieNumber > 0 && movieNumber <= movies.size()) {
      CreateTicket(movies[movieNumber - 1]);
    } else {
      cout << "No movie options!";
    }
  } else {
    cout << "Please fill in the " << (buyerName.empty() && date.empty() ? "name & time watching" : buyerName.empty() ? "name" : "time watching") << " correctly!";
  }
}