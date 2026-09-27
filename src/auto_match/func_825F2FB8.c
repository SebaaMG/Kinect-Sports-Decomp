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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_fc;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_828F1160();
extern int memcpy();
extern float lbl_821954D0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;


void fn_825F2FB8(double param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  struct { undefined4 first; undefined4 second; } stack_pair_140;

  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [176];
  
  if ((double)*(float *)(param_2 + 0x30) < param_1) {
    return;
  }
  param_4 = param_4 * 0xb0;
  puVar6 = &lbl_83296890;
  iVar5 = *(int *)(&lbl_83296C80 + param_4);
  if (iVar5 != 0) {
    puVar6 = (undefined8 *)(&lbl_83296C20 + param_4);
  }
  memcpy(auStack_b0,puVar6,0x40);
  puVar6 = (undefined8 *)(&lbl_83296BE0 + param_4);
  if (iVar5 == 0) {
    puVar6 = &lbl_832968D0;
  }
  memcpy(auStack_f0,puVar6,0x40);
  fn_828F1160(&uStack_180,auStack_b0,auStack_f0);
  fStack_fc = (float)param_1;
  uStack_100 = lbl_821CC160;
  uStack_f8 = lbl_821CC160;
  uStack_f4 = lbl_821CC160;
  stack_pair_140.second = uStack_170;
  stack_pair_140.first = uStack_180;
  uStack_138 = uStack_160;
  uStack_134 = uStack_150;
  uStack_130 = uStack_17c;
  uStack_12c = uStack_16c;
  uStack_128 = uStack_15c;
  uStack_124 = uStack_14c;
  uStack_120 = uStack_178;
  uStack_11c = uStack_168;
  uStack_118 = uStack_158;
  uStack_114 = uStack_148;
  uStack_110 = uStack_174;
  uStack_10c = uStack_164;
  uStack_108 = uStack_154;
  uStack_104 = uStack_144;
  fn_826310E0(lbl_8320A898,0xc0,&stack_pair_140.first,5,0xc000);
  iVar5 = lbl_8320A898;
  uVar1 = *(undefined4 *)(lbl_8320A898 + 0x2efc);
  uVar2 = *(undefined4 *)(lbl_8320A898 + 0x2948);
  uVar3 = *(undefined4 *)(lbl_8320A898 + 0x293c);
  uVar4 = *(undefined4 *)(lbl_8320A898 + 0x2934);
  *(float *)(lbl_8320A898 + 0x2904) = (float)*(uint *)(param_2 + 0x10) * lbl_821954D0;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x8000000;
  iVar5 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) | 8;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x40200;
  fn_82637B30(lbl_8320A898,1,uVar2,uVar1,uVar3,uVar4);
  iVar5 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x40;
  iVar5 = lbl_8320A898;
  *(undefined4 *)(lbl_8320A898 + 0x2f04) = 7;
  *(uint *)(iVar5 + 0x28dc) =
       *(uint *)(iVar5 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar5 + 0x3148) != 0) & 7;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x2000000000;
  iVar5 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x2934) =
       (*(uint *)(param_2 + 0x14) & 1) << 2 | *(uint *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x800;
  iVar5 = lbl_8320A898;
  *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,*(undefined4 *)(param_2 + 0x28));
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,*(undefined4 *)(param_2 + 0x2c));
}

