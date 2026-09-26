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
extern int fn_82BBE320();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_82054184;


uint fn_82BBF178(undefined8 param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float *pfVar12;
  longlong *plVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lStack_168;
  float afStack_15c [15];
  float afStack_120 [72];
  
  if ((int)param_3 != 0) {
    plVar13 = &lStack_168;
    lVar16 = 8;
    do {
      plVar13 = plVar13 + 1;
      *plVar13 = 0;
      fVar10 = lbl_82054184;
      fVar9 = lbl_820288E0;
      fVar8 = lbl_820288C8;
      fVar7 = lbl_8200D8DC;
      fVar6 = lbl_82002C5C;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    pfVar15 = param_2 + 3;
    lVar16 = 0x10;
    uVar11 = 0;
    pfVar14 = afStack_15c;
    pfVar12 = afStack_120 + 1;
    do {
      fVar2 = *pfVar15;
      uVar5 = uVar11 & 3;
      fVar3 = pfVar14[-1];
      pfVar12[-1] = pfVar15[-3];
      fVar4 = pfVar15[-1];
      *pfVar12 = pfVar15[-2];
      pfVar12[1] = fVar4;
      iVar1 = (int)(fVar3 + fVar2 + fVar6);
      lStack_168 = (longlong)iVar1;
      *(float *)(((int)afStack_120 - (int)param_2) + (int)pfVar15) = (float)(longlong)iVar1;
      fVar2 = (fVar3 + fVar2) - (float)(longlong)iVar1;
      if (uVar5 != 3) {
        *pfVar14 = fVar2 * fVar10 + *pfVar14;
      }
      if (uVar11 < 0xc) {
        if (uVar5 != 0) {
          pfVar14[2] = fVar2 * fVar8 + pfVar14[2];
        }
        pfVar14[3] = fVar2 * fVar9 + pfVar14[3];
        if (uVar5 != 3) {
          pfVar14[4] = fVar2 * fVar7 + pfVar14[4];
        }
      }
      uVar11 = uVar11 + 1;
      pfVar12 = pfVar12 + 4;
      pfVar15 = pfVar15 + 4;
      pfVar14 = pfVar14 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    param_2 = afStack_120;
  }
  uVar11 = fn_82BBE320(param_1,param_2,1,param_3);
  return (int)uVar11 >> 0x1f & uVar11;
}

