// Advanced15 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    double individualMemberships = 0.0;
    double dualMemberships = 0.0;
    double familyMemberships = 0.0;

    double totalMembershipsRevenue = 0.0;
    double individualMembershipsRevenue = 0.0;
    double dualMembershipsRevenue = 0.0;
    double familyMembershipsRevenue = 0.0;



    cout << "Individual memberships sold: " ;
    cin >> individualMemberships;

    cout << "Dual memberships sold: " ;
    cin >> dualMemberships;

    cout << "Family memberships sold: " ;
    cin >> familyMemberships;
    individualMembershipsRevenue = individualMemberships * 99;
    dualMembershipsRevenue = dualMemberships * 175;
    familyMembershipsRevenue = familyMemberships * 225;
    totalMembershipsRevenue = individualMembershipsRevenue + dualMembershipsRevenue + familyMembershipsRevenue;
    cout << "Total year membership revenue: $" << totalMembershipsRevenue << endl ;

        cout << "Individual membership year revenue: $" << individualMembershipsRevenue  << endl ;

        cout << "Dual membership year revenue: $" << dualMembershipsRevenue  << endl ;

        cout << "Family membership year revenue: $" << familyMembershipsRevenue  << endl ;

}