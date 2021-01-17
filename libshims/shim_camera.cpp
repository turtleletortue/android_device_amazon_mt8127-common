#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
#include <utils/Log.h>
#include <hardware/power.h>
#include <hardware/hardware.h>


#include <ui/GraphicBuffer.h>
#include <string>

using namespace android;

extern "C" void _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(
    uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage,
    std::string requestorName);

extern "C" void _ZN7android13GraphicBufferC1Ejjij(
    uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage) {
  std::string requestorName = "<Unknown>";
  _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(
      inWidth, inHeight, inFormat, inUsage, requestorName);
}


extern "C" void* _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(
	buffer_handle_t handle, uint32_t usage, const Rect& bounds, void** vaddr);

extern "C" void* _ZN7android19GraphicBufferMapper4lockEPK13native_handleiRKNS_4RectEPPv(
	buffer_handle_t handle, int32_t usage, const Rect& bounds, void** vaddr) {
	return _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(
		handle, static_cast<uint32_t>(usage), bounds, vaddr);
}

extern "C" void _ZN7android7String8C1EPKc(void **str8P, const char *str);

extern "C" void _ZN7android13SensorManagerC1Ev(void *sensorMgr)
{

}

extern "C" void _ZN7android13SensorManager16createEventQueueEv(void **retVal, void *sensorMgr)
{
    
}

extern "C" pthread_mutex_t _ZN7android9SingletonINS_13SensorManagerEE5sLockE = PTHREAD_MUTEX_INITIALIZER;
extern "C" void* _ZN7android9SingletonINS_13SensorManagerEE9sInstanceE = NULL;


