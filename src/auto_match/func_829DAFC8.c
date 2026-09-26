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
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_829C7AA8();
extern int fn_829C7FC8();
extern int fn_829C8848();
extern int fn_829C8DF8();
extern int fn_82F655D8();
extern int fn_82F65FB0();
extern int iRam83217a08;
extern int iRam83217a88;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82028800;
extern unsigned int lbl_820570E0;
extern unsigned int lbl_83217B18;
extern unsigned int lbl_83217B20;
extern unsigned int lbl_83217B60;


longlong fn_829DAFC8(undefined8 param_1,double param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  float *in_r7;
  float *in_r8;
  undefined4 *in_r9;
  undefined4 *in_r10;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [21];
  
  if ((((in_r7 == (float *)0x0) || (in_r8 == (float *)0x0)) || (in_r9 == (undefined4 *)0x0)) ||
     (in_r10 == (undefined4 *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    uVar7 = lbl_82002C40;
    if (param_3 == 0) {
      fn_829C7AA8(0,1);
      lVar2 = fn_829C8DF8((double)(float)(param_2 * (double)lbl_8200DFF4),0,1,0);
      if (-1 < lVar2) {
        dVar5 = (double)fn_82F65FB0(param_1);
        dVar9 = (double)(float)dVar5;
        dVar6 = (double)fn_82F65FB0(uVar7);
        dVar5 = (double)(float)(dVar9 / (double)(float)dVar6);
        if ((double)(((U64)(lbl_83217B20) >> 0) & 0xFFFFFFFF) < (double)(float)(dVar9 / (double)(float)dVar6)) {
          dVar5 = (double)(((U64)(lbl_83217B20) >> 0) & 0xFFFFFFFF);
        }
        if (dVar5 < (double)(((U64)(lbl_83217B20) >> 32) & 0xFFFFFFFF)) {
          dVar5 = (double)(((U64)(lbl_83217B20) >> 32) & 0xFFFFFFFF);
        }
        dVar9 = (double)lbl_82028800;
        dVar6 = (double)(float)((double)(((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF) + dVar5);
        if (dVar9 <= (double)(float)((double)(((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF) + dVar5)) {
          dVar6 = dVar9;
        }
        dVar8 = (double)(float)((double)(((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF) + dVar5);
        if (dVar9 <= (double)(float)((double)(((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF) + dVar5)) {
          dVar8 = dVar9;
        }
        if (dVar9 <= dVar5) {
          dVar5 = dVar9;
        }
        dVar9 = (double)lbl_820570E0;
        if (dVar6 <= dVar9) {
          dVar6 = dVar9;
        }
        if (dVar8 <= dVar9) {
          dVar8 = dVar9;
        }
        if (dVar5 <= dVar9) {
          dVar5 = dVar9;
        }
        lVar2 = fn_829C8DF8(dVar5,0,1,7);
        if ((-1 < lVar2) && (lVar2 = fn_829C8DF8(dVar8,0,1,6), -1 < lVar2)) {
          lVar2 = fn_829C8DF8(dVar6,0,1,8);
        }
      }
      fn_829C8848(0,1);
      if ((int)lVar2 < 0) {
        return lVar2;
      }
    }
    fn_829C7AA8(0,1);
    lVar2 = fn_829C7FC8(0,1,0,&fStack_60);
    if (-1 < lVar2) {
      fStack_60 = fStack_60 * lbl_82006848;
      if (lbl_83217B60 == 2) {
        iVar4 = -0x7cde8578;
        iVar3 = iRam83217a88;
      }
      else {
        iVar4 = -0x7cde85f8;
        iVar3 = iRam83217a08;
      }
      fVar1 = *(float *)(iVar3 * 0xc + iVar4);
      if (fStack_60 < fVar1) {
        fStack_60 = fVar1;
      }
      iVar3 = fn_829C7FC8(0,1,7,&fStack_5c);
      if (-1 < iVar3) {
        *in_r8 = fStack_60;
        dVar5 = (double)fn_82F655D8(uVar7,(double)fStack_5c);
        *in_r7 = (float)dVar5;
        *in_r9 = lbl_82015B38;
        *in_r10 = 0;
      }
      lVar2 = fn_829C7FC8(0,1,6,&fStack_58);
      if ((-1 < lVar2) && (lVar2 = fn_829C7FC8(0,1,8,afStack_54), -1 < lVar2)) {
        fn_82F655D8(uVar7,(double)(fStack_58 - fStack_5c));
        fn_82F655D8(uVar7,(double)(afStack_54[0] - fStack_5c));
      }
    }
    fn_829C8848(0,1);
  }
  return lVar2;
}

