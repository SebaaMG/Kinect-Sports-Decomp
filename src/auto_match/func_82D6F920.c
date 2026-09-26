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
extern unsigned int *auStack_270;
extern unsigned int fStack_280;
extern unsigned int lbl_82134504;
extern unsigned int stack0x00000000;
extern unsigned int uStack_264;
extern U64 storeVectorElementWordIndexed();


void fn_82D6F920(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  undefined1 in_vs44 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fStack_280;
  undefined1 auStack_270 [12];
  uint uStack_264;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar5 = 0;
  dVar9 = (double)lbl_82134504;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar7 = 0;
    iVar8 = 0;
    uVar5 = 0;
    do {
      piVar4 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x14))
                                (*(int *)(param_1 + 0x20) + 0x10,
                                 *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x24)),uVar3 - 0x260);
      (**(code **)(*piVar4 + 0x38))(piVar4,param_2,uVar3 - 0x270);
      puVar2 = (undefined4 *)((uint)(auStack_270 + (int)in_r0) & 0xfffffff0);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      uVar1 = storeVectorElementWordIndexed(in_vs44,0,uVar3 - 0x280);
      *(undefined4 *)(uVar3 - 0x280) = uVar1;
      if (dVar9 < (double)fStack_280) {
        puVar2 = (undefined4 *)((int)in_r0 + param_3 & 0xfffffff0);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        puVar2[2] = uVar12;
        puVar2[3] = uVar13;
        uVar5 = ((int)(uStack_264 & 0xc0ffffff) >> 4) +
                (uint)((int)(uStack_264 & 0xc0ffffff) < 0 && (uStack_264 & 0xf) != 0) + iVar7;
        dVar9 = (double)fStack_280;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 3;
    } while (iVar6 < *(int *)(param_1 + 0x28));
  }
  *(uint *)(param_3 + 0xc) = uVar5 | 0x3f000000;
  return;
}

