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
extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827d6130) */

void fn_827D60A0(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_50 [80];
  
  RtlEnterCriticalSection(param_1 + 0x6c);
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x44);
  if (uVar1 != *(uint *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_50,uVar1);
      (**(code **)(iRam00000000 + 0x18))(0,param_2,param_3);
      uVar1 = uVar1 + 8;
    } while ((uVar1 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return;
}

