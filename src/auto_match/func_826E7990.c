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


undefined8 fn_826E7990(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,1);
      *(undefined4 *)(param_1 + 0x34) = uVar2;
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x2c);
  if (uVar4 < *(uint *)(param_1 + 0x30)) {
    fn_82F63CA0((ulonglong)*(uint *)(param_1 + 0x3c),*(uint *)(param_1 + 0x3c) + uVar4,
                 *(uint *)(param_1 + 0x30) - uVar4);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (piVar1 != (int *)0x0) {
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x40) - (ulonglong)*(uint *)(param_1 + 0x30);
    iVar3 = (**(code **)(*piVar1 + 0x28))
                      (piVar1,(ulonglong)*(uint *)(param_1 + 0x3c) +
                              (ulonglong)*(uint *)(param_1 + 0x30),lVar5);
    if (iVar3 < (int)lVar5) {
      if (0 < iVar3) {
        *(int *)(param_1 + 0x30) = iVar3 + *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar3;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0((ulonglong)*(uint *)(param_1 + 0x3c) + (ulonglong)*(uint *)(param_1 + 0x30),0,
                   (ulonglong)*(uint *)(param_1 + 0x40) - (ulonglong)*(uint *)(param_1 + 0x30));
    }
    *(int *)(param_1 + 0x30) = iVar3 + *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar3;
    return 1;
  }
  *(int *)(param_1 + 0x3c) = param_1 + 0x44;
  *(undefined4 *)(param_1 + 0x40) = 0x200;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x44,0,0x200);
}

