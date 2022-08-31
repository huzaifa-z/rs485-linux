#include <iostream>
#include <string>
#include <unistd.h>
#include "SerialPort.hpp"
//#include <wiringPi.h>

using namespace mn::CppLinuxSerial;
using namespace std;
std::vector<uint8_t> relay_on;
std::vector<uint8_t> relay_off;

void on_relay_1(){

    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(0);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(140);
    relay_on.push_back(58);


}
void on_relay_2(){
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(1);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(221);
    relay_on.push_back(250);
}

void on_relay_3(){
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(2);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(45);
    relay_on.push_back(250);
}

void on_relay_4(){
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(3);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(124);
    relay_on.push_back(58);
}
void on_relay_5(){
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(4);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(205);
    relay_on.push_back(251);
}
void on_relay_6(){
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(5);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(156);
    relay_on.push_back(59);
}

void on_relay_7(){
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(6);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(108);
    relay_on.push_back(59);
}

void on_relay_8(){
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(2);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(61);
    relay_on.push_back(251);
}




std::vector<uint8_t> onRealy(int number ,bool status_relay)
{


if(status_relay)
{
    int relay_number=number;
    switch  (relay_number)
    {
    
case 1:
 
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(0);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(140);
    relay_on.push_back(58);
    return relay_on;
    break;
case 2:
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(1);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(221);
    relay_on.push_back(250);
    return relay_on;
    break;
    
case 3:
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(2);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(45);
    relay_on.push_back(250);
    return relay_on;
    break;
case 4:
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(3);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(124);
    relay_on.push_back(58);
    return relay_on;
    break;
case 5:
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(4);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(205);
    relay_on.push_back(251);
    return relay_on;
    break;
case 6:
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(5);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(156);
    relay_on.push_back(59);
    return relay_on;
    break;
case 7:
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(6);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(108);
    relay_on.push_back(59);
    return relay_on;
    break;
case 8:
    relay_on.push_back(1);
    relay_on.push_back(5);
    relay_on.push_back(0);
    relay_on.push_back(2);
    relay_on.push_back(255);
    relay_on.push_back(0);
    relay_on.push_back(61);
    relay_on.push_back(251);
    return relay_on;
    break;
    }
    return relay_on;
}


//-------------turn of relay-------------------------
if(!status_relay)
{
    int relay_number=number;
switch(relay_number){

case 1:
 
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(205);
    relay_off.push_back(202);
    return relay_off;
    break;
case 2:
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(1);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(156);
    relay_off.push_back(10);
    return relay_off;
    break;
    
case 3:
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(2);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(108);
    relay_off.push_back(10);
    return relay_off;
    break;
case 4:
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(3);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(61);
    relay_off.push_back(202);
    return relay_off;
    break;
case 5:
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(4);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(140);
    relay_off.push_back(11);
    return relay_off;
    break;
case 6:
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(221);
    relay_off.push_back(203);
    return relay_off;
    break;
case 7:
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(6);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(45);
    relay_off.push_back(203);
    return relay_off;
    break;
case 8:
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(2);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(124);
    relay_off.push_back(11);
    return relay_off;
    break;
    
}
return relay_off;

}
}


void off_relay_1()
{
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(205);
    relay_off.push_back(202);
}

void off_relay_2()
{
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(1);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(156);
    relay_off.push_back(10);
}

void off_relay_3()
{
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(2);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(108);
    relay_off.push_back(10);
}

void off_relay_4()
{
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(3);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(61);
    relay_off.push_back(202);
}

void off_relay_5()
{
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(4);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(140);
    relay_off.push_back(11);
}

void off_relay_6()
{
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(221);
    relay_off.push_back(203);
}

void off_relay_7()
{
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(6);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(45);
    relay_off.push_back(203);
}

void off_relay_8()
{
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(2);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(124);
    relay_off.push_back(11);
}
int main() {
    std::cout<<"chl raha ha "<<std::endl;
    int8_t buffer_s =01;
    std::vector<uint8_t> data;
    data.push_back(1);
    data.push_back(129);
    data.push_back(3);
    data.push_back(0);
    data.push_back(81);
    //std::vector<uint8_t> relay_on;
    //std::vector<uint8_t> relay_off;
    relay_off.push_back(1);
    relay_off.push_back(5);
    relay_off.push_back(0);
    relay_off.push_back(1);
    relay_off.push_back(0);
    relay_off.push_back(0);
    relay_off.push_back(156);
    relay_off.push_back(10);
    
	// Create serial port object and open serial port
    SerialPort serialPort("/dev/ttyUSB0", BaudRate::B_115200, NumDataBits::EIGHT, Parity::NONE, NumStopBits::ONE);
	// SerialPort serialPort("/dev/ttyACM0", 13000);
    serialPort.SetTimeout(-1); // Block when reading until any data is received
	serialPort.Open();

	// Write some ASCII datae
	// serialPort0.Write("Hello");

	// Read some data back
	string data_string="01 05 00 00 cd bc";
    while(1) {
        int number_of_realy=0 ;
        bool status_tf=false;
        cin>>number_of_realy;
        cin>>status_tf;
        serialPort.WriteBinary(data);
        relay_on.clear();
        usleep(100000);
        on_relay_1();
        serialPort.WriteBinary(relay_on);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        usleep(100000);
        relay_on.clear();
        on_relay_2();
        serialPort.WriteBinary(relay_on);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        usleep(100000);
        relay_on.clear();
        on_relay_3();
        serialPort.WriteBinary(relay_on);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        usleep(100000);
        relay_on.clear();
        on_relay_4();
        serialPort.WriteBinary(relay_on);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        usleep(100000);
        relay_on.clear();
        on_relay_5();
        serialPort.WriteBinary(relay_on);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        usleep(100000);
        relay_on.clear();
        on_relay_6();
        serialPort.WriteBinary(relay_on);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        usleep(100000);
        relay_on.clear();
        on_relay_7();
        serialPort.WriteBinary(relay_on);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        usleep(100000);
        relay_on.clear();
        on_relay_8();
        serialPort.WriteBinary(relay_on);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        usleep(100000);
        relay_off.clear();
        off_relay_1();
        serialPort.WriteBinary(relay_off);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        usleep(100000);
        relay_off.clear();
        off_relay_2();
        serialPort.WriteBinary(relay_off);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        usleep(100000);
        relay_off.clear();
        off_relay_3();
        serialPort.WriteBinary(relay_off);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        usleep(100000);
        relay_off.clear();
        off_relay_4();
        serialPort.WriteBinary(relay_off);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        usleep(100000);
        relay_off.clear();
        off_relay_5();
        serialPort.WriteBinary(relay_off);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        usleep(100000);
        relay_off.clear();
        off_relay_6();
        serialPort.WriteBinary(relay_off);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        usleep(100000);
        relay_off.clear();
        off_relay_7();
        serialPort.WriteBinary(relay_off);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        usleep(100000);
        relay_off.clear();
        off_relay_8();
        serialPort.WriteBinary(relay_off);
        std::cout << "device on bitsend data: " <<std::endl;
        serialPort.WriteBinary(data);
        
        
        
        
    }

	// Close the serial port
	serialPort.Close();
}












