#include <cstdint>

const unsigned int REG_COUNT = 16;
const unsigned int MEMORY_SIZE = 4096;
const unsigned int STACK_LEVELS = 16;
const unsigned int INPUT_KEYS = 16;
const unsigned int WIDTH = 64;
const unsigned int HEIGHT = 32;


class Chip8
{
    public:

    uint8_t keyboard[INPUT_KEYS]{};
    uint32_t window[WIDTH * HEIGHT]{};

    

    private:
    uint8_t registers[REG_COUNT]{};
    uint8_t memory[MEMORY_SIZE]{};
    uint16_t indexRegister{};
    uint16_t pc{};
    uint16_t stack[STACK_LEVELS]{};
    uint8_t sp{};
    uint8_t timer{};
    uint8_t soundTimer{};
    uint16_t opcode;


}