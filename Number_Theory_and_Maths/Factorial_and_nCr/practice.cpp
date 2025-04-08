// #include<bits/stdc++.h>
// using namespace std;
// int nCr(int n, int r){
//     if(r>n) return 0;
//     if(r==0 || r==n) return 1;
//     return nCr(n-1,r-1) + nCr(n-1,r);
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         for(int i=0;i<n;i++){
//             int x;
//             cin>>x;
//         }
//         cout<<nCr(10-n,2) * nCr(4,2)<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long x,y,n;
//         cin>>x>>y>>n;
//         cout<<y;
//     }
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

#define CRC16 0x8005 // CRC-16 polynomial (0x8005 for USB, 0x1021 for CCITT)

unsigned short computeCRC16(const string &data) {
    unsigned short crc = 0xFFFF; // Initial CRC value
    for (char ch : data) {
        crc ^= (unsigned short)(ch << 8);
        for (int i = 0; i < 8; i++) {
            if (crc & 0x8000) { // If MSB is 1
                crc = (crc << 1) ^ CRC16;
            } else {
                crc <<= 1;
            }
        }
    }
    return crc;
}

int main() {
    string inputData;
    
    // Taking input from user
    cout << "Enter the data to send: ";
    cin >> inputData;

    // Compute CRC-16 checksum
    unsigned short crc = computeCRC16(inputData);
    cout << "Computed CRC-16 Checksum: " << hex << crc << endl;

    // Simulating data transmission (Appending CRC to data)
    string transmittedData = inputData + char(crc >> 8) + char(crc & 0xFF);

    // Receiver computes CRC again to check for errors
    unsigned short receivedCRC = computeCRC16(transmittedData);
    if (receivedCRC == 0) {
        cout << "No errors detected in transmission!" << endl;
    } else {
        cout << "Error detected in transmission!" << endl;
    }

    return 0;
}
