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
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826C1FF8();
extern int fn_826C2E00();
extern int fn_82749D00();
extern int fn_82749D70();
extern int fn_82749DE0();
extern unsigned int iStack_100;
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_114;
extern unsigned int iStack_118;
extern unsigned int iStack_11c;
extern unsigned int iStack_120;
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int iStack_12c;
extern unsigned int iStack_130;
extern unsigned int iStack_134;
extern unsigned int iStack_138;
extern unsigned int iStack_13c;
extern unsigned int iStack_140;
extern unsigned int iStack_144;
extern unsigned int iStack_148;
extern unsigned int iStack_14c;
extern unsigned int iStack_150;
extern unsigned int iStack_154;
extern unsigned int iStack_158;
extern unsigned int iStack_15c;
extern unsigned int iStack_160;
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int iStack_7c;
extern unsigned int iStack_9c;
extern unsigned int iStack_ac;
extern unsigned int iStack_bc;
extern unsigned int iStack_dc;
extern unsigned int iStack_ec;
extern unsigned int lbl_82012F50;
extern unsigned int lbl_82012FA8;
extern unsigned int uStack_17c;
extern unsigned int uStack_88;
extern unsigned int uStack_c8;


undefined4 * fn_82749E50(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_190 [4];
  int aiStack_18c [3];
  undefined1 auStack_180 [4];
  undefined1 uStack_17c;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int aiStack_fc [3];
  undefined1 auStack_f0 [4];
  int iStack_ec;
  undefined1 auStack_e0 [4];
  int iStack_dc;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  fn_826C2E00();
  *param_1 = &lbl_82012FA8;
  param_1[4] = &lbl_82012F50;
  auStack_190[0] = 6;
  auStack_180[0] = 2;
  uStack_17c = 0;
  puVar4 = param_1 + 4;
  fn_82681728(&iStack_124,(ulonglong)*param_2 + 0x254,0xffffffff82012f3c);
  fn_826C1FF8(puVar4,param_2,&iStack_124,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_124 + 8) - 1;
  *(int *)(iStack_124 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_124);
  }
  fn_82681728(&iStack_148,(ulonglong)*param_2 + 0x254,0xffffffff82012f28);
  fn_826C1FF8(puVar4,param_2,&iStack_148,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_148 + 8) - 1;
  *(int *)(iStack_148 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_148);
  }
  fn_82681728(&iStack_13c,(ulonglong)*param_2 + 0x254,0xffffffff82012f1c);
  fn_826C1FF8(puVar4,param_2,&iStack_13c,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_13c + 8) - 1;
  *(int *)(iStack_13c + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_13c);
  }
  fn_82681728(&iStack_138,(ulonglong)*param_2 + 0x254,0xffffffff82012f0c);
  fn_826C1FF8(puVar4,param_2,&iStack_138,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_138 + 8) - 1;
  *(int *)(iStack_138 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_138);
  }
  fn_82681728(&iStack_164,(ulonglong)*param_2 + 0x254,0xffffffff82012ef8);
  fn_826C1FF8(puVar4,param_2,&iStack_164,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_164 + 8) - 1;
  *(int *)(iStack_164 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_164);
  }
  fn_82681728(&iStack_130,(ulonglong)*param_2 + 0x254,0xffffffff82012ef0);
  fn_826C1FF8(puVar4,param_2,&iStack_130,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_130 + 8) - 1;
  *(int *)(iStack_130 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_130);
  }
  fn_82681728(&iStack_15c,(ulonglong)*param_2 + 0x254,0xffffffff82012ee8);
  fn_826C1FF8(puVar4,param_2,&iStack_15c,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_15c + 8) - 1;
  *(int *)(iStack_15c + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_15c);
  }
  fn_82681728(&iStack_128,(ulonglong)*param_2 + 0x254,0xffffffff82012edc);
  fn_826C1FF8(puVar4,param_2,&iStack_128,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_128 + 8) - 1;
  *(int *)(iStack_128 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_128);
  }
  fn_82681728(&iStack_154,(ulonglong)*param_2 + 0x254,0xffffffff82012ec8);
  fn_826C1FF8(puVar4,param_2,&iStack_154,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_154 + 8) - 1;
  *(int *)(iStack_154 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_154);
  }
  fn_82681728(&iStack_120,(ulonglong)*param_2 + 0x254,0xffffffff82012eb4);
  fn_826C1FF8(puVar4,param_2,&iStack_120,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_120 + 8) - 1;
  *(int *)(iStack_120 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_120);
  }
  fn_82681728(&iStack_14c,(ulonglong)*param_2 + 0x254,0xffffffff82012ea0);
  fn_826C1FF8(puVar4,param_2,&iStack_14c,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_14c + 8) - 1;
  *(int *)(iStack_14c + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_14c);
  }
  fn_82681728(&iStack_118,(ulonglong)*param_2 + 0x254,0xffffffff82012e8c);
  fn_826C1FF8(puVar4,param_2,&iStack_118,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_118 + 8) - 1;
  *(int *)(iStack_118 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_118);
  }
  fn_82681728(&iStack_144,(ulonglong)*param_2 + 0x254,0xffffffff82012e7c);
  fn_826C1FF8(puVar4,param_2,&iStack_144,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_144 + 8) - 1;
  *(int *)(iStack_144 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_144);
  }
  fn_82681728(&iStack_110,(ulonglong)*param_2 + 0x254,0xffffffff82012e70);
  fn_826C1FF8(puVar4,param_2,&iStack_110,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_110 + 8) - 1;
  *(int *)(iStack_110 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_110);
  }
  fn_82681728(&iStack_108,(ulonglong)*param_2 + 0x254,0xffffffff82012e58);
  fn_826C1FF8(puVar4,param_2,&iStack_108,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_108 + 8) - 1;
  *(int *)(iStack_108 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_108);
  }
  fn_82681728(aiStack_18c,(ulonglong)*param_2 + 0x254,0xffffffff821bcca4);
  iVar1 = aiStack_18c[0];
  auStack_a0[0] = 5;
  iStack_9c = aiStack_18c[0];
  *(int *)(aiStack_18c[0] + 8) = *(int *)(aiStack_18c[0] + 8) + 1;
  fn_82681728(&iStack_114,(ulonglong)*param_2 + 0x254,0xffffffff82012e4c);
  fn_826C1FF8(puVar4,param_2,&iStack_114,auStack_a0,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_114 + 8) - 1;
  *(int *)(iStack_114 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_114);
  }
  fn_82696330(auStack_a0);
  lVar3 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
  *(int *)(iVar1 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iVar1);
  }
  piVar2 = (int *)fn_82749D00(&iStack_104,param_2);
  auStack_80[0] = 5;
  iStack_7c = *piVar2;
  *(int *)(iStack_7c + 8) = *(int *)(iStack_7c + 8) + 1;
  fn_82681728(&iStack_134,(ulonglong)*param_2 + 0x254,0xffffffff82012e3c);
  fn_826C1FF8(puVar4,param_2,&iStack_134,auStack_80,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_134 + 8) - 1;
  *(int *)(iStack_134 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_134);
  }
  fn_82696330(auStack_80);
  lVar3 = (ulonglong)*(uint *)(iStack_104 + 8) - 1;
  *(int *)(iStack_104 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_104);
  }
  piVar2 = (int *)fn_82749D70(aiStack_fc,param_2);
  auStack_c0[0] = 5;
  iStack_bc = *piVar2;
  *(int *)(iStack_bc + 8) = *(int *)(iStack_bc + 8) + 1;
  fn_82681728(&iStack_11c,(ulonglong)*param_2 + 0x254,0xffffffff82012e38);
  fn_826C1FF8(puVar4,param_2,&iStack_11c,auStack_c0,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_11c + 8) - 1;
  *(int *)(iStack_11c + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_11c);
  }
  fn_82696330(auStack_c0);
  lVar3 = (ulonglong)*(uint *)(aiStack_fc[0] + 8) - 1;
  *(int *)(aiStack_fc[0] + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(aiStack_fc[0]);
  }
  uStack_88 = 1;
  auStack_90[0] = 4;
  fn_82681728(&iStack_12c,(ulonglong)*param_2 + 0x254,0xffffffff82012e24);
  fn_826C1FF8(puVar4,param_2,&iStack_12c,auStack_90,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_12c + 8) - 1;
  *(int *)(iStack_12c + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_12c);
  }
  fn_82696330(auStack_90);
  fn_82681728(aiStack_18c,(ulonglong)*param_2 + 0x254,0xffffffff82012e18);
  iVar1 = aiStack_18c[0];
  auStack_f0[0] = 5;
  iStack_ec = aiStack_18c[0];
  *(int *)(aiStack_18c[0] + 8) = *(int *)(aiStack_18c[0] + 8) + 1;
  fn_82681728(&iStack_10c,(ulonglong)*param_2 + 0x254,0xffffffff82012e0c);
  fn_826C1FF8(puVar4,param_2,&iStack_10c,auStack_f0,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_10c + 8) - 1;
  *(int *)(iStack_10c + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_10c);
  }
  fn_82696330(auStack_f0);
  lVar3 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
  *(int *)(iVar1 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iVar1);
  }
  fn_82681728(aiStack_18c,(ulonglong)*param_2 + 0x254,0xffffffff821cdae4);
  auStack_e0[0] = 5;
  iStack_dc = aiStack_18c[0];
  *(int *)(aiStack_18c[0] + 8) = *(int *)(aiStack_18c[0] + 8) + 1;
  fn_82681728(&iStack_170,(ulonglong)*param_2 + 0x254,0xffffffff82012e00);
  fn_826C1FF8(puVar4,param_2,&iStack_170,auStack_e0,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_170 + 8) - 1;
  *(int *)(iStack_170 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_170);
  }
  fn_82696330(auStack_e0);
  lVar3 = (ulonglong)*(uint *)(aiStack_18c[0] + 8) - 1;
  *(int *)(aiStack_18c[0] + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(aiStack_18c[0]);
  }
  auStack_d0[0] = 4;
  uStack_c8 = 0x48;
  fn_82681728(&iStack_140,(ulonglong)*param_2 + 0x254,0xffffffff82012df4);
  fn_826C1FF8(puVar4,param_2,&iStack_140,auStack_d0,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_140 + 8) - 1;
  *(int *)(iStack_140 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_140);
  }
  fn_82696330(auStack_d0);
  piVar2 = (int *)fn_82749DE0(&iStack_100,param_2);
  auStack_b0[0] = 5;
  iStack_ac = *piVar2;
  *(int *)(iStack_ac + 8) = *(int *)(iStack_ac + 8) + 1;
  fn_82681728(&iStack_16c,(ulonglong)*param_2 + 0x254,0xffffffff82012dec);
  fn_826C1FF8(puVar4,param_2,&iStack_16c,auStack_b0,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_16c + 8) - 1;
  *(int *)(iStack_16c + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_16c);
  }
  fn_82696330(auStack_b0);
  lVar3 = (ulonglong)*(uint *)(iStack_100 + 8) - 1;
  *(int *)(iStack_100 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_100);
  }
  fn_82681728(&iStack_168,(ulonglong)*param_2 + 0x254,0xffffffff82012dd8);
  fn_826C1FF8(puVar4,param_2,&iStack_168,auStack_180,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_168 + 8) - 1;
  *(int *)(iStack_168 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_168);
  }
  auStack_70[0] = 10;
  fn_82681728(&iStack_160,(ulonglong)*param_2 + 0x254,0xffffffff82012dc4);
  fn_826C1FF8(puVar4,param_2,&iStack_160,auStack_70,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_160 + 8) - 1;
  *(int *)(iStack_160 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_160);
  }
  fn_82696330(auStack_70);
  auStack_60[0] = 10;
  fn_82681728(&iStack_158,(ulonglong)*param_2 + 0x254,0xffffffff82012db0);
  fn_826C1FF8(puVar4,param_2,&iStack_158,auStack_60,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_158 + 8) - 1;
  *(int *)(iStack_158 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_158);
  }
  fn_82696330(auStack_60);
  auStack_50[0] = 10;
  fn_82681728(&iStack_150,(ulonglong)*param_2 + 0x254,0xffffffff82012da0);
  fn_826C1FF8(puVar4,param_2,&iStack_150,auStack_50,auStack_190);
  lVar3 = (ulonglong)*(uint *)(iStack_150 + 8) - 1;
  *(int *)(iStack_150 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iStack_150);
  }
  fn_82696330(auStack_50);
  fn_82696330(auStack_180);
  return param_1;
}

