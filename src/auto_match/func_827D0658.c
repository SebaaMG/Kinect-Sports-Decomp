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
extern unsigned int *auStack_94;


void fn_827D0658(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  short *psVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_94 [20];
  int aiStack_80 [32];
  
  piVar9 = *(int **)(param_2 + 0x50);
  piVar5 = aiStack_80;
  iVar11 = *(int *)(param_1 + 0x120) + 0x80;
  iVar2 = 8;
  lVar12 = 8;
  psVar7 = (short *)(param_3 + 0x30);
  do {
    if (((iVar2 != 6) && (iVar2 != 4)) && (iVar2 != 2)) {
      if (((psVar7[-0x10] == 0) && (*psVar7 == 0)) && ((psVar7[0x10] == 0 && (psVar7[0x20] == 0))))
      {
        iVar3 = (int)psVar7[-0x18] * *piVar9 * 4;
        piVar5[8] = iVar3;
      }
      else {
        iVar4 = (int)psVar7[-0x18] * *piVar9 * 0x8000;
        iVar1 = (int)psVar7[0x10] * piVar9[0x28] * 0x1b37 + (int)*psVar7 * piVar9[0x18] * -0x28ba +
                (int)psVar7[0x20] * piVar9[0x38] * -0x1712 + piVar9[8] * (int)psVar7[-0x10] * 0x73fc
        ;
        iVar3 = iVar1 + iVar4 + 0x1000 >> 0xd;
        piVar5[8] = (iVar4 - iVar1) + 0x1000 >> 0xd;
      }
      *piVar5 = iVar3;
    }
    psVar7 = psVar7 + 1;
    piVar9 = piVar9 + 1;
    piVar5 = piVar5 + 1;
    iVar2 = iVar2 + -1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  puVar10 = auStack_94;
  lVar12 = 2;
  do {
    puVar8 = (undefined1 *)(*param_4 + param_5);
    if (((*(int *)(puVar10 + 0x18) == 0) && (*(int *)(puVar10 + 0x20) == 0)) &&
       ((*(int *)(puVar10 + 0x28) == 0 && (*(int *)(puVar10 + 0x30) == 0)))) {
      uVar6 = *(undefined1 *)((*(int *)(puVar10 + 0x14) + 0x10 >> 5 & 0x3ffU) + iVar11);
      *puVar8 = uVar6;
    }
    else {
      iVar2 = *(int *)(puVar10 + 0x14);
      iVar4 = *(int *)(puVar10 + 0x18) * 0x73fc + *(int *)(puVar10 + 0x20) * -0x28ba +
              *(int *)(puVar10 + 0x28) * 0x1b37 + *(int *)(puVar10 + 0x30) * -0x1712;
      *puVar8 = *(undefined1 *)((iVar4 + iVar2 * 0x8000 + 0x80000 >> 0x14 & 0x3ffU) + iVar11);
      uVar6 = *(undefined1 *)(((iVar2 * 0x8000 - iVar4) + 0x80000 >> 0x14 & 0x3ffU) + iVar11);
    }
    puVar10 = puVar10 + 0x20;
    puVar8[1] = uVar6;
    param_4 = param_4 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}

