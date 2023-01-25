#ifndef CREATE_TICKET_H
#define CREATE_TICKET_H

#include "./ReadMovieDetails.h"
#include "./ReadTicketDetails.h"

void CreateTicket(const Movie& detail) {
  int movieTimeNumber, quantity;

  ReadMovieDetails(detail);

  cout << "Select time (1 - " << detail.time.size() << ") : ";
  cin >> movieTimeNumber;

  cout << "Quantity : ";
  cin >> quantity;


  ticket.time = detail.time[movieTimeNumber - 1];
  ticket.quantity = quantity;
  ticket.title = detail.title;
  ticket.price = detail.price;

  ReadTicketDetails(ticket);
}

#endif
