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
extern int fn_8233D980();
extern int fn_82344720();
extern int fn_82348D60();
extern int fn_8288B760();


void fn_82344278(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar4;
  longlong lVar3;
  
  fn_82348D60();
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc) + 0x174);
  if ((*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) != -1) &&
     (iVar1 = *(int *)(iVar1 + 0x5c),
     *(int *)(*(int *)(iVar1 + 0x1d4) * 4 + *(int *)(iVar1 + 0x1c4)) != 0)) {
    iVar1 = (*(int **)(param_1 + 0xc))[1];
    if (iVar1 == 2) {
      if (*(int *)(**(int **)(param_1 + 0xc) + 0x24) == 0) {
        fn_82344720(param_1);
      }
    }
    else if (iVar1 == 9) {
      iVar1 = **(int **)(param_1 + 0xc);
      if (*(int *)(iVar1 + 0x168) == 0) {
        uVar4 = *(uint *)(iVar1 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      if (uVar4 == 0) {
        piVar2 = *(int **)(**(int **)(param_1 + 0xc) + 0x168);
        if (piVar2 != (int *)0x0) {
          uVar4 = *(uint *)(param_1 + 0x14);
          lVar3 = (**(code **)(*piVar2 + 8))();
          fn_8233D980(lVar3 + 0x534,(ulonglong)uVar4 + 0x4c);
        }
      }
    }
  }
  return;
}

