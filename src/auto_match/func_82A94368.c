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
extern unsigned int *auStack_128;
extern unsigned int *auStack_c0;
extern int fn_8262FFB0();
extern int fn_8263AB38();
extern int fn_8263B0F8();
extern int fn_8263B758();
extern int fn_8263C708();
extern int fn_8263CA78();
extern int fn_8263CB48();
extern int fn_82A940E8();
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_130;
extern unsigned int iStack_134;
extern unsigned int iStack_138;
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_70;
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_90;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_d0;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int lbl_821A7F10;
extern unsigned int uStack_12c;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


void fn_82A94368(uint *param_1,ulonglong param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uStack_140;
  uint uStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  uint uStack_12c;
  undefined1 auStack_128 [8];
  int aiStack_120 [4];
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int aiStack_100 [4];
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int aiStack_e0 [4];
  int iStack_d0;
  int iStack_c8;
  int iStack_c4;
  uint auStack_c0 [4];
  int iStack_b0;
  int iStack_a8;
  int iStack_a4;
  int aiStack_a0 [4];
  int iStack_90;
  int iStack_88;
  int iStack_84;
  int aiStack_80 [4];
  int iStack_70;
  int iStack_68;
  int iStack_64;
  int aiStack_60 [4];
  int iStack_50;
  int iStack_48;
  
  iStack_138 = 0;
  iVar4 = fn_8262FFB0();
  *param_3 = iVar4;
  uVar5 = param_2;
  puVar6 = param_1;
  if (iVar4 == 3) {
    fn_8263B758(param_1,param_2,aiStack_a0);
    param_3[3] = 1;
    iStack_70 = iStack_90;
    aiStack_80[0] = aiStack_a0[0];
    iStack_10c = iStack_84;
    iStack_48 = iStack_88;
LAB_82a945a8:
    param_3[0xe] = iStack_70;
    param_3[4] = aiStack_80[0];
LAB_82a945b0:
    param_3[2] = iStack_10c;
  }
  else {
    if (iVar4 == 4) {
      fn_8263CA78(param_1,auStack_c0);
      param_3[3] = 1;
      param_3[0xe] = iStack_b0;
      param_3[1] = iStack_a8;
      param_3[2] = iStack_a4;
      param_3[4] = auStack_c0[0];
      if ((*param_1 & 0x40000000) == 0) {
        bVar1 = (&lbl_821A7F10)[auStack_c0[0] & 0x3f];
        param_3[8] = iStack_a8;
        param_3[9] = iStack_a4;
        param_3[10] = 1;
        uVar2 = (uint)(bVar1 >> 3);
        param_3[7] = (uint)bVar1;
        param_3[0xb] = uVar2;
        param_3[5] = (param_1[6] & 0x3fff) * uVar2;
        uVar2 = param_1[0xb];
        param_3[0xc] = 0;
        param_3[0xd] = 1;
        param_3[6] = uVar2;
        return;
      }
      puVar6 = (uint *)param_1[6];
      uVar5 = (ulonglong)(param_1[7] >> 0x1c);
      goto LAB_82a945b8;
    }
    if (iVar4 == 0x10) {
      fn_8263CB48(param_1,aiStack_100);
      param_3[0xe] = 0;
      param_3[3] = iStack_e8;
      param_3[4] = aiStack_100[0];
      param_3[1] = iStack_f0;
      param_3[2] = iStack_ec;
      puVar6 = (uint *)param_1[6];
      uVar5 = (ulonglong)(param_1[7] >> 0x1c);
      goto LAB_82a945b8;
    }
    if (iVar4 == 0x11) {
      fn_8263C708(param_1,param_2,aiStack_120);
      param_3[0xe] = 0;
      param_3[3] = iStack_108;
      param_3[4] = aiStack_120[0];
      iStack_48 = iStack_110;
      goto LAB_82a945b0;
    }
    if (iVar4 == 0x12) {
      fn_8263B758(param_1,param_2,aiStack_e0);
      param_3[1] = iStack_c8;
      param_3[2] = iStack_c4;
      param_3[3] = param_1[9] >> 0x1a;
      param_3[4] = aiStack_e0[0];
      param_3[0xe] = iStack_d0;
      goto LAB_82a945b8;
    }
    if (iVar4 == 0x13) {
      fn_8263B758(param_1,param_2,aiStack_80);
      param_3[3] = 1;
      iStack_10c = iStack_64;
      iStack_48 = iStack_68;
      goto LAB_82a945a8;
    }
    if (iVar4 != 0x14) {
      return;
    }
    fn_8263B758(param_1,param_2,aiStack_60);
    param_3[2] = 1;
    param_3[3] = 1;
    param_3[4] = aiStack_60[0];
    param_3[0xe] = iStack_50;
  }
  param_3[1] = iStack_48;
LAB_82a945b8:
  bVar1 = (&lbl_821A7F10)[param_3[4] & 0x3fU];
  param_3[0xd] = 0;
  param_3[7] = (uint)bVar1;
  fn_8263AB38(param_3[4] & 0x3fU,&uStack_12c,&uStack_140);
  fn_82A940E8(&iStack_134,&uStack_13c,&iStack_130,&iStack_138,puVar6,uVar5);
  uVar2 = uStack_140;
  uVar7 = (ulonglong)uStack_140;
  if ((((((uVar5 & 0xffffffff) == 0) && (uVar3 = puVar6[0xc], (uVar3 & 0x600) == 0x200)) &&
       ((puVar6[7] & 0x80000000) == 0)) &&
      (((puVar6[8] & 0x400) == 0 && ((uVar3 & 0xfffff000) == 0)))) &&
     (((uVar3 & 0x800) == 0 && ((puVar6[10] & 0x80000000) == 0)))) {
    fn_8263B0F8(puVar6,auStack_128,&uStack_140,&uStack_13c);
    uStack_13c = (uStack_140 + uVar2) - 1 & ~(uVar2 - 1);
  }
  iVar4 = (int)(((longlong)param_3[7] * (longlong)iStack_134 & 0xffffffffU) >> 3);
  param_3[5] = iVar4;
  param_3[6] = iVar4 * uStack_13c;
  if ((((iStack_130 != 0) || (1 < (param_2 & 0xffffffff))) ||
      (iVar4 = fn_8262FFB0(puVar6), iVar4 != 3)) && (iVar4 = fn_8262FFB0(puVar6), iVar4 != 0x11))
  {
    param_3[6] = param_3[6] + 0xfffU & 0xfffff000;
  }
  param_3[0xc] = (int)(puVar6[10] << 0xd | puVar6[10] >> 0x13) >> 0x1a;
  if (iStack_130 != 0) {
    param_3[0xd] = param_3[0xd] | 1;
  }
  if (iStack_138 != 0) {
    param_3[0xd] = param_3[0xd] | 2;
  }
  if ((puVar6[10] & 0x80000000) != 0) {
    param_3[0xd] = param_3[0xd] | 8;
  }
  trapWord(6,uVar7,0);
  trapWord(6,(ulonglong)uStack_12c,0);
  param_3[10] = param_3[3];
  param_3[8] = (int)((((ulonglong)(uint)param_3[1] + (ulonglong)uStack_12c) - 1 & 0xffffffff) /
                    (ulonglong)uStack_12c);
  param_3[5] = param_3[5] * uVar2;
  param_3[9] = (int)((((uint)param_3[2] + uVar7) - 1 & 0xffffffff) / uVar7);
  param_3[0xb] = param_3[7] * uStack_12c * uVar2 >> 3;
  return;
}

