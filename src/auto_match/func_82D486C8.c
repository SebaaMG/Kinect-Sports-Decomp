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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_60;
extern unsigned int fStack_70;
extern unsigned int lbl_82134504;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


void fn_82D486C8(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 in_vs44 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_70;
  undefined1 auStack_60 [96];
  
  iVar5 = 0;
  dVar8 = (double)lbl_82134504;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x44) + iVar6);
      (**(code **)(*piVar1 + 0x38))(piVar1,param_2,ZEXT48(&stack0x00000000) - 0x60);
      lVar4 = ZEXT48(&stack0x00000000) - 0x70;
      puVar3 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      uVar2 = storeVectorElementWordIndexed(in_vs44,0,lVar4);
      *(undefined4 *)lVar4 = uVar2;
      if (dVar8 < (double)fStack_70) {
        puVar3 = (undefined4 *)((int)in_r0 + param_3 & 0xfffffff0);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = uVar12;
        dVar8 = (double)fStack_70;
        iVar5 = iVar7;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x48));
  }
  *(uint *)(param_3 + 0xc) = (*(uint *)(param_3 + 0xc) & 0xc0ffffff) + iVar5 * 0x100 | 0x3f000000;
  return;
}

