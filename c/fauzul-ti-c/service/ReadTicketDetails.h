#ifndef READ_TICKET_DETAILS_H
#define READ_TICKET_DETAILS_H

void ReadTicketDetails(const Ticket& detail) {
  cout << "==== Ticket Details ==== \n";
  cout << "Name\t\t\t:\t" << detail.buyerName << "\n";
  cout << "Title\t\t\t:\t" << detail.title << "\n";
  cout << "Day of date\t\t:\t" << detail.date << "\n";
  cout << "Time\t\t\t:\t" << detail.time << "\n";
  cout << "Price\t\t\t:\tRp " << detail.price << " vc" << "\n";
  cout << "Total price\t\t:\tRp " << detail.price * detail.quantity << "\n";
}

#endif
