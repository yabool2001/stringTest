#include "mbed.h"
#include <string>

// SERIAL PINS
static BufferedSerial dbg ( PA_9 , NC , 115200 ) ;

// main() runs in its own thread in the OS
int main ()
{
    //DBG configuration
    dbg.set_format ( 8 , BufferedSerial::None , 1 ) ;

    std::string string_1 ( "String1 " ) ;
    std::string string_2 ( "string2" ) ;
    
    dbg.write ( "\r\nstring_1 before merging: " , sizeof ( "\r\nstring_1 before merging: " ) ) ;
    dbg.write ( &string_1 , sizeof ( string_1 ) ) ;
    
    string_1 += string_2 ;
    //string_1.append (string_2 ) ;
    dbg.write ( "\r\nstring_1 after merging: " , sizeof ( "\r\nstring_1 after merging: " ) ) ;
    dbg.write ( &string_1 , sizeof ( string_1 ) ) ;
}

