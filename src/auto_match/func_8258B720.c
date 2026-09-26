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
extern unsigned int iStack00000014;
extern unsigned int iStack0000004c;
extern U64 storeWordConditionalIndexed();


void fn_8258B720(int param_1,longlong param_2,float *param_3,float *param_4,uint *param_5,
                  uint *param_6,code *param_7,int param_8)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  undefined4 *puVar24;
  char in_RESERVE;
  byte in_cr0;
  int iStack00000014;
  float *pfStack00000024;
  float *pfStack0000002c;
  code *pcStack00000044;
  int iStack0000004c;
  undefined4 in_stack_00000054;
  
  iVar5 = (int)param_2;
  iVar2 = *(int *)(iVar5 + 0x30);
  do {
    puVar17 = (uint *)(param_2 + 0x34);
    uVar15 = (ulonglong)*puVar17 + 1;
    if (in_RESERVE != '\0') {
      uVar12 = storeWordConditionalIndexed(uVar15,0,param_2 + 0x34);
      *puVar17 = uVar12;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (iVar2 != 0) {
    uVar12 = *param_5;
    uVar3 = *param_6;
    iVar4 = *(int *)(iVar5 + 0x18);
    iVar5 = *(int *)(iVar5 + 0x1c);
    iVar8 = (int)(uVar12 << 0xb | uVar12 >> 0x15) >> 0x16;
    iVar9 = (int)uVar12 >> 0x15;
    iVar10 = (int)(uVar3 << 0x15 | uVar3 >> 0xb) >> 0x15;
    iVar11 = (int)(uVar3 << 0xb | uVar3 >> 0x15) >> 0x16;
    iVar22 = (int)(uVar12 << 0x15 | uVar12 >> 0xb) >> 0x15;
    iStack00000014 = param_1;
    pfStack00000024 = param_3;
    pfStack0000002c = param_4;
    pcStack00000044 = param_7;
    iStack0000004c = param_8;
    if (iVar22 <= iVar10) {
      iVar19 = iVar22 * iVar5;
      uVar16 = uVar15;
      do {
        if (iVar8 <= iVar11) {
          puVar20 = (undefined4 *)((iVar4 * iVar8 + iVar19 + iVar9) * 4 + iVar2);
          iVar13 = iVar9;
          puVar21 = puVar20;
          iVar18 = iVar8;
          do {
            for (; iVar13 <= (int)uVar3 >> 0x15; iVar13 = iVar13 + 1) {
              for (puVar6 = (undefined4 *)*puVar20; puVar6 != (undefined4 *)0x0;
                  puVar6 = (undefined4 *)puVar6[0x1f]) {
                iVar23 = 0;
                puVar24 = puVar6;
                do {
                  puVar24 = puVar24 + 1;
                  pfVar7 = (float *)*puVar24;
                  if ((((((pfVar7 != (float *)0x0) && (((uint)pfVar7[0xb] & 1) != 0)) &&
                        ((ulonglong)(uint)pfVar7[iStack0000004c + 0xd] != (uVar16 & 0xffffffff))) &&
                       ((fVar1 = *param_4, pfVar7[iStack0000004c + 0xd] = (float)uVar16,
                        *pfVar7 <= fVar1 && (pfVar7[1] <= param_4[1])))) &&
                      ((pfVar7[2] <= param_4[2] &&
                       ((*param_3 <= pfVar7[4] && (param_3[1] <= pfVar7[5])))))) &&
                     (param_3[2] <= pfVar7[6])) {
                    iVar14 = (*pcStack00000044)(pfVar7,in_stack_00000054);
                    if (iVar14 == 0) {
                      return;
                    }
                    uVar16 = uVar15 & 0xffffffff;
                    param_3 = pfStack00000024;
                    param_4 = pfStack0000002c;
                  }
                  iVar23 = iVar23 + 1;
                } while (iVar23 < 0x1e);
                param_1 = iStack00000014;
              }
              puVar20 = puVar20 + 1;
            }
            iVar18 = iVar18 + 1;
            puVar20 = puVar21 + iVar4;
            iVar13 = iVar9;
            puVar21 = puVar20;
          } while (iVar18 <= iVar11);
        }
        iVar22 = iVar22 + 1;
        iVar19 = iVar19 + iVar5;
      } while (iVar22 <= iVar10);
    }
    iVar2 = *(int *)(param_1 + 0x3e4);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x98c) & 1) != 0)) {
      (*pcStack00000044)(iVar2 + 0x960,in_stack_00000054);
    }
  }
  return;
}

