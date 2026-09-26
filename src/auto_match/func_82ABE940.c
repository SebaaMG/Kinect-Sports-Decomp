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
extern int fn_82ABDF50();
extern int fn_82ABE8C8();
extern int fn_82F691F0();


ulonglong fn_82ABE940(uint param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 & 0xfffff000);
  if ((param_2 & 0xffffffff) < 0x85) {
    uVar4 = (ulonglong)*(uint *)(iVar1 + 0x90);
    if (((*(uint *)(iVar1 + 0x8c) - uVar4) + 0x1000 & 0xffffffff) < (param_2 & 0xffffffff)) {
      iVar3 = (int)((((param_2 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
      puVar2 = *(undefined4 **)(iVar3 + iVar1);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar3 + iVar1) = *puVar2;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar2,0,param_2);
      }
      uVar4 = fn_82ABDF50(iVar1);
    }
    else {
      *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) + (int)param_2;
    }
  }
  else {
    uVar4 = fn_82ABE8C8(iVar1);
  }
  return uVar4;
}

