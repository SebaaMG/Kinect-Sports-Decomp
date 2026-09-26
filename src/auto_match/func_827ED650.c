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
extern unsigned int *auStack_130;
extern unsigned int *auStack_148;
extern unsigned int *auStack_1e8;
extern unsigned int *auStack_1f4;
extern unsigned int *auStack_200;
extern unsigned int *auStack_20c;
extern unsigned int *auStack_218;
extern unsigned int *auStack_224;
extern unsigned int *auStack_230;
extern unsigned int *auStack_250;
extern unsigned int *auStack_260;
extern unsigned int *auStack_270;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_100;
extern unsigned int fStack_150;
extern unsigned int fStack_154;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern unsigned int fStack_164;
extern unsigned int fStack_168;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern unsigned int fStack_174;
extern unsigned int fStack_178;
extern unsigned int fStack_17c;
extern unsigned int fStack_180;
extern unsigned int fStack_184;
extern unsigned int fStack_188;
extern unsigned int fStack_18c;
extern unsigned int fStack_190;
extern unsigned int fStack_194;
extern unsigned int fStack_198;
extern unsigned int fStack_19c;
extern unsigned int fStack_1a0;
extern unsigned int fStack_1b4;
extern unsigned int fStack_1b8;
extern unsigned int fStack_1bc;
extern unsigned int fStack_1c4;
extern unsigned int fStack_1c8;
extern unsigned int fStack_1cc;
extern unsigned int fStack_288;
extern unsigned int fStack_28c;
extern unsigned int fStack_290;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_827EC650();
extern int fn_827ECDC0();
extern int fn_827EF590();
extern int fn_82809CB0();
extern int fn_8280A5E8();
extern int fn_8280AF20();
extern int fn_8280CB70();
extern int fn_8280FC78();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810530();
extern int fn_82810558();
extern int fn_82810B78();
extern int fn_8281CAE8();
extern int fn_8281CFC8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1d0;
extern unsigned int uStack_238;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;


