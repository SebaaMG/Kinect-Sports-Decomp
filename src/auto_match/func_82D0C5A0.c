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
extern unsigned int fStack_10;
extern unsigned int fStack_c;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_8209AA10;
extern unsigned int lbl_82134640;
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_82D0C5A0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  bool bVar7;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  float fStack_10;
  float fStack_c;
  
  fVar5 = lbl_82134640;
  fVar4 = lbl_8209AA10;
  iVar1 = *(int *)(param_1 + 8);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  pfVar3 = (float *)(iVar1 + 0x100U & 0xfffffff0);
  fVar8 = pfVar3[1];
  fVar9 = pfVar3[2];
  fVar10 = pfVar3[3];
  pfVar6 = (float *)((int)&fStack_10 + in_r0 & 0xfffffff0);
  *pfVar6 = in_register_000100c0 * *pfVar3;
  pfVar6[1] = in_register_000100c4 * fVar8;
  pfVar6[2] = in_register_000100c8 * fVar9;
  pfVar6[3] = in_vr12 * fVar10;
  fVar8 = fVar4;
  if ((fStack_10 <= fVar4) && (fVar8 = fStack_10, fStack_10 < fVar5)) {
    fVar8 = fVar5;
  }
  fVar9 = lbl_82002C5C;
  if (fVar8 < 0.0) {
    fVar9 = lbl_8200533C;
  }
  if ((fStack_c <= fVar4) && (fVar4 = fStack_c, fStack_c < fVar5)) {
    fVar4 = fVar5;
  }
  fVar5 = lbl_82002C5C;
  if (fVar4 < 0.0) {
    fVar5 = lbl_8200533C;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x24);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (((int)(fVar9 + fVar8) != puVar2[8]) || (bVar7 = true, (int)(fVar5 + fVar4) != puVar2[9])) {
      bVar7 = false;
    }
    if (bVar7) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return 1;
}

