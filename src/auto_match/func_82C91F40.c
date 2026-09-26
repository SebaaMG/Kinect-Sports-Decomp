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
extern unsigned int *auStack_224;
extern unsigned int *auStack_238;
extern unsigned int *auStack_240;
extern int fn_82CAD120();
extern int fn_82F691F0();
extern unsigned int iStack_13c;
extern unsigned int iStack_150;
extern unsigned int iStack_178;
extern unsigned int iStack_18c;
extern unsigned int iStack_1b4;
extern unsigned int iStack_1c8;
extern unsigned int iStack_1dc;
extern unsigned int iStack_1f8;
extern unsigned int iStack_204;
extern unsigned int iStack_208;
extern unsigned int iStack_20c;
extern unsigned int iStack_214;
extern unsigned int iStack_218;
extern unsigned int iStack_21c;
extern unsigned int iStack_b8;
extern unsigned int iStack_cc;
extern unsigned int iStack_f4;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_194;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1fc;
extern unsigned int uStack_200;
extern unsigned int uStack_210;
extern unsigned int uStack_228;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82C91F40(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 auStack_240 [2];
  undefined4 auStack_238 [4];
  undefined4 uStack_228;
  undefined4 auStack_224 [2];
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  undefined4 uStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  int aiStack_1f4 [5];
  int *piStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int *piStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 *puStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int *piStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int *piStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int *piStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *piStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 *puStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 *puStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 *puStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 *puStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  
  uStack_1d4 = *(undefined4 *)(param_1 + 0xe4);
  iStack_13c = *(int *)(param_1 + 0xe0);
  piStack_1e0 = aiStack_1f4;
  iStack_1dc = *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec0);
  uStack_1c0 = *(undefined4 *)(param_1 + 0xe8);
  piStack_1cc = &iStack_204;
  iStack_1c8 = iStack_13c + *(int *)(param_1 + 0xec4);
  uStack_1d8 = 0;
  piStack_1b8 = &iStack_1f8;
  uStack_1d0 = 0;
  puStack_1a4 = &uStack_200;
  iStack_1b4 = iStack_13c + *(int *)(param_1 + 0xec8);
  uStack_1c4 = 0;
  piStack_190 = &iStack_20c;
  uStack_1a0 = *(undefined4 *)(param_1 + 0xef4);
  uStack_1bc = 0;
  piStack_17c = &iStack_208;
  uStack_1b0 = 0;
  piStack_168 = &iStack_21c;
  piStack_154 = &iStack_218;
  uStack_1a8 = 0;
  iStack_18c = *(int *)(param_1 + 0xeec) + iStack_13c;
  uStack_19c = 0;
  uStack_194 = 0;
  iStack_178 = *(int *)(param_1 + 0xef0) + iStack_13c;
  uStack_188 = 0;
  uStack_164 = *(undefined4 *)(param_1 + 0xee4);
  uStack_180 = 0;
  uStack_174 = 0;
  uStack_16c = 0;
  iStack_150 = iStack_13c + *(int *)(param_1 + 0xed0);
  uStack_160 = 0;
  uStack_158 = 0;
  iStack_13c = iStack_13c + *(int *)(param_1 + 0xed4);
  piStack_140 = &iStack_214;
  uStack_14c = 0;
  uStack_144 = 0;
  uStack_128 = *(undefined4 *)(param_1 + 0x110);
  puStack_12c = auStack_238;
  puStack_118 = &uStack_210;
  uStack_138 = 0;
  uStack_114 = *(undefined4 *)(param_1 + 0x118);
  puStack_104 = auStack_240;
  uStack_130 = 0;
  puStack_f0 = auStack_224;
  iStack_f4 = *(int *)(param_1 + 0x88) << 1;
  uStack_124 = 0x18;
  puStack_dc = &uStack_228;
  uStack_120 = 0;
  uStack_100 = *(undefined4 *)(param_1 + 0x3a18);
  puStack_c8 = &uStack_1fc;
  uStack_ec = *(undefined4 *)(param_1 + 0xc0c);
  uStack_11c = 0;
  uStack_d8 = *(undefined4 *)(param_1 + 0x768);
  uStack_c4 = *(undefined4 *)(param_1 + 0x76c);
  uStack_110 = 0x18;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_fc = 4;
  uStack_f8 = 0;
  uStack_e8 = 8;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_200 = 0;
  iStack_20c = 0;
  iStack_208 = 0;
  iStack_21c = 0;
  iStack_218 = 0;
  iStack_214 = 0;
  uStack_d4 = 0xc0;
  uStack_d0 = 0;
  uStack_c0 = 0x90;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  iVar3 = *(int *)(param_1 + 0xfb0);
  *(undefined4 *)(param_1 + 0xb64) =
       *(undefined4 *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(undefined4 *)(param_1 + 0xb70) =
       *(undefined4 *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
  *(undefined4 *)(param_1 + 0x830) =
       *(undefined4 *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  *(undefined4 *)(param_1 + 0x834) =
       *(undefined4 *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1cc) = 1;
  }
  if ((*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) & 0xffffff80U) == 0) {
    *(undefined4 *)(param_1 + 0x39fc) = 4;
    *(undefined4 *)(param_1 + 0x3a00) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x3a00) = 4;
    *(undefined4 *)(param_1 + 0x39fc) = 3;
  }
  if ((iVar3 == 2) || (uVar5 = 0, iVar3 == 3)) {
    uVar5 = 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x7b8) + 0x4c) = uVar5;
  uStack_1ac = uStack_1c0;
  uStack_198 = uStack_1d4;
  uStack_184 = uStack_1c0;
  uStack_170 = uStack_1c0;
  uStack_15c = uStack_1d4;
  uStack_148 = uStack_1c0;
  uStack_134 = uStack_1c0;
  iStack_cc = iStack_f4;
  iStack_b8 = iStack_f4;
  fn_82CAD120(*(undefined4 *)(param_1 + 0x7b8),*(undefined4 *)(param_1 + 0xf8),1);
  if (*(int *)(param_1 + 0xf8) < 5) {
    iVar6 = param_1 + 0x9a4;
    iVar4 = param_1 + 0x9b4;
    iVar3 = param_1 + 0x9dc;
  }
  else if (*(int *)(param_1 + 0xf8) < 0xd) {
    iVar6 = param_1 + 0x998;
    iVar4 = param_1 + 0x9c0;
    iVar3 = param_1 + 0x9e8;
  }
  else {
    iVar6 = param_1 + 0x98c;
    iVar4 = param_1 + 0x9cc;
    iVar3 = param_1 + 0x9f4;
  }
  *(int *)(param_1 + 0xa00) = iVar3;
  *(int *)(param_1 + 0x9d8) = iVar4;
  *(int *)(param_1 + 0x9b0) = iVar6;
  aiStack_1f4[0] = *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec0);
  iVar3 = *(int *)(param_1 + 0xe0);
  iStack_204 = iVar3 + *(int *)(param_1 + 0xec4);
  iStack_1f8 = iVar3 + *(int *)(param_1 + 0xec8);
  iStack_20c = *(int *)(param_1 + 0xeec) + iVar3;
  iStack_208 = *(int *)(param_1 + 0xef0) + iVar3;
  uStack_200 = *(undefined4 *)(param_1 + 0xef4);
  iStack_218 = iVar3 + *(int *)(param_1 + 0xed0);
  iStack_21c = *(int *)(param_1 + 0xee4);
  iStack_214 = iVar3 + *(int *)(param_1 + 0xed4);
  if (((*(int *)(param_1 + 0x3e5c) != 0) && (*(int *)(param_1 + 0x3e60) != 0)) &&
     (*(int *)(param_1 + 0x3e64) == 1)) {
    piVar1 = *(int **)(param_1 + 0x3e68);
    iStack_21c = *(int *)(param_1 + 0xdc) + *piVar1;
    iStack_218 = piVar1[1] + iVar3;
    iStack_214 = piVar1[2] + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0xfb0);
  auStack_238[0] = *(undefined4 *)(param_1 + 0x110);
  uStack_210 = *(undefined4 *)(param_1 + 0x118);
  auStack_240[0] = *(undefined4 *)(param_1 + 0x3a18);
  auStack_224[0] = *(undefined4 *)(param_1 + 0xc0c);
  uStack_228 = *(undefined4 *)(param_1 + 0x768);
  uStack_1fc = *(undefined4 *)(param_1 + 0x76c);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x1cc) =
       (int)((ulonglong)uVar2 - 3) - ((uVar2 - 4) + (uint)((ulonglong)uVar2 - 3 == 0));
  if ((uVar2 == 2) || (uVar5 = 0, uVar2 == 3)) {
    uVar5 = 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x7b8) + 0x4c) = uVar5;
  fn_82CAD120(*(undefined4 *)(param_1 + 0x7b8),*(undefined4 *)(param_1 + 0xf8),1);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(undefined4 *)(param_1 + 0x1d0),0,
               ((ulonglong)*(uint *)(param_1 + 0x90) +
                ((ulonglong)*(uint *)(param_1 + 0x90) & 0x7fffffff) * 2 & 0x3ffffff) << 6);
}

