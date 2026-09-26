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


ulonglong fn_82B47730(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_1 + 0x32c;
  uVar2 = param_2 + 3U & 0xfffffffc;
  if (uVar2 < 0x85) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x3bc);
    if (((*(uint *)(param_1 + 0x3b8) - uVar4) + 0x1000 & 0xffffffff) < uVar2) {
      iVar3 = (int)(((uVar2 >> 2) - 1 & 0xffffffff) << 2);
      puVar1 = *(undefined4 **)(iVar3 + iVar5);
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar3 + iVar5) = *puVar1;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar1,0,uVar2);
      }
      uVar4 = fn_82ABDF50(iVar5);
    }
    else {
      *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) + (int)uVar2;
    }
  }
  else {
    uVar4 = fn_82ABE8C8(iVar5);
  }
  return uVar4;
}

