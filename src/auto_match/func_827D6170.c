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
extern int fn_827D98C0();
extern int iRam00000000;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


/* WARNING: Removing unreachable block (ram,0x827d6220) */

void fn_827D6170(int param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uStack0000001c;
  undefined1 auStack_50 [80];
  
  uStack0000001c = param_2;
  RtlEnterCriticalSection(param_1 + 0x6c);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x44);
  if (uVar2 != *(uint *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_50,uVar2);
      if ((param_3 == -1) || (iVar1 = fn_827D98C0(0), param_3 == iVar1)) {
        (**(code **)(iRam00000000 + 0x1c))(0,&stack0x0000001c,param_4);
      }
      uVar2 = uVar2 + 8;
    } while ((uVar2 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return;
}

