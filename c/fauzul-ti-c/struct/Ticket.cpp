#include <string>

using namespace std;

struct Ticket{
  string buyerName,
    title,
    date,
    time;
  int quantity{},
    price{};
};