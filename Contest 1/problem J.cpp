#include <iostream>
#include <vector>
#include <map>
#include<bits/stdc++.h>


using namespace std;

/*
Valera's lifelong ambition was to be a photographer, so he bought a new camera. Every day he got more and more clients asking for photos, and one day Valera needed a program that would determine the maximum number of people he can serve.

The camera's memory is d megabytes. Valera's camera can take photos of high and low quality. One low quality photo takes a megabytes of memory, one high quality photo take b megabytes of memory. For unknown reasons, each client asks him to make several low quality photos and several high quality photos. More formally, the i-th client asks to make x i low quality photos and y i high quality photos.

Valera wants to serve as many clients per day as possible, provided that they will be pleased with his work. To please the i-th client, Valera needs to give him everything he wants, that is, to make x i low quality photos and y i high quality photos. To make one low quality photo, the camera must have at least a megabytes of free memory space. Similarly, to make one high quality photo, the camera must have at least b megabytes of free memory space. Initially the camera's memory is empty. Valera also does not delete photos from the camera so that the camera's memory gradually fills up.

Calculate the maximum number of clients Valera can successfully serve and print the numbers of these clients.

Input
The first line contains two integers n and d (1 ≤ n ≤ 105, 1 ≤ d ≤ 109) — the number of clients and the camera memory size, correspondingly. The second line contains two integers a and b (1 ≤ a ≤ b ≤ 104) — the size of one low quality photo and of one high quality photo, correspondingly.

Next n lines describe the clients. The i-th line contains two integers x i and y i (0 ≤ x i, y i ≤ 105) — the number of low quality photos and high quality photos the i-th client wants, correspondingly.

All numbers on all lines are separated by single spaces.

Output
On the first line print the answer to the problem — the maximum number of clients that Valera can successfully serve. Print on the second line the numbers of the client in any order. All numbers must be distinct. If there are multiple answers, print any of them. The clients are numbered starting with 1 in the order in which they are defined in the input data.
*/

int main () {
    long long n,d;
    long long a, b;
    vector<long long> client;
    cin >> n >> d >> a >> b;
    vector< pair <long long,long long> > persona (n); 

    

    for (long long i = 0;i<n;i++){
        long long x,y;
        cin >> x >> y;
        persona[i] = {x * a + y * b, i+1};
    }

    sort(persona.begin(),persona.end());

    for(int i= 0; i< persona.size(); i++)
    {
        if (d - persona[i].first >= 0){
            d -= persona[i].first;
            client.push_back(persona[i].second);

        }
        else if(persona[i].second == 0) break;
    }
    cout << client.size() << endl;
    
    for (auto i = 0;i < client.size();i++){
        cout << client[i] << " ";
    }
}