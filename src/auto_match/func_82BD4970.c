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
extern int fn_82BD7170();


longlong fn_82BD4970(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 0xf0);
  piVar1 = (int *)(param_1 + 0x50);
  lVar3 = 4;
  do {
    if (*(int *)(*piVar1 + 4) == 0) {
      uVar2 = uVar2 + 1;
    }
    piVar1 = piVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(uint *)(param_1 + 0xc) < uVar2) {
    lVar3 = -0x7fffbffb;
  }
  else {
    lVar3 = fn_82BD7170(*(undefined4 *)((param_2 + 0x14) * 4 + param_1),param_2);
    if (-1 < lVar3) {
      *(undefined4 *)(param_1 + 0x11c) = 1;
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return lVar3;
}

