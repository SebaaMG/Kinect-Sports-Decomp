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


/* WARNING: Removing unreachable block (ram,0x827d6770) */

undefined8 fn_827D66D0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_50 [80];
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 0x6c);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x44);
  if (uVar3 != *(uint *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_50,uVar3);
      iVar1 = (**(code **)(iRam00000000 + 0x60))(0,param_2,param_3);
      if (iVar1 != 0) {
        uVar2 = 1;
        break;
      }
      uVar3 = uVar3 + 8;
    } while ((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return uVar2;
}

