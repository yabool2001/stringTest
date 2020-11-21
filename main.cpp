#include "mbed.h"
#include <string>

// SERIAL PINS
static BufferedSerial dbg ( PA_9 , NC , 115200 ) ;

/* Passing string sandbox*/

void parse_string ( const std::string& ) ;

/* Passing string sandbox*/

// main() runs in its own thread in the OS
int main ()
{
    //DBG configuration
    dbg.set_format ( 8 , BufferedSerial::None , 1 ) ;

/* Passing string sandbox*/


/* Passing string sandbox*/


/***** String merging

    std::string string_1 ( "String1 " ) ;
    std::string string_2 ( "string2" ) ;
    
    dbg.write ( "\r\nstring_1 before merging: " , sizeof ( "\r\nstring_1 before merging: " ) ) ;
    dbg.write ( &string_1 , sizeof ( string_1 ) ) ;
    
    string_1 += string_2 ;
    //string_1.append (string_2 ) ;
    dbg.write ( "\r\nstring_1 after merging: " , sizeof ( "\r\nstring_1 after merging: " ) ) ;
    dbg.write ( string_1.c_str() , string_1.length() ) ;
    
    char c = 'T' ;
    string_1.push_back (c) ;
    dbg.write ( "\r\nstring_1 after push: " , sizeof ( "\r\nstring_1 after push: " ) ) ;
    dbg.write ( &string_1 , sizeof ( string_1 ) ) ;

String merging *****/

}

/* Passing string sandbox*/

void parse_string ( const std::string& s )
{
    
}

/* Passing string sandbox*/