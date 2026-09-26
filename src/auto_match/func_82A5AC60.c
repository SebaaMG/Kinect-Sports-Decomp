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
extern int fn_82A40B38();
extern int fn_82A5A960();


ulonglong fn_82A5AC60(int param_1)

{
  int iVar1;
  int iVar3;
  longlong lVar2;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x23c) == 2) {
    iVar3 = *(int *)(param_1 + 0x22c);
    piVar5 = (int *)(param_1 + 0x160);
    while (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x22c);
      iVar3 = *(int *)(iVar1 + 4);
      *(int *)(iVar1 + 4) = *piVar5;
      *piVar5 = iVar1;
      *(int *)(param_1 + 0x22c) = iVar3;
    }
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    puVar7 = *(undefined4 **)(param_1 + 0x150);
    if (puVar7 == (undefined4 *)0x0) goto LAB_82a5ad9c;
    do {
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      if (puVar7 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*puVar7;
        puVar7 = (undefined4 *)puVar7[1];
      }
      iVar3 = (**(code **)(*piVar6 + 8))(piVar6);
      if (iVar3 != 0) {
        lVar2 = fn_82A5A960(piVar5,piVar6);
        uVar4 = -(ulonglong)(lVar2 == 0) & 0xffffffff8007000e;
      }
    } while (puVar7 != (undefined4 *)0x0);
  }
  else {
    if ((*(int *)(param_1 + 0x23c) != 1) ||
       (puVar7 = *(undefined4 **)(param_1 + 0x22c),
       *(undefined4 **)(param_1 + 0x22c) == (undefined4 *)0x0)) goto LAB_82a5ad9c;
    do {
      if (puVar7 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
        puVar8 = puVar7;
      }
      else {
        piVar5 = (int *)*puVar7;
        puVar8 = (undefined4 *)puVar7[1];
      }
      iVar3 = (**(code **)(*piVar5 + 8))();
      if (iVar3 == 0) {
        fn_82A40B38(param_1 + 0x160,puVar7);
      }
      puVar7 = puVar8;
    } while (puVar8 != (undefined4 *)0x0);
  }
  if ((int)uVar4 < 0) {
    return uVar4;
  }
LAB_82a5ad9c:
  *(undefined4 *)(param_1 + 0x23c) = 0;
  return uVar4;
}

