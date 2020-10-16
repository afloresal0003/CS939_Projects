// Prototypes/ Headers of all member variables and
// structure functions that are declared 
struct CorpData 

{
    //Initializes all variables that are used to hold
    //a division's information 
    string _divName;
    double _sales1;
    double _sales2;
    double _sales3;
    double _sales4;
    
    CorpData(string divName, double sales1, double sales2, double sales3, double sales4);
    
    double calcTotal() const ;

    
    double calcAverage() const;
    
};