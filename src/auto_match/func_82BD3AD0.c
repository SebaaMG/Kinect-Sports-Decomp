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
extern int fn_82BD3A30();


undefined8 fn_82BD3AD0(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ushort uVar8;
  int *piVar9;
  int *piVar10;
  
  piVar10 = (int *)(param_1 + 0x34);
  puVar3 = *(undefined4 **)(param_1 + 0x34);
  while ((puVar3 != (undefined4 *)0x0 && (*(int *)*puVar3 != 0x103))) {
    iVar4 = *piVar10;
    if (iVar4 != 0) {
      if (iVar4 == *(int *)(param_1 + 0x38)) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      *piVar10 = *(int *)(iVar4 + 4);
      *(undefined4 *)(iVar4 + 4) = 0;
    }
    fn_82BD3A30(param_1);
    puVar3 = (undefined4 *)*piVar10;
  }
  piVar5 = *(int **)(param_1 + 0x2c);
  piVar9 = (int *)(param_1 + 0x2c);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    piVar6 = (int *)*piVar5;
    if (*piVar6 == 0x103) break;
    iVar4 = *piVar9;
    iVar7 = piVar6[2];
    if (iVar4 != 0) {
      if (iVar4 == *(int *)(param_1 + 0x30)) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      *piVar9 = *(int *)(iVar4 + 4);
      *(undefined4 *)(iVar4 + 4) = 0;
    }
    if (*piVar6 == 0) {
      cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x8c);
      if (*(char *)(param_1 + 0x3c) != cVar1) {
        *(char *)(param_1 + 0x3c) = cVar1;
      }
      if (0x7ff < *(ushort *)(param_1 + 0x3e)) {
        *(undefined2 *)(param_1 + 0x3e) = 0;
      }
      uVar2 = *(ushort *)(iVar7 + -2);
      uVar8 = (ushort)*(byte *)(param_1 + 0x3c) << 0xc;
      *(ushort *)(iVar7 + -2) = uVar8 | uVar2 & 0xfff;
      *(ushort *)(iVar7 + -2) = (*(ushort *)(param_1 + 0x3e) & 0x7ff) << 1 | uVar8 | uVar2 & 1;
      *(short *)(param_1 + 0x3e) = *(short *)(param_1 + 0x3e) + 1;
      *(ushort *)(iVar7 + -2) =
           (ushort)((*(uint *)(*(int *)(param_1 + 4) + 0xd0) & 0xf0000) == 0x10000) |
           *(ushort *)(iVar7 + -2) & 0xfffe;
      *(undefined4 *)*piVar5 = 0x103;
      *(undefined4 *)(*piVar5 + 4) = 0;
      piVar5[1] = 0;
      if (*(int *)(param_1 + 0x38) == 0) {
        *piVar10 = (int)piVar5;
      }
      else {
        *(int **)(*(int *)(param_1 + 0x38) + 4) = piVar5;
      }
      *(int **)(param_1 + 0x38) = piVar5;
      *(uint *)(*(int *)(param_1 + 0x20) + 0xec) =
           1 << (**(uint **)(param_1 + 4) & 0x3f) | *(uint *)(*(int *)(param_1 + 0x20) + 0xec);
    }
    else {
      fn_82BD3A30(param_1);
    }
    piVar5 = (int *)*piVar9;
  }
  return 0;
}

