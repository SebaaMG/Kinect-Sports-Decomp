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
extern int fn_8265B6B0();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_821AAD20;


void fn_8265BB90(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar7 = 0;
  dVar9 = (double)lbl_821AAD20;
  dVar8 = (double)lbl_8200133C;
  dVar10 = dVar9;
  do {
    iVar3 = fn_8265B6B0(dVar9,lVar7);
    dVar9 = extraout_f1;
    if ((double)*(float *)(iVar3 + 4) != dVar8) {
      uVar2 = *(uint *)(iVar3 + 0xc);
      uVar5 = 0;
      fVar1 = (float)((double)*(float *)(iVar3 + 4) + extraout_f1);
      dVar9 = dVar10;
      dVar11 = dVar10;
      if (1 < (int)uVar2) {
        iVar6 = 0;
        do {
          iVar4 = iVar6 + *(int *)(iVar3 + 8);
          uVar5 = uVar5 + 2;
          iVar6 = iVar6 + 0x10;
          dVar9 = (double)(float)((double)*(float *)(iVar4 + 4) + dVar9);
          dVar11 = (double)(float)((double)*(float *)(iVar4 + 0xc) + dVar11);
        } while (uVar5 < uVar2 - 1);
      }
      if (uVar5 < uVar2) {
        fVar1 = *(float *)(uVar5 * 8 + *(int *)(iVar3 + 8) + 4) + fVar1;
      }
      dVar9 = (double)((float)(dVar11 + dVar9) + fVar1);
    }
    lVar7 = lVar7 + 1;
  } while ((int)lVar7 < 0x7a);
  return;
}

