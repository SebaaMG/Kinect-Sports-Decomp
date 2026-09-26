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
extern unsigned int iStack00000018;


int * fn_83016E90(int param_1,ulonglong param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iStack00000018;
  
  piVar1 = *(int **)((param_3 + 1) * 4 + param_1);
  if (piVar1 != (int *)0x0) {
    iStack00000018 = (int)(param_2 >> 0x20);
    do {
      if ((piVar1[1] != iStack00000018) ||
         (bVar2 = true, (ulonglong)(uint)piVar1[2] != (param_2 & 0xffffffff))) {
        bVar2 = false;
      }
      if (bVar2) {
        return piVar1 + 3;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return (int *)0x0;
}

