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
extern unsigned int lbl_8323B46C;


void fn_82CEFA10(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = lbl_8323B46C;
  if (*param_1 != -0x2f) {
    RtlEnterCriticalSection(lbl_8323B46C);
    sVar1 = *(short *)(param_1 + 1);
    *(ushort *)((int)param_1 + 6) = *(ushort *)((int)param_1 + 6) >> 1;
    *(short *)(param_1 + 1) = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      *param_1 = -0xf;
    }
    RtlLeaveCriticalSection(uVar2);
  }
  return;
}

