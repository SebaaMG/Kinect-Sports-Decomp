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
extern int fn_82F63CA0();
extern int fn_82F691F0();


ulonglong fn_826E7A08(int param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar2;
  longlong lVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x2c);
  if (uVar3 < *(uint *)(param_1 + 0x30)) {
    uVar4 = *(uint *)(param_1 + 0x30) - uVar3;
    if ((param_3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
      uVar4 = param_3;
    }
    fn_82F63CA0(param_2,*(uint *)(param_1 + 0x3c) + uVar3,uVar4);
    param_3 = param_3 - uVar4;
    param_2 = uVar4 + param_2;
    *(int *)(param_1 + 0x2c) = (int)uVar4 + *(int *)(param_1 + 0x2c);
  }
  if (*(uint *)(param_1 + 0x30) <= *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_3 & 0xffffffff) != 0) {
    lVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x28))
                      (*(int **)(param_1 + 0x10),param_2,param_3);
    uVar4 = lVar1 + uVar4;
    *(int *)(param_1 + 0x34) = (int)lVar1 + *(int *)(param_1 + 0x34);
    if ((int)lVar1 < (int)param_3) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar1 + param_2,0,param_3 - lVar1);
    }
  }
  return uVar4;
}

