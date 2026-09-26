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
extern unsigned int lbl_8200D8C0;
extern unsigned int lbl_82017F10;
extern unsigned int lbl_82017F14;
extern unsigned int lbl_82017F18;


void fn_827D1970(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  longlong lVar17;
  
  fVar15 = lbl_82017F18;
  fVar14 = lbl_82017F14;
  fVar13 = lbl_82017F10;
  fVar12 = lbl_8200D8C0;
  pfVar16 = (float *)(param_1 + -4);
  lVar17 = 8;
  do {
    fVar1 = pfVar16[2] - pfVar16[7];
    fVar2 = pfVar16[2] + pfVar16[7];
    fVar3 = pfVar16[3] - pfVar16[6];
    fVar4 = pfVar16[6] + pfVar16[3];
    fVar9 = pfVar16[4] + pfVar16[5];
    fVar6 = pfVar16[1] - pfVar16[8];
    fVar10 = pfVar16[1] + pfVar16[8];
    fVar7 = (pfVar16[4] - pfVar16[5]) + fVar3;
    fVar8 = fVar4 + fVar2;
    fVar5 = fVar1 + fVar6;
    fVar11 = fVar10 - fVar9;
    fVar9 = fVar9 + fVar10;
    fVar1 = (fVar3 + fVar1) * fVar12;
    pfVar16[1] = fVar8 + fVar9;
    pfVar16[5] = fVar9 - fVar8;
    fVar3 = fVar1 + fVar6;
    fVar6 = fVar6 - fVar1;
    fVar1 = (fVar7 - fVar5) * fVar14;
    fVar2 = ((fVar2 - fVar4) + fVar11) * fVar12;
    fVar4 = fVar7 * fVar15 + fVar1;
    fVar1 = fVar5 * fVar13 + fVar1;
    pfVar16[3] = fVar2 + fVar11;
    pfVar16[7] = fVar11 - fVar2;
    pfVar16[6] = fVar6 + fVar4;
    pfVar16[4] = fVar6 - fVar4;
    pfVar16[2] = fVar3 + fVar1;
    pfVar16 = pfVar16 + 8;
    *pfVar16 = fVar3 - fVar1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  pfVar16 = (float *)(param_1 + 0xdc);
  lVar17 = 8;
  do {
    fVar1 = pfVar16[-0x2f] - pfVar16[-7];
    fVar2 = pfVar16[-0x2f] + pfVar16[-7];
    fVar3 = pfVar16[-0x27] - pfVar16[-0xf];
    fVar4 = pfVar16[-0xf] + pfVar16[-0x27];
    fVar9 = pfVar16[-0x1f] + pfVar16[-0x17];
    fVar6 = pfVar16[-0x37] - pfVar16[1];
    fVar10 = pfVar16[-0x37] + pfVar16[1];
    fVar7 = (pfVar16[-0x1f] - pfVar16[-0x17]) + fVar3;
    fVar8 = fVar4 + fVar2;
    fVar5 = fVar1 + fVar6;
    fVar11 = fVar10 - fVar9;
    fVar9 = fVar9 + fVar10;
    fVar1 = (fVar3 + fVar1) * fVar12;
    pfVar16[-0x37] = fVar8 + fVar9;
    pfVar16[-0x17] = fVar9 - fVar8;
    fVar3 = fVar1 + fVar6;
    fVar6 = fVar6 - fVar1;
    fVar1 = (fVar7 - fVar5) * fVar14;
    fVar2 = ((fVar2 - fVar4) + fVar11) * fVar12;
    fVar4 = fVar7 * fVar15 + fVar1;
    fVar1 = fVar5 * fVar13 + fVar1;
    pfVar16[-0x27] = fVar2 + fVar11;
    pfVar16[-7] = fVar11 - fVar2;
    pfVar16[-0xf] = fVar6 + fVar4;
    pfVar16[-0x1f] = fVar6 - fVar4;
    pfVar16[-0x2f] = fVar3 + fVar1;
    pfVar16 = pfVar16 + 1;
    *pfVar16 = fVar3 - fVar1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  return;
}

