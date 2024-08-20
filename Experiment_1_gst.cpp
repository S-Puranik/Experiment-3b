#include<iostream>
using namespace std;

int main(){

    /* Input = Amount to be taxed as per the GST rate.
       Output = The amount of GST applied on the amount, price before GST and price after GST.
    */

    float amt, gst, after_gst, total, temp;


    cout<< "Enter the amount to be taxed: ";
    cin >> amt;
    cout<< "Enter the applicable GST rate: ";
    cin >> gst;

    if(gst < 0 || gst > 28){
        cout << "Enter the GST rate between 0 and 28 and try again.";
        return 0;
    }

    temp = gst/100;
    after_gst = amt*temp;
    total = amt + after_gst;

    cout<< "\nAmount of GST applied: " << after_gst;
    cout<< "\nTotal amount before GST: " << amt;
    cout<< "\nTotal amount after GST: " << total;

    return 0;
    
}
