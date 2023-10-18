#include <stdlib.h>

#if defined(__cplusplus)
extern "C" {
#endif

static void printLong(const unsigned long l) {
	int i;
    printf("%016lx ", l);
}

typedef uint64_t bignum25519[5];
static void printBig(const char* txt, bignum25519 v) {
	int i;
    printf("%s ", txt); printf("%016llx ", v[0]); printf("%016llx ", v[1]);printf("%016llx ", v[2]);printf("%016llx ", v[3]);printf("%016llx ", v[4]);printf("\n");
}

static void print64t(const char* txt, uint64_t v) {
	int i;
    printf("%s ", txt); printf("%016llx", v); printf("\n");
}

static void print32(const char* txt, const unsigned char* a) {
	int i;
    printf("%s ", txt); for (i = 0; i < 32; i++) printf("%02x,", a[i]); printf("\n");
}

static void print64(const char* txt, const unsigned char* a) {
	int i;
    printf("%s ", txt); for (i = 0; i < 64; i++) printf("%02x", a[i]); printf("\n");
}

static void print96(const char* txt, const unsigned char* a) {
	int i;
    printf("%s ", txt); for (i = 0; i < 96; i++) printf("%02x", a[i]); printf("\n");
}

static void print128(const char* txt, __uint128_t a) {
    uint64_t h = a >> 64;
    uint64_t l = (uint64_t) a;
	int i;
    printf("%s ", txt); printf("%016llx %016llx\n", h, l);
}

#if defined(__cplusplus)
}
#endif
