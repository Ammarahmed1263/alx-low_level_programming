#include "main.h"

/**
 * get_endianness - check system arch.
 *
 * Description: bytes order is stored according to
 * system architecture so value of 1 will be stored
 * either on left most bits "first 1 bytes" in big -
 * end or on right most bits for little-end
 * and casting will take only only left part of address
 * which in case of big-end will be most significant byte
 * while in case of little-end will be least significant byte
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	uint16_t value = 1;

	return (*(uint8_t *)&value);
}
