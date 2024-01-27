#include<"openUI.h">

#define WINDOW_LIMIT 64

static struct screenApplication[WINDOW_LIMIT] windowBuffer;

struct frame renderFrame() {
  struct frameMap = emptyFrameMap();
  for(int i = 0; i<windowCount; i++){
      renderWindow(windowBuffer[i],*frameMap);
  }
  return frameMap.frame;
}


struct frameMap emptyFrameMap() {
  return eFrameMap; 
}
