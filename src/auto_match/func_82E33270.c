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
extern int fn_82C2B580();
extern int fn_82C2BC00();
extern int fn_82F691F0();


undefined8 fn_82E33270(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  iVar1 = *param_1;
  uVar2 = fn_82C2BC00(iVar1);
  if (-1 < (int)uVar2) {
    uVar3 = fn_82C2B580(((longlong)(int)(uint)*(ushort *)(iVar1 + 0x22) *
                          (longlong)*(int *)(iVar1 + 0x100) & 0x3fffffffU) << 2);
    *(int *)(iVar1 + 0x13c) = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,((longlong)(int)(uint)*(ushort *)(iVar1 + 0x22) *
                            (longlong)*(int *)(iVar1 + 0x100) & 0x3fffffffU) << 2);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

