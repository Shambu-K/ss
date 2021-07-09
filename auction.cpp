#include <iostream>
#include "auction.h"
#include <stdlib.h>
#include <string>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;


Auction::Auction()
{
  //cout<<"Greetings one and all"<<'\n'<<"Let the auction begin";
}


void Auction::Manager()
{
    //manager begins the auction
    for(int i=1;i<= _seller_count;i++)
    {
        //cout<<"" Display your items and name your prices";
        //seller displays items one after another
        Seller();


    }
    
}

void Auction::Seller()
{
    string name;//seller name
    int count;//number of items seller brought in to sell
    double min_price[count];//variable contains minnimum price for each item the seller intends to sell
    double seller_earnings=0.00;
    for(int i=1;i<=count;i++)
    {
        seller_earnings = seller_earnings+Dealer(min_price[i]);
        

        
    }
    //seller_earnings eventually records the total earnings of the seller in the auction

}
double Auction::Dealer(double price)
{
    double threshold_price;//dealer/auction house handler sets the auction price
    int commission_percentage;//commission percentage agreed upon
    double auction_earnings=0.00;
    double result = BidProcess(threshold_price);
    if(result==threshold_price) {auction_earnings=0.00;return auction_earnings;}
    else {
        auction_earnings = (commission_percentage)*result;
        return (result-auction_earnings);}

    HouseEarnings(auction_earnings); //updating total house earnings   

}

void Auction::BidderDetails()
{
    //function where the name and budget of bidders can be coded for use in the methods
    /* an array could be formed for the names and budgets of each bidder,
     and used accordingly in each round of auction(in place of the private variable)*/
}


double Auction::BidProcess(double threshold_price)
{
    //let it go
    int margin;//percentage by which bid value goes up
    double current_price = threshold_price;
    double new_bid=current_price;
    int bid_holder = 0;
    bool result;
    
     
    for(int k=1;k<=_rounds;k++)
    {

    
    for(int i=0;i<_bidder_count;i++)
    {
        //dealing with each bidder individually
        if(current_price<=bidder_budget[i])
        {
             if(new_bid>=BidderTransaction(current_price)) 
             {
                 new_bid=current_price;
                 bid_holder=i;
             }    

        }
           

    }
    if(new_bid==current_price) break;
    
    else if(new_bid<((margin+100)*current_price/100)) current_price = ((margin+100)*current_price/100);
    else current_price = new_bid;
    }
    if(current_price==threshold_price) result =false;//bid was a failure
    else result=true;//bid was a success;
    if(result) bidder_budget[bid_holder] = bidder_budget[bid_holder]- new_bid;
    

    return current_price;


    
}

double Auction::BidderTransaction(double current_price)
{
    //Values change with bidder
    double upper_limit;
    bool decision;// decision if bidder is interested in purchasing the item
    
    if((current_price<upper_limit)&&(decision))
    {
        double bid;//new bid made by the bidder(could be coded to accept the value)
        return bid;
    }
    else return current_price;

    
}

    

void Auction::HouseEarnings(double a)
{
    double total_earnings = 0.00;
    total_earnings = total_earnings+a;//denotes the total earnings of the auction house


}


