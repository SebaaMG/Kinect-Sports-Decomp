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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_150;
extern unsigned int iStack_158;
extern unsigned int iStack_15c;
extern unsigned int iStack_160;
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int uStack_154;


void fn_82F08460(undefined8 param_1,undefined8 *param_2,int param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar8;
  longlong lVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  uint uStack_154;
  uint auStack_150 [84];
  
  uVar8 = 0;
  iVar5 = (int)param_4;
  if (0 < iVar5) {
    piVar6 = (int *)(param_3 + -4);
    uVar10 = param_4;
    do {
      piVar6 = piVar6 + 1;
      auStack_150[*piVar6] = uVar8;
      uVar8 = uVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar7 = (longlong)(iVar5 >> 2) + (ulonglong)(iVar5 < 0 && (param_4 & 3) != 0);
  if (0 < lVar7) {
    puVar4 = &uStack_154;
    do {
      uVar8 = puVar4[1];
      if ((int)uVar8 < 0x20) {
        iStack_168 = 1 << (uVar8 & 0x3f);
        iStack_164 = 0;
      }
      else {
        iStack_168 = 0;
        iStack_164 = 1 << (uVar8 - 0x20 & 0x3f);
      }
      uVar8 = puVar4[2];
      if ((int)uVar8 < 0x20) {
        iStack_158 = 1 << (uVar8 & 0x3f);
        uStack_154 = 0;
      }
      else {
        iStack_158 = 0;
        uStack_154 = 1 << (uVar8 - 0x20 & 0x3f);
      }
      uVar8 = puVar4[3];
      if ((int)uVar8 < 0x20) {
        iStack_170 = 1 << (uVar8 & 0x3f);
        iStack_16c = 0;
      }
      else {
        iStack_170 = 0;
        iStack_16c = 1 << (uVar8 - 0x20 & 0x3f);
      }
      puVar4 = puVar4 + 4;
      uVar8 = *puVar4;
      if ((int)uVar8 < 0x20) {
        iStack_160 = 1 << (uVar8 & 0x3f);
        iStack_15c = 0;
      }
      else {
        iStack_160 = 0;
        iStack_15c = 1 << (uVar8 - 0x20 & 0x3f);
      }
      uVar1 = CONCAT44(iStack_168,iStack_164);
      *param_2 = 0;
      uVar3 = CONCAT44(iStack_158,uStack_154);
      uVar10 = CONCAT44(iStack_170,iStack_16c);
      uVar2 = CONCAT44(iStack_160,iStack_15c);
      param_2[1] = uVar1;
      param_2[2] = uVar3;
      uVar9 = uVar2 | uVar10;
      param_2[3] = uVar3 | uVar1;
      param_2[4] = uVar10;
      param_2[5] = uVar10 | uVar1;
      param_2[6] = uVar10 | uVar3;
      param_2[7] = uVar10 | uVar3 | uVar1;
      param_2[8] = uVar2;
      param_2[9] = uVar2 | uVar1;
      param_2[10] = uVar2 | uVar3;
      param_2[0xb] = uVar2 | uVar3 | uVar1;
      param_2[0xc] = uVar9;
      param_2[0xd] = uVar9 | uVar1;
      param_2[0xe] = uVar9 | uVar3;
      param_2[0xf] = uVar9 | uVar3 | uVar1;
      param_2 = param_2 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

