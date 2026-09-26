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
extern int fn_82EE1048();
extern int fn_82F6ADA8();


ulonglong fn_82EE1998(int param_1,short param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint auStack_50 [20];
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x254) != 0) {
    uVar3 = 0;
    do {
      uVar1 = fn_82EE1048(param_1 + 0x48,uVar3,auStack_50);
      uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_50[0];
      if (uVar1 == 0) {
        return 0xffffffffc00d36bb;
      }
      iVar2 = (int)uVar1;
    } while (((param_2 != *(short *)(iVar2 + 2)) ||
             (iVar2 = fn_82F6ADA8(param_3,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) &&
            (uVar3 = uVar3 + 1 & 0xffff, uVar3 < *(uint *)(param_1 + 0x254)));
  }
  return (ulonglong)(*(uint *)(param_1 + 0x254) <= uVar3);
}

