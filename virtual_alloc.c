#include "virtual_alloc.h"
#include "virtual_sbrk.h"

void init_allocator(void * heapstart, uint8_t initial_size, uint8_t min_size) {
    // Your code here
}

void * virtual_malloc(void * heapstart, uint32_t size) {
    // Your code here
    return NULL;
}

int virtual_free(void * heapstart, void * ptr) {
    // Your code here
    return 1;
}

void * virtual_realloc(void * heapstart, void * ptr, uint32_t size) {
    // Your code here
    return NULL;
}

void virtual_info(void * heapstart) {
    // Your code here
}
