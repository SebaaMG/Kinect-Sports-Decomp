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
extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;


int fn_82A7BDD8(byte *param_1,ulonglong param_2,undefined2 *param_3,int param_4,ulonglong param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar6 = 0;
  }
  else {
    puVar7 = param_3;
    if (6 < (param_2 & 0xffffffff)) {
      do {
        uVar11 = param_2;
        if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
          uVar11 = param_5 & 0xffff;
        }
        param_2 = param_2 - uVar11;
        iVar6 = *(int *)(&lbl_820A6CF8 + (uint)*param_1 * 4);
        iVar3 = *(int *)(&lbl_820A6D14 + (uint)*param_1 * 4);
        iVar8 = (uint)param_1[2] * 0x100 + (uint)param_1[1];
        pbVar1 = param_1 + 5;
        iVar10 = (uint)param_1[4] * 0x100 + (uint)param_1[3];
        pbVar5 = param_1 + 6;
        param_1 = param_1 + 7;
        iVar12 = (uint)*pbVar5 * 0x100 + (uint)*pbVar1;
        *puVar7 = (short)iVar12;
        puVar7[1] = (short)iVar10;
        for (lVar9 = uVar11 - 7; puVar7 = puVar7 + 2, lVar9 != 0; lVar9 = lVar9 + -1) {
          bVar2 = *param_1;
          uVar4 = (int)(char)bVar2 >> 4;
          param_1 = param_1 + 1;
          iVar12 = (iVar12 * iVar3 + iVar10 * iVar6 >> 8) +
                   ((int)(char)((char)uVar4 << 4) >> 4) * iVar8;
          if (iVar12 < 0x8000) {
            if (iVar12 < -0x8000) {
              iVar12 = -0x8000;
            }
          }
          else {
            iVar12 = 0x7fff;
          }
          iVar8 = *(int *)(&lbl_820A6D30 + (uVar4 & 0xf) * 4) * iVar8 >> 8;
          if (iVar8 < 0x10) {
            iVar8 = 0x10;
          }
          *puVar7 = (short)iVar12;
          uVar4 = (int)(char)(bVar2 << 4) >> 4;
          iVar10 = (iVar12 * iVar6 + iVar10 * iVar3 >> 8) +
                   ((int)(char)((char)uVar4 << 4) >> 4) * iVar8;
          if (iVar10 < 0x8000) {
            if (iVar10 < -0x8000) {
              iVar10 = -0x8000;
            }
          }
          else {
            iVar10 = 0x7fff;
          }
          iVar8 = *(int *)(&lbl_820A6D30 + (uVar4 & 0xf) * 4) * iVar8 >> 8;
          if (iVar8 < 0x10) {
            iVar8 = 0x10;
          }
          puVar7[1] = (short)iVar10;
        }
      } while (6 < (param_2 & 0xffffffff));
    }
    iVar6 = (int)puVar7 - (int)param_3;
  }
  return iVar6;
}

