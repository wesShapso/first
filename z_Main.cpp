#include <cstdio>

// first change for git
struct Bla
{
	int m_a;
	int m_magicNumber;
};

struct Mla
{
	int m_id;
	int m_s;
};

// this can cause Segmentation fault if pointer to forbbiden address:
// 
#define IS_VALID(pointerinyo)		((pointerinyo) != NULL) && ((pointerinyo)->m_magicNumber == 0xFF) 



int main()
{
	
	Bla* p = (Bla*)0x400000;
	if (IS_VALID(p)) printf("Valid p\n");
	
	printf("next: \n");
	
	// int* pp = (int*)0x400000;
	// if (IS_VALID(pp)) printf("Valid pp\n");
	
	Mla* p3 = (Mla*)0x400000;
	if (IS_VALID(p3)) printf("Valid p\n");
	
	return 0;
}
