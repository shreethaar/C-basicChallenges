// pointers and dynamic memory managements

// simple memory pool
#define POOL_SIZE 1024

typedef struct {
    unsigned char buffer[POOL_SIZE];
    size_t used;
} MemoryPool;

void* pool_alloc(MemoryPool *pool, size_t size) {
    // ensure alignment (simplified)
    size=(size+7) & ~7;

    if(pool->used+size>POOL_SIZE) {
        return NULL; // out of memory
    } 

    void *ptr = &pool->buffer[pool->used];
    pool->used+=size;
    return ptr;
}


int main() {
    MemoryPool pool = {0};
    int *numbers = pool_alloc(&pool,10*sizeof(int));
    if(numbers) {
        for(int i=0;i<10;i++) {
            numbers[i]=i*30;
        }
    }

    // no need to free individual allocations
    // reset the entire pool when done
    pool.used=0;
    return 0;

}
