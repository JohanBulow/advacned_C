#include <stdio.h>
#include <stdint.h>

struct foo
{
	uint8_t a;
	// padding
	uint32_t b;
	// padding
	uint16_t c;
} __attribute__((packed)); // compiler specific, no padding will be added.

struct foo2
{
	uint32_t b;
	uint8_t a;
	// padding
	uint16_t c;
};

// wasting bytes for alignment ()
int main(void)
{
	struct foo f = {
		.a = 0x11,
		.b = 0x222,
		.c = 0x33333333,
	};
	printf("Size of struct Foo: %zu\n", sizeof(f));
	uint8_t *f_as_bytes = (uint8_t *)&f;
	for (size_t i = 0; i < sizeof(f); i++)
		printf("%x ", f_as_bytes[i]);
	return 0;
}
