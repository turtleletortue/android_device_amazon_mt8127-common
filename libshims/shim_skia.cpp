#include <SkBitmap.h>

extern "C"
{
    extern bool _ZN8SkBitmap14tryAllocPixelsEPNS_9AllocatorEP12SkColorTable(SkBitmap::Allocator* allocator, SkColorTable* ctable);
    bool _ZN8SkBitmap11allocPixelsEPNS_9AllocatorEP12SkColorTable(SkBitmap::Allocator* allocator, SkColorTable* ctable) {
        return _ZN8SkBitmap14tryAllocPixelsEPNS_9AllocatorEP12SkColorTable(allocator, ctable);
    }
}