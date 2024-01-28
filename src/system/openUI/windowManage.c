#include<"openUI.h">

#define WINDOW_LIMIT 64

static struct screenApplication[WINDOW_LIMIT] windowBuffer;

struct frame renderFrame() {
  struct frame render = emptyFrame();
  for(int i = 0; i<windowCount; i++){
      renderWindow(windowBuffer[i],*render);
  }
  return render;
}


struct frameMap emptyFrameMap() {
  return eFrameMap; 
}
