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
extern int fn_82F655D8();
extern int fn_82F65FB0();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82005758;
extern unsigned int lbl_82011630;
extern unsigned int lbl_83264200;


void fn_82F9AD50(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  
  iVar3 = fn_82F6A544();
  dVar8 = lbl_82005758 / (double)*(float *)(iVar3 + 0x10);
  dVar9 = lbl_82005758 / (double)*(uint *)(iVar3 + 0x214);
  dVar11 = lbl_82005758 - lbl_82005758 / (dVar8 * dVar8);
  uVar10 = lbl_82011630;
  dVar8 = lbl_82005758;
  fn_82F655D8(lbl_82011630,
                    ((double)*(uint *)((*(int *)(iVar3 + 0x14) + 0x23) * 4 + iVar3) * dVar9) /
                    (double)*(float *)(iVar3 + 0xc));
  dVar6 = (double)fn_82F65FB0();
  if (dVar8 < dVar6 * lbl_83264200 * dVar11) {
    dVar11 = dVar8 / (dVar6 * lbl_83264200);
  }
  uVar5 = 0;
  if (*(int *)(iVar3 + 0x14) != 0) {
    puVar4 = (uint *)(iVar3 + 0x8c);
    do {
      puVar4 = puVar4 + 1;
      dVar6 = (double)fn_82F655D8(uVar10,((double)*puVar4 * dVar9) /
                                               (double)*(float *)(iVar3 + 0xc));
      dVar7 = (double)fn_82F65FB0();
      uVar1 = (uint)uVar5 & 3;
      iVar2 = (int)((uVar5 & 0xffffffff) >> 2);
      uVar5 = uVar5 + 1;
      dVar7 = dVar7 * lbl_83264200 * dVar11;
      *(float *)(((iVar2 + 0x14) * 4 + uVar1) * 4 + iVar3) = (float)((dVar8 - dVar7) * dVar6);
      *(float *)(((iVar2 + 0x18) * 4 + uVar1) * 4 + iVar3) = (float)dVar7;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 0x14));
  }
  fn_82F6A590();
  return;
}

