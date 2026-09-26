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
extern unsigned int fStack_4c;
extern int fn_82417B28();
extern int fn_8253C548();
extern int fn_82D8B6C8();


void fn_8241AED8(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 in_r0;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                    (*(int **)(param_1 + 4),
                     (ulonglong)*(uint *)(param_1 + 0x18) * 0x1ac +
                     (ulonglong)*(uint *)(param_1 + 8));
  fn_82417B28(param_1,iVar7);
  uVar8 = 0;
  piVar9 = *(int **)(param_1 + 0x88);
  if (piVar9 != *(int **)(param_1 + 0x8c)) {
    do {
      if (*(uint *)(iVar7 + 0x1e0) <= uVar8) {
        return;
      }
      iVar2 = *piVar9;
      fVar1 = *(float *)(param_1 + 0x1a0);
      puVar5 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
      puVar6 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar10;
      puVar6[2] = uVar11;
      puVar6[3] = uVar12;
      fStack_4c = fVar1 + fStack_4c;
      fn_8253C548(uVar3,auStack_50,0xffffffff821ca1a0);
      *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x1d0) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 0x7c0);
      if (*(char *)(iVar4 + 0xe8) == '\x04') {
        fn_82D8B6C8(iVar4,1,1,0);
      }
      piVar9 = piVar9 + 1;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x40) = 0;
      uVar8 = uVar8 + 1;
    } while (piVar9 != *(int **)(param_1 + 0x8c));
  }
  return;
}

