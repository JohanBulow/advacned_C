#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(void)
{
	uint16_t a = 0xeffa;
	uint32_t b = 0xeffabedc;

	printf("Original a: 0x%04x\n", a);
	printf("Original b: 0x%08x\n", b);

	// print mem layot
	printf("a: %x%x\n", *((uint8_t *)&a), *(((uint8_t *)&a) + 1));
	printf("b: %x%x%x%x\n", *((uint8_t *)&b), *(((uint8_t *)&b) + 1), *(((uint8_t *)&b) + 2), *(((uint8_t *)&b) + 3));

	a = htons(a);
	printf("After htons a: 0x%04x\n", a);
	printf("a: %x%x\n", *((uint8_t *)&a), *(((uint8_t *)&a) + 1));
	b = htonl(b);
	printf("After htonl b: 0x%08x\n", b);
	printf("b: %x%x%x%x\n", *((uint8_t *)&b), *(((uint8_t *)&b) + 1), *(((uint8_t *)&b) + 2), *(((uint8_t *)&b) + 3));

	return 0;
}
