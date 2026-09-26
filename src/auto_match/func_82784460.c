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
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


bool fn_82784460(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  char param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar11 = 0;
  uVar12 = 0;
  if (*(uint *)(param_3 + 0x18) != 0) {
    do {
      piVar8 = (int *)(*(int *)((uVar12 >> 4 & 0xffffffc) + *(int *)(param_3 + 0x24)) +
                      (uVar12 & 0x3f) * 0x18);
      iVar1 = piVar8[3];
      iVar2 = piVar8[4];
      if (iVar1 != iVar2) {
        uVar6 = 1;
        if (1 < (uint)piVar8[1]) {
          do {
            uVar9 = piVar8[2] + uVar6;
            uVar4 = uVar9 * 8 & 0x7f8;
            iVar3 = *(int *)((uVar9 >> 6 & 0x3fffffc) + *(int *)(*piVar8 + 0x14));
            uStack_60 = *(undefined8 *)(iVar3 + uVar4);
            uVar10 = *(undefined8 *)
                      (*(int *)((uVar9 - 1 >> 6 & 0x3fffffc) + *(int *)(*piVar8 + 0x14)) +
                      ((uVar9 - 1) * 8 & 0x7f8));
            dVar13 = (double)(((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
            uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar10)) & ((U64)0xFFFFFFFF)) << 32));
            fVar5 = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
            dVar14 = (double)(((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
            if (dVar14 != dVar13) {
              iVar7 = 1;
              uStack_58 = uVar10;
              if (dVar13 < dVar14) {
                uStack_58 = *(undefined8 *)(iVar3 + uVar4);
                iVar7 = -1;
                dVar14 = (double)(((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
                dVar13 = (double)fVar5;
                uStack_60 = uVar10;
              }
              if (((dVar14 <= param_2) && (param_2 < dVar13)) &&
                 (lbl_821AAD20 <
                  (float)(param_1 - (double)(((U64)(uStack_60) >> 0) & 0xFFFFFFFF)) * (float)(dVar13 - dVar14) -
                  (float)((double)(((U64)(uStack_60) >> 0) & 0xFFFFFFFF) - (double)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF)) *
                  (float)(param_2 - dVar13))) {
                if (param_6 == '\0') {
                  if (-1 < iVar1) {
                    uVar11 = uVar11 ^ 1;
                  }
                  if (-1 < iVar2) {
                    uVar11 = uVar11 ^ 1;
                  }
                }
                else {
                  if (-1 < iVar1) {
                    uVar11 = (longlong)(iVar1 + 1) * (longlong)iVar7 + uVar11;
                  }
                  if (-1 < iVar2) {
                    uVar11 = uVar11 - (longlong)(iVar2 + 1) * (longlong)iVar7;
                  }
                }
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)piVar8[1]);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_3 + 0x18));
  }
  return uVar11 != 0;
}

