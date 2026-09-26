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
extern unsigned int lbl_82005C88;
extern unsigned int lbl_8205751C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_829DCB28(int param_1,ulonglong param_2,int param_3,longlong param_4,float *param_5,
                  uint *param_6)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  float *pfVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  *param_5 = lbl_82005C88;
  fVar5 = lbl_821AAD20;
  fVar4 = lbl_8205751C;
  if ((param_2 & 0xffffffff) != 0) {
    puVar6 = (uint *)(param_1 + 2000);
    do {
      if ((int)param_4 != 0) {
        puVar9 = (uint *)(param_3 + 2000);
        iVar11 = (-2000 - param_3) + (int)puVar6;
        lVar10 = param_4;
        do {
          pfVar7 = (float *)(puVar9 + -500);
          lVar12 = 500;
          fVar2 = fVar5;
          do {
            pfVar3 = (float *)(iVar11 + (int)pfVar7);
            fVar1 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            fVar2 = ABS(*pfVar3 - fVar1) + fVar2;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          if (fVar2 * fVar4 < *param_5) {
            *param_5 = fVar2 * fVar4;
            uVar8 = *puVar6;
            if (*puVar9 <= *puVar6) {
              uVar8 = *puVar9;
            }
            *param_6 = uVar8;
          }
          lVar10 = lVar10 + -1;
          iVar11 = iVar11 + -0x7d4;
          puVar9 = puVar9 + 0x1f5;
        } while (lVar10 != 0);
      }
      param_2 = param_2 - 1;
      puVar6 = puVar6 + 0x1f5;
    } while (param_2 != 0);
  }
  return;
}

