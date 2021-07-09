#ifndef AUCTION_H
#define AUCTION_H
#include <string>
using namespace std;


class Auction
{
    public:
     Auction();
     void start();
     void Seller();
     void Manager();
     void itemDetails();
     double Dealer(double price);
     void BidderDetails();
     void bidderLimit();
     double BidProcess(double threshold_price);
     double BidderTransaction(double current_price);
     void HouseEarnings(double a);
     




    private:
      int _seller_count; //assuming the following variables are predefined
      int _bidder_count;
    
      double bidder_budget[100];
      string bidder_name[100];
    
      int _rounds;//maximum number of rounds for any auction
      
    
      
      


};





#endif