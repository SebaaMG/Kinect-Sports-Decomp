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
extern int fn_82274130();
extern int fn_82279D28();
extern unsigned int lbl_83265988;


void fn_8228C590(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  ulonglong uVar12;
  
  if ((*(int *)(param_1 + 0x16c) == 0) ||
     (*(undefined4 *)(param_1 + 0x16c) = 0, iVar6 = lbl_83265988, lbl_83265988 == 0)) {
    return;
  }
  uVar12 = 0;
  piVar11 = (int *)0x831cede8;
LAB_8228c5d4:
  puVar1 = (uint *)*piVar11;
  iVar8 = 0;
  if (0 < (int)puVar1[1]) {
    iVar9 = 0;
    do {
      uVar4 = *(uint *)(iVar9 + puVar1[2]);
      if ((uVar4 != 0) &&
         (iVar2 = *(int *)(*(int *)(iVar6 + 0xf0) + 8),
         (1 << (uVar4 & 7) & (uint)*(byte *)((uVar4 >> 3) + iVar2)) != 0)) {
        if (*(int *)(param_1 + 0x9c) == 0) goto LAB_8228c728;
        puVar10 = *(undefined4 **)(param_1 + 0x10);
        puVar3 = (undefined4 *)*puVar10;
        goto LAB_8228c674;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar8 < (int)puVar1[1]);
  }
  if (*(int *)(param_1 + 0x9c) == 0) goto LAB_8228c728;
  puVar10 = *(undefined4 **)(param_1 + 0x10);
  for (puVar3 = (undefined4 *)*puVar10; puVar3 != puVar10; puVar3 = (undefined4 *)*puVar3) {
    iVar8 = puVar3[2];
    if ((ulonglong)*(uint *)(iVar8 + 0x10) == (uVar12 & 0xffffffff)) goto LAB_8228c6fc;
    puVar10 = *(undefined4 **)(param_1 + 0x10);
  }
  iVar8 = 0;
LAB_8228c6fc:
  if (iVar8 == 0) goto LAB_8228c728;
  fn_82274130(param_1,uVar12,4);
  uVar7 = 1;
  goto LAB_8228c718;
LAB_8228c674:
  if (puVar3 == puVar10) goto code_r0x8228c67c;
  iVar8 = puVar3[2];
  if ((ulonglong)*(uint *)(iVar8 + 0x10) == (uVar12 & 0xffffffff)) goto LAB_8228c680;
  puVar3 = (undefined4 *)*puVar3;
  puVar10 = *(undefined4 **)(param_1 + 0x10);
  goto LAB_8228c674;
code_r0x8228c67c:
  iVar8 = 0;
LAB_8228c680:
  if (iVar8 == 0) {
LAB_8228c728:
    *(undefined4 *)(param_1 + 0x16c) = 1;
  }
  else {
    uVar4 = *puVar1;
    if ((uVar4 == 0) ||
       (cVar5 = '\x01', (1 << (uVar4 & 7) & (uint)*(byte *)((uVar4 >> 3) + iVar2)) == 0)) {
      cVar5 = '\0';
    }
    fn_82274130(param_1,uVar12,cVar5 + '\x02');
    uVar7 = 0;
LAB_8228c718:
    fn_82279D28(param_1,uVar12,uVar7);
  }
  uVar12 = uVar12 + 1;
  piVar11 = piVar11 + 1;
  if (5 < (uVar12 & 0xffffffff)) {
    return;
  }
  goto LAB_8228c5d4;
}