undefined8
fn_827ED650(float *param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined1 auStack_230 [12];
  undefined1 auStack_224 [12];
  undefined1 auStack_218 [12];
  undefined1 auStack_20c [12];
  undefined1 auStack_200 [12];
  undefined1 auStack_1f4 [12];
  undefined1 auStack_1e8 [24];
  undefined4 uStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined4 uStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [48];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [128];
  
  fn_82810328(param_4,param_1,auStack_148);
  fn_8281CAE8(param_3,auStack_148,&fStack_290);
  dVar3 = (double)fn_82809CB0((double)fStack_290);
  if ((((double)*param_2 < dVar3) ||
      (dVar3 = (double)fn_82809CB0((double)fStack_28c), (double)param_2[1] < dVar3)) ||
     (dVar3 = (double)fn_82809CB0((double)fStack_288), (double)param_2[2] < dVar3)) {
    iVar2 = fn_8280A5E8((double)*param_5);
    if (((iVar2 == 0) && (iVar2 = fn_8280A5E8((double)*param_5), iVar2 == 0)) &&
       (iVar2 = fn_8280A5E8((double)*param_5), iVar2 == 0)) {
      fn_8280FC78(param_3,auStack_130);
      fStack_100 = *param_1 - *param_4;
      fStack_fc = param_1[1] - param_4[1];
      fStack_f8 = param_1[2] - param_4[2];
      fn_827EF590(param_5,&uStack_240);
      uStack_1d0 = uStack_240;
      dVar3 = (double)lbl_821AAD20;
      fStack_1bc = lbl_821AAD20;
      fStack_1c8 = lbl_821AAD20;
      fStack_1b4 = lbl_821AAD20;
      fStack_1cc = lbl_821AAD20;
      fStack_1b8 = lbl_821AAD20;
      fStack_1c4 = lbl_821AAD20;
      uStack_1c0 = uStack_23c;
      uStack_1b0 = uStack_238;
      fn_8281CFC8(&uStack_1d0,param_6,auStack_f0);
      fn_8280FC78(auStack_f0,auStack_80);
      fn_8280CB70(auStack_80,auStack_130,auStack_c0);
      if ((double)fStack_290 < dVar3) {
        fStack_1a0 = -*param_2;
      }
      else {
        fStack_1a0 = *param_2;
      }
      if ((double)fStack_28c < dVar3) {
        fStack_19c = -param_2[1];
      }
      else {
        fStack_19c = param_2[1];
      }
      fStack_198 = param_2[2];
      if ((double)fStack_288 < dVar3) {
        fStack_198 = -fStack_198;
      }
      fStack_190 = -fStack_19c;
      fStack_180 = -fStack_198;
      fStack_170 = -fStack_1a0;
      fStack_194 = fStack_1a0;
      fStack_18c = fStack_198;
      fStack_188 = fStack_1a0;
      fStack_184 = fStack_19c;
      fStack_17c = fStack_1a0;
      fStack_178 = fStack_190;
      fStack_174 = fStack_180;
      fStack_16c = fStack_19c;
      fStack_168 = fStack_198;
      fStack_164 = fStack_170;
      fStack_160 = fStack_190;
      fStack_15c = fStack_198;
      fStack_158 = fStack_170;
      fStack_154 = fStack_19c;
      fStack_150 = fStack_180;
      fn_8280AF20(auStack_c0,&fStack_1a0,auStack_230,7);
      fn_82810530(auStack_230,auStack_2a0);
      fn_82810328(auStack_224,auStack_230,auStack_260);
      fn_82810328(auStack_218,auStack_230,auStack_250);
      fn_82810240(auStack_260,auStack_250,auStack_2b0);
      fn_82810B78(auStack_2b0,auStack_2b0);
      fn_82810280(auStack_2a0,auStack_2b0);
      dVar3 = (double)fn_82809CB0();
      dVar4 = (double)lbl_82002AE0;
      if (dVar3 <= dVar4) {
        dVar3 = (double)fn_82810280(auStack_2a0,auStack_2b0);
        fn_82810558(-dVar3,auStack_2b0,auStack_2a0);
        iVar2 = fn_827ECDC0(auStack_280,auStack_260,auStack_250,auStack_2b0);
        if (((iVar2 != 0) || (iVar2 = fn_827EC650(auStack_230,auStack_224), iVar2 != 0)) ||
           ((iVar2 = fn_827EC650(auStack_230,auStack_218), iVar2 != 0 ||
            ((iVar2 = fn_827EC650(auStack_20c,auStack_224), iVar2 != 0 ||
             (iVar2 = fn_827EC650(auStack_20c,auStack_218), iVar2 != 0)))))) goto LAB_827ed6d4;
      }
      fn_82810328(auStack_200,auStack_230,auStack_270);
      fn_82810240(auStack_260,auStack_270,auStack_2b0);
      fn_82810B78(auStack_2b0,auStack_2b0);
      fn_82810280(auStack_2a0,auStack_2b0);
      dVar3 = (double)fn_82809CB0();
      if (dVar3 <= dVar4) {
        dVar3 = (double)fn_82810280(auStack_2a0,auStack_2b0);
        fn_82810558(-dVar3,auStack_2b0,auStack_2a0);
        iVar2 = fn_827ECDC0(auStack_280,auStack_260,auStack_270,auStack_2b0);
        if ((((iVar2 != 0) || (iVar2 = fn_827EC650(auStack_1f4,auStack_224), iVar2 != 0)) ||
            (iVar2 = fn_827EC650(auStack_1f4,auStack_200), iVar2 != 0)) ||
           (iVar2 = fn_827EC650(auStack_230,auStack_200), iVar2 != 0)) goto LAB_827ed6d4;
      }
      fn_82810240(auStack_250,auStack_270,auStack_2b0);
      fn_82810B78(auStack_2b0,auStack_2b0);
      fn_82810280(auStack_2a0,auStack_2b0);
      dVar3 = (double)fn_82809CB0();
      if (dVar3 <= dVar4) {
        dVar3 = (double)fn_82810280(auStack_2a0,auStack_2b0);
        fn_82810558(-dVar3,auStack_2b0,auStack_2a0);
        iVar2 = fn_827ECDC0(auStack_280,auStack_250,auStack_270,auStack_2b0);
        if (((iVar2 != 0) || (iVar2 = fn_827EC650(auStack_1e8,auStack_200), iVar2 != 0)) ||
           (iVar2 = fn_827EC650(auStack_1e8,auStack_218), iVar2 != 0)) goto LAB_827ed6d4;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_827ed6d4:
    uVar1 = 1;
  }
  return uVar1;
}

