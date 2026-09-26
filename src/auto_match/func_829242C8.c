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
extern unsigned int *auStack_90;
extern int fn_8262FE50();
extern int fn_8263CB48();
extern int fn_8263CB90();
extern int fn_82923D40();
extern int fn_82F68CC0();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


undefined8
fn_829242C8(int *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             ulonglong param_5,undefined4 param_6,ulonglong param_7)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint auStack_90 [4];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  
  if (*param_1 != 0) {
    fn_82923D40();
  }
  fn_8263CB48(param_3,auStack_90);
  if ((param_5 & 0xffffffff) == 0) {
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c0 = 0;
    uStack_c8 = uStack_80;
    uStack_c4 = uStack_7c;
    uStack_bc = uStack_78;
LAB_829243fc:
    bVar2 = false;
  }
  else {
    fn_82F68CC0(&uStack_d0,param_5,0x18);
    if ((((uStack_80 < uStack_c8) || (uStack_c8 < uStack_d0)) || (uStack_7c < uStack_c4)) ||
       (((uStack_c4 < uStack_cc || (uStack_78 < uStack_bc)) || (uStack_bc < uStack_c0)))) {
      return 0xffffffff8876086c;
    }
    if (((uStack_d0 == 0) && (uStack_c8 == uStack_80)) &&
       ((uStack_cc == 0 &&
        (((uStack_c4 == uStack_7c && (uStack_c0 == 0)) && (uStack_bc == uStack_78))))))
    goto LAB_829243fc;
    bVar2 = true;
  }
  uVar8 = uStack_bc;
  uVar7 = uStack_c0;
  uVar6 = uStack_c4;
  uVar5 = uStack_c8;
  uVar4 = uStack_cc;
  uVar3 = uStack_d0;
  lVar9 = (param_7 & 1) << 4;
  if (bVar2) {
    uVar1 = auStack_90[0] & 0xfffffe3f;
    if ((int)uVar1 < 0x1a20000b) {
LAB_829245fc:
      fn_82F68CC0(&uStack_b0,&uStack_d0,0x18);
    }
    else {
      if ((int)uVar1 < 0x1a20000d) {
        uStack_b0 = uStack_d0 & 0xfffffffe;
        uStack_a8 = uStack_c8 + 1 & 0xfffffffe;
        uStack_ac = uStack_cc;
        uStack_a4 = uStack_c4;
        if (uStack_80 < uStack_a8) {
          uStack_a8 = uStack_80;
        }
      }
      else {
        if (((int)uVar1 < 0x1a200012) || (0x1a200014 < (int)uVar1)) goto LAB_829245fc;
        uStack_a8 = uStack_c8 + 3 & 0xfffffffc;
        uStack_b0 = uStack_d0 & 0xfffffffc;
        uStack_ac = uStack_cc & 0xfffffffc;
        uStack_a4 = uStack_c4 + 3 & 0xfffffffc;
        if (uStack_80 < uStack_a8) {
          uStack_a8 = uStack_80;
        }
        if (uStack_7c < uStack_a4) {
          uStack_a4 = uStack_7c;
        }
      }
      uStack_a0 = uStack_c0;
      uStack_9c = uStack_bc;
      if (((uStack_b0 == 0) && (uStack_a8 == uStack_80)) &&
         ((uStack_ac == 0 &&
          (((uStack_a4 == uStack_7c && (uStack_c0 == 0)) && (uStack_bc == uStack_78))))))
      goto LAB_82924610;
    }
    fn_8263CB90(param_3,&uStack_e0,&uStack_b0,lVar9);
    uStack_d0 = uVar3 - uStack_b0;
    uStack_c8 = uVar5 - uStack_b0;
    uStack_cc = uVar4 - uStack_ac;
    uStack_c0 = uVar7 - uStack_a0;
    uStack_c4 = uVar6 - uStack_ac;
    uStack_bc = uVar8 - uStack_a0;
  }
  else {
LAB_82924610:
    fn_8263CB90(param_3,&uStack_e0,0,lVar9);
  }
  *param_2 = uStack_d8;
  param_2[1] = auStack_90[0];
  param_2[2] = uStack_e0;
  param_2[3] = uStack_dc;
  param_2[4] = 0;
  param_2[6] = uStack_80;
  param_2[5] = 0;
  param_2[7] = uStack_7c;
  param_2[8] = 0;
  param_2[9] = uStack_78;
  fn_82F68CC0(param_2 + 10,&uStack_d0,0x18);
  param_2[0x13] = param_6;
  param_2[0x14] = param_4;
  param_2[0x10] = 1;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *param_1 = (int)param_3;
  fn_8262FE50(param_3);
  return 0;
}

