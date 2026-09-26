typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
#define TBLr 0
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_829D2450(int param_1,int *param_2)

{
  int aiStack_30 [4];
  undefined8 uStack_20;
  undefined4 uStack_18;
  int *piStack_14;
  
  aiStack_30[1] = 0xab0;
  aiStack_30[2] = 0x2dff;
  uStack_20 = TBLr;
  if (*param_2 == 0) {
    uStack_18 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uStack_18 = 0xffffffff;
  }
  aiStack_30[0] = param_1;
  piStack_14 = param_2;
  XamXStudioRequest(0x1402,aiStack_30);
  return;
}

