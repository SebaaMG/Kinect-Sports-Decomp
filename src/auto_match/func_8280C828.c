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
extern unsigned int *auStack_50;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82809558();
extern int fn_82809CB0();
extern int fn_8280A5E8();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_828105C8();
extern int fn_82810B78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_8201DFF8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_8280C828(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [80];
  
  fn_82810328(param_4,param_2,&fStack_80);
  fn_82810B78(&fStack_80,&fStack_80);
  dVar4 = (double)fn_82810280(param_3,&fStack_80);
  if ((dVar4 <= (double)lbl_8201DFF8) || ((double)lbl_8201DCB8 <= dVar4)) {
    fn_828102A8(&fStack_80,auStack_50);
    fn_82810328(param_3,auStack_50,&uStack_70);
    uVar5 = fn_82810308(&uStack_70);
    iVar3 = fn_8280A5E8();
    dVar8 = (double)lbl_82002AE0;
    dVar4 = (double)lbl_821AAD20;
    dVar9 = dVar8;
    if (iVar3 != 0) {
      dVar6 = (double)fn_82809CB0((double)fStack_80);
      dVar10 = (double)lbl_82002C5C;
      dVar7 = dVar4;
      dVar9 = dVar8;
      dVar11 = dVar4;
      if (((dVar6 < dVar10) ||
          (dVar8 = dVar4, dVar6 = (double)fn_82809CB0((double)fStack_7c), dVar4 = dVar9,
          dVar7 = dVar8, dVar9 = dVar4, dVar11 = dVar8, dVar6 < dVar10)) ||
         (dVar6 = (double)fn_82809CB0((double)fStack_78), dVar4 = dVar8, dVar7 = dVar9,
         dVar11 = dVar8, dVar6 < dVar10)) {
        fn_828105C8(dVar8,dVar4,dVar7,&uStack_70);
        dVar8 = dVar11;
      }
      fn_82810280(&uStack_70,&fStack_80);
      fn_828102A8(&fStack_80,auStack_50);
      fn_82810328(&uStack_70,auStack_50,&uStack_70);
      uVar5 = fn_82810308(&uStack_70);
      dVar4 = dVar8;
    }
    dVar8 = (double)fn_82809558(uVar5);
    fn_828102A8((double)(float)(dVar9 / dVar8),&uStack_70,&uStack_70);
    fn_82810240(&uStack_70,&fStack_80,&uStack_60);
    param_1[8] = fStack_80;
    param_1[4] = uStack_70;
    *param_1 = uStack_60;
    param_1[0xc] = *param_2;
    param_1[1] = uStack_5c;
    param_1[5] = uStack_6c;
    param_1[9] = fStack_7c;
    param_1[0xd] = param_2[1];
    param_1[6] = uStack_68;
    param_1[2] = uStack_58;
    param_1[10] = fStack_78;
    param_1[0xe] = param_2[2];
    param_1[3] = (float)dVar4;
    param_1[7] = (float)dVar4;
    param_1[0xb] = (float)dVar4;
    param_1[0xf] = (float)dVar9;
  }
  else {
    fn_82810240(param_3,&fStack_80,&uStack_60);
    *param_1 = uStack_60;
    fVar2 = lbl_821AAD20;
    fVar1 = lbl_82002AE0;
    param_1[4] = *param_3;
    param_1[8] = fStack_80;
    param_1[0xc] = *param_2;
    param_1[1] = uStack_5c;
    param_1[5] = param_3[1];
    param_1[9] = fStack_7c;
    param_1[0xd] = param_2[1];
    param_1[2] = uStack_58;
    param_1[6] = param_3[2];
    param_1[10] = fStack_78;
    param_1[0xe] = param_2[2];
    param_1[3] = fVar2;
    param_1[7] = fVar2;
    param_1[0xb] = fVar2;
    param_1[0xf] = fVar1;
  }
  return;
}

