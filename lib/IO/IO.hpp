/*  Autor:RecursiveError
biblioteca com as funções basicas de perifericos E operações para manipulação de bits
*/

#ifndef _IO_HPP
#define _IO_HPP

#include <stdint.h>
namespace digitalIO{
    class DigitalIO{
        public:
        DigitalIO() = default;
        DigitalIO(uint8_t pin) : _pin{pin}
        {}
        DigitalIO& output(void);
        DigitalIO& input(void);
        DigitalIO& input_pullup(void);
        DigitalIO& set_high(void);
        DigitalIO& set_low(void);
        DigitalIO& toggle(void);
        bool read(void);
        private:
        uint8_t _pin{0};  
    };
}

#endif