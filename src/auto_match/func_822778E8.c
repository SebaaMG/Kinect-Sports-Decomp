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
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821958EC;
extern unsigned int lbl_821958F8;
extern unsigned int lbl_821CC160;


void fn_822778E8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = fn_82F6A540();
  fVar1 = lbl_8218E8E8;
  if ((param_3 & 0xff) != 0) {
    fVar1 = lbl_821CC160;
  }
  dVar9 = (double)(float)(extraout_f1 * (double)lbl_821958EC);
  dVar8 = (double)(float)(extraout_f1 * (double)lbl_821958F8);
  dVar7 = (double)((*(float *)(iVar3 + 0x14) - *(float *)(iVar3 + 0x1c)) * fVar1 +
                  *(float *)(iVar3 + 0x1c));
  dVar6 = (double)((*(float *)(iVar3 + 0x18) - *(float *)(iVar3 + 0x20)) * fVar1 +
                  *(float *)(iVar3 + 0x20));
  dVar5 = extraout_f1;
  dVar4 = (double)fn_82540078((double)lbl_821917C0,extraout_f1);
  dVar5 = (double)fn_82540078((double)lbl_821917B4,dVar5);
  dVar4 = (double)(float)(dVar4 * (double)(float)(dVar6 - (double)*(float *)(iVar3 + 0x28)));
  dVar5 = (double)(float)(dVar5 * (double)(float)(dVar7 - (double)*(float *)(iVar3 + 0x24)));
  fVar1 = (float)(dVar4 - -dVar8);
  fVar2 = (float)(dVar5 - -dVar9);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    dVar5 = -dVar9;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    dVar4 = -dVar8;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((float)(dVar5 - dVar9) < lbl_821CC160) << 2) |
                (uint)(NAN((float)(dVar5 - dVar9)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    dVar9 = dVar5;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((float)(dVar4 - dVar8) < lbl_821CC160) << 2) |
                (uint)(NAN((float)(dVar4 - dVar8)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    dVar8 = dVar4;
  }
  *(float *)(iVar3 + 0x24) = (float)((double)*(float *)(iVar3 + 0x24) + dVar9);
  *(float *)(iVar3 + 0x28) = (float)((double)*(float *)(iVar3 + 0x28) + dVar8);
  fn_82F6A58C();
  return;
}

