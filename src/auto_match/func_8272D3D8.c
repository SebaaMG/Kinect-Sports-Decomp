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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_bc;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d8;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern int fn_82681898();
extern int fn_8268CCB0();
extern int fn_8268D008();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_8269BAF8();
extern int fn_8279B2C8();
extern int fn_827A0C20();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005728;
extern unsigned int lbl_82005730;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_f0;


bool fn_8272D3D8(int *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar4;
  undefined8 uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar5;
  bool bVar6;
  double dVar7;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  longlong lStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  if ((param_2 & 0xffffffff) == 0) {
    iStack_b0 = param_1[0x11];
    iStack_ac = param_1[0x12];
    iStack_a8 = param_1[0x13];
    iStack_a4 = param_1[0x14];
    iStack_a0 = param_1[0x15];
    iStack_9c = param_1[0x16];
    uVar1 = (**(code **)(*param_1 + 0x5c))(param_1);
    dVar7 = (double)fn_826972E0(param_3,uVar1);
    dVar7 = dVar7 * lbl_82005728;
    fStack_e8 = (float)dVar7;
    fStack_e4 = fStack_e8;
    fn_8268D008(&iStack_b0,&fStack_c8,&fStack_e8);
    fStack_e8 = fStack_c8;
    fStack_e4 = (float)uStack_c4;
    pfVar2 = (float *)fn_827A0C20(param_1[0x28]);
    fStack_e8 = fStack_e8 - *pfVar2;
    fn_8268CCB0(&iStack_b0,&fStack_d8,&fStack_e8);
    fStack_e8 = fStack_d8;
    auStack_50[0] = 0;
    fStack_e4 = (float)uStack_d4;
    fn_82681898((double)(fStack_d8 * lbl_82005718),auStack_50);
    cVar4 = fn_8269BAF8(param_1,0,auStack_50,0);
    if (cVar4 != '\0') {
      if ((int *)param_1[0x21] != (int *)0x0) {
        if (dVar7 <= lbl_82005710) {
          dVar7 = dVar7 - lbl_82005730;
        }
        else {
          dVar7 = dVar7 + lbl_82005730;
        }
        lStack_e0 = (longlong)(int)dVar7;
        *(int *)param_1[0x21] = (int)dVar7;
      }
      fn_82696330(auStack_50);
      return true;
    }
    fn_82696330(auStack_50);
    return false;
  }
  if ((param_2 & 0xffffffff) == 1) {
    uVar1 = (**(code **)(*param_1 + 0x5c))(param_1);
    dVar7 = (double)fn_826972E0(param_3,uVar1);
    iStack_90 = param_1[0x11];
    iStack_8c = param_1[0x12];
    iStack_88 = param_1[0x13];
    iStack_84 = param_1[0x14];
    dVar7 = dVar7 * lbl_82005728;
    uStack_f0 = lbl_821AAD20;
    iStack_80 = param_1[0x15];
    iStack_7c = param_1[0x16];
    fStack_ec = (float)dVar7;
    fn_8268D008(&iStack_90,&uStack_d0,&uStack_f0);
    uStack_f0 = uStack_d0;
    fStack_ec = fStack_cc;
    iVar3 = fn_827A0C20(param_1[0x28]);
    fStack_ec = fStack_ec - *(float *)(iVar3 + 4);
    fn_8268CCB0(&iStack_90,&uStack_c0,&uStack_f0);
    fStack_ec = fStack_bc;
    auStack_40[0] = 0;
    uStack_f0 = uStack_c0;
    fn_82681898((double)(fStack_bc * lbl_82005718),auStack_40);
    cVar4 = fn_8269BAF8(param_1,1,auStack_40,0);
    if (cVar4 == '\0') {
      bVar6 = false;
    }
    else {
      if (param_1[0x21] != 0) {
        if (dVar7 <= lbl_82005710) {
          dVar7 = dVar7 - lbl_82005730;
        }
        else {
          dVar7 = dVar7 + lbl_82005730;
        }
        lStack_e0 = (longlong)(int)dVar7;
        *(int *)(param_1[0x21] + 4) = (int)dVar7;
      }
      bVar6 = true;
    }
    fn_82696330(auStack_40);
    return bVar6;
  }
  if (3 < (param_2 & 0xffffffff)) {
    if ((param_2 & 0xffffffff) == 8) {
      uVar1 = (**(code **)(*param_1 + 0x5c))(param_1);
      dVar7 = (double)fn_826972E0(param_3,uVar1);
      pfVar2 = (float *)fn_827A0C20(param_1[0x28]);
      fStack_54 = pfVar2[3];
      fStack_5c = pfVar2[1];
      pfVar5 = &fStack_60;
      fStack_60 = *pfVar2;
      fStack_58 = (float)(dVar7 * lbl_82005728) + fStack_60;
LAB_8272d528:
      fn_8279B2C8(param_1[0x28],pfVar5,1);
      (**(code **)(*param_1 + 0x13c))(param_1);
      return true;
    }
    if ((param_2 & 0xffffffff) == 9) {
      uVar1 = (**(code **)(*param_1 + 0x5c))(param_1);
      dVar7 = (double)fn_826972E0(param_3,uVar1);
      pfVar2 = (float *)fn_827A0C20(param_1[0x28]);
      fStack_6c = pfVar2[1];
      fStack_68 = pfVar2[2];
      fStack_70 = *pfVar2;
      pfVar5 = &fStack_70;
      fStack_64 = (float)(dVar7 * lbl_82005728) + fStack_6c;
      goto LAB_8272d528;
    }
    if ((param_2 & 0xffffffff) != 10) goto LAB_8272d438;
  }
  (**(code **)(*param_1 + 0x13c))(param_1);
LAB_8272d438:
  cVar4 = fn_8269BAF8(param_1,param_2,param_3,param_4);
  return cVar4 != '\0';
}

