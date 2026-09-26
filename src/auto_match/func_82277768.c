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
#define NAN(x) ((x) != (x))
extern int fn_82540078();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821958F8;
extern unsigned int lbl_821CC160;


void fn_82277768(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  
  iVar5 = fn_82F6A548();
  if ((param_3 & 0xff) == 0) {
    uVar3 = *(undefined4 *)(iVar5 + 0xc);
    uVar4 = *(undefined4 *)(iVar5 + 0x10);
    *(undefined4 *)(iVar5 + 0x14) = uVar3;
    *(undefined4 *)(iVar5 + 0x18) = uVar4;
    *(undefined4 *)(iVar5 + 0x1c) = uVar3;
    *(undefined4 *)(iVar5 + 0x20) = uVar4;
    *(undefined4 *)(iVar5 + 0x24) = uVar3;
    *(undefined4 *)(iVar5 + 0x28) = uVar4;
  }
  else {
    dVar6 = (double)(float)(extraout_f1 * (double)lbl_821958F8);
    dVar9 = extraout_f1;
    dVar8 = (double)fn_82540078((double)lbl_821917C0,extraout_f1);
    dVar9 = (double)fn_82540078((double)lbl_821917C0,dVar9);
    dVar8 = (double)(float)(dVar8 * (double)(*(float *)(iVar5 + 0x10) - *(float *)(iVar5 + 0x18)));
    dVar9 = (double)(float)(dVar9 * (double)(float)((double)*(float *)(iVar5 + 0xc) -
                                                   (double)*(float *)(iVar5 + 0x14)));
    fVar1 = (float)(dVar8 - -dVar6);
    fVar2 = (float)(dVar9 - -dVar6);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar9 = -dVar6;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar8 = -dVar6;
    }
    dVar7 = dVar6;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((float)(dVar9 - dVar6) < lbl_821CC160) << 2) |
                  (uint)(NAN((float)(dVar9 - dVar6)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar7 = dVar9;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((float)(dVar8 - dVar6) < lbl_821CC160) << 2) |
                  (uint)(NAN((float)(dVar8 - dVar6)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar6 = dVar8;
    }
    *(float *)(iVar5 + 0x14) = (float)((double)*(float *)(iVar5 + 0x14) + dVar7);
    *(float *)(iVar5 + 0x18) = (float)((double)*(float *)(iVar5 + 0x18) + dVar6);
  }
  fn_82F6A594();
  return;
}

