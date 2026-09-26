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
extern unsigned int iStack_44;
extern unsigned int iStack_64;


void fn_829C3CC0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  undefined1 *puVar10;
  int iVar11;
  int aiStack_80 [7];
  int iStack_64;
  int aiStack_60 [7];
  int iStack_44;
  
  piVar6 = aiStack_80 + 1;
  iVar11 = *(int *)(param_1 + 0x148) + 0x80;
  psVar8 = (short *)(param_3 + 0x30);
  psVar9 = (short *)(*(int *)(param_2 + 0x50) + 0x30);
  lVar4 = 6;
  do {
    iVar7 = (int)lVar4;
    if (((iVar7 != 4) && (iVar7 != 2)) && (iVar7 != 0)) {
      if (((psVar8[-0x10] == 0) && (*psVar8 == 0)) && ((psVar8[0x10] == 0 && (psVar8[0x20] == 0))))
      {
        iVar2 = (int)psVar9[-0x18] * (int)psVar8[-0x18] * 4;
        piVar6[-1] = iVar2;
        piVar6[7] = iVar2;
      }
      else {
        iVar2 = (int)psVar9[-0x18] * (int)psVar8[-0x18] * 0x8000;
        iVar3 = (int)psVar9[0x10] * (int)psVar8[0x10] * 0x1b37 +
                (int)*psVar9 * (int)*psVar8 * -0x28ba +
                (int)psVar9[0x20] * (int)psVar8[0x20] * -0x1712 +
                (int)psVar9[-0x10] * (int)psVar8[-0x10] * 0x73fc;
        piVar6[-1] = iVar3 + iVar2 + 0x1000 >> 0xd;
        piVar6[7] = (iVar2 - iVar3) + 0x1000 >> 0xd;
      }
    }
    if (((iVar7 != 5) && (iVar7 != 3)) && (iVar7 != 1)) {
      if ((((psVar8[-0xf] == 0) && (psVar8[1] == 0)) && (psVar8[0x11] == 0)) && (psVar8[0x21] == 0))
      {
        iVar2 = (int)psVar9[-0x17] * (int)psVar8[-0x17] * 4;
        *piVar6 = iVar2;
        piVar6[8] = iVar2;
      }
      else {
        iVar2 = (int)psVar9[-0x17] * (int)psVar8[-0x17] * 0x8000;
        iVar3 = (int)psVar9[0x11] * (int)psVar8[0x11] * 0x1b37 +
                (int)psVar9[1] * (int)psVar8[1] * -0x28ba +
                (int)psVar9[0x21] * (int)psVar8[0x21] * -0x1712 +
                (int)psVar9[-0xf] * (int)psVar8[-0xf] * 0x73fc;
        *piVar6 = iVar3 + iVar2 + 0x1000 >> 0xd;
        piVar6[8] = (iVar2 - iVar3) + 0x1000 >> 0xd;
      }
    }
    if (((iVar7 != 6) && (iVar7 != 4)) && (iVar7 != 2)) {
      if (((psVar8[-0xe] == 0) && (psVar8[2] == 0)) && ((psVar8[0x12] == 0 && (psVar8[0x22] == 0))))
      {
        iVar2 = (int)psVar9[-0x16] * (int)psVar8[-0x16] * 4;
        piVar6[1] = iVar2;
        piVar6[9] = iVar2;
      }
      else {
        iVar2 = (int)psVar9[-0x16] * (int)psVar8[-0x16] * 0x8000;
        iVar3 = (int)psVar9[0x12] * (int)psVar8[0x12] * 0x1b37 +
                (int)psVar9[2] * (int)psVar8[2] * -0x28ba +
                (int)psVar9[0x22] * (int)psVar8[0x22] * -0x1712 +
                (int)psVar9[-0xe] * (int)psVar8[-0xe] * 0x73fc;
        piVar6[1] = iVar3 + iVar2 + 0x1000 >> 0xd;
        piVar6[9] = (iVar2 - iVar3) + 0x1000 >> 0xd;
      }
    }
    if (((iVar7 != 7) && (iVar7 != 5)) && (iVar7 != 3)) {
      if (((psVar8[-0xd] == 0) && (psVar8[3] == 0)) && ((psVar8[0x13] == 0 && (psVar8[0x23] == 0))))
      {
        iVar7 = (int)psVar9[-0x15] * (int)psVar8[-0x15] * 4;
        piVar6[2] = iVar7;
        piVar6[10] = iVar7;
      }
      else {
        iVar7 = (int)psVar9[-0x15] * (int)psVar8[-0x15] * 0x8000;
        iVar2 = (int)psVar9[0x13] * (int)psVar8[0x13] * 0x1b37 +
                (int)psVar8[3] * (int)psVar9[3] * -0x28ba +
                (int)psVar9[0x23] * (int)psVar8[0x23] * -0x1712 +
                (int)psVar9[-0xd] * (int)psVar8[-0xd] * 0x73fc;
        piVar6[2] = iVar2 + iVar7 + 0x1000 >> 0xd;
        piVar6[10] = (iVar7 - iVar2) + 0x1000 >> 0xd;
      }
    }
    psVar8 = psVar8 + 4;
    lVar5 = lVar4 + -2;
    psVar9 = psVar9 + 4;
    piVar6 = piVar6 + 4;
    lVar4 = lVar4 + -4;
  } while (0 < lVar5);
  puVar10 = (undefined1 *)(*param_4 + param_5);
  if (((aiStack_80[1] == 0) && (aiStack_80[3] == 0)) && ((aiStack_80[5] == 0 && (iStack_64 == 0))))
  {
    uVar1 = *(undefined1 *)((aiStack_80[0] + 0x10 >> 5 & 0x3ffU) + iVar11);
    *puVar10 = uVar1;
    puVar10[1] = uVar1;
  }
  else {
    iVar7 = aiStack_80[1] * 0x73fc + aiStack_80[3] * -0x28ba + aiStack_80[5] * 0x1b37 +
            iStack_64 * -0x1712;
    *puVar10 = *(undefined1 *)((iVar7 + aiStack_80[0] * 0x8000 + 0x80000 >> 0x14 & 0x3ffU) + iVar11)
    ;
    puVar10[1] = *(undefined1 *)
                  (((aiStack_80[0] * 0x8000 - iVar7) + 0x80000 >> 0x14 & 0x3ffU) + iVar11);
  }
  puVar10 = (undefined1 *)(param_4[1] + param_5);
  if ((((aiStack_60[1] == 0) && (aiStack_60[3] == 0)) && (aiStack_60[5] == 0)) && (iStack_44 == 0))
  {
    uVar1 = *(undefined1 *)((aiStack_60[0] + 0x10 >> 5 & 0x3ffU) + iVar11);
    *puVar10 = uVar1;
    puVar10[1] = uVar1;
  }
  else {
    iVar7 = aiStack_60[5] * 0x1b37 + iStack_44 * -0x1712 + aiStack_60[1] * 0x73fc +
            aiStack_60[3] * -0x28ba;
    *puVar10 = *(undefined1 *)((iVar7 + aiStack_60[0] * 0x8000 + 0x80000 >> 0x14 & 0x3ffU) + iVar11)
    ;
    puVar10[1] = *(undefined1 *)
                  (((aiStack_60[0] * 0x8000 - iVar7) + 0x80000 >> 0x14 & 0x3ffU) + iVar11);
  }
  return;
}

