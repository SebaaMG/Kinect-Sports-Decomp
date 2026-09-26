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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_828F1160();
extern int fn_82F68CC0();
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
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_825F2D00(int param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
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
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [160];
  
  param_2 = param_2 * 0xb0;
  puVar2 = &lbl_83296890;
  iVar1 = *(int *)(&lbl_83296C80 + param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)(&lbl_83296C20 + param_2);
  }
  fn_82F68CC0(auStack_a0,puVar2,0x40);
  puVar2 = (undefined8 *)(&lbl_83296BE0 + param_2);
  if (iVar1 == 0) {
    puVar2 = &lbl_832968D0;
  }
  fn_82F68CC0(auStack_e0,puVar2,0x40);
  fn_828F1160(&uStack_120,auStack_a0,auStack_e0);
  uStack_160 = uStack_120;
  uStack_15c = uStack_110;
  uStack_158 = uStack_100;
  uStack_154 = uStack_f0;
  uStack_150 = uStack_11c;
  uStack_14c = uStack_10c;
  uStack_148 = uStack_fc;
  uStack_144 = uStack_ec;
  uStack_140 = uStack_118;
  uStack_13c = uStack_108;
  uStack_138 = uStack_f8;
  uStack_134 = uStack_e8;
  uStack_130 = uStack_114;
  uStack_12c = uStack_104;
  uStack_128 = uStack_f4;
  uStack_124 = uStack_e4;
  fn_826310E0(lbl_8320A898,0xc0,&uStack_160,4,0x8000);
  iVar1 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) | 8;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
  fn_82637B30(lbl_8320A898,1);
  iVar1 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
  iVar1 = lbl_8320A898;
  *(undefined4 *)(lbl_8320A898 + 0x2f04) = 7;
  *(uint *)(iVar1 + 0x28dc) =
       -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 7 | *(uint *)(iVar1 + 0x28dc) & 0xfffffff0;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  iVar1 = lbl_8320A898;
  *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,*(undefined4 *)(param_1 + 0x9b4));
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,*(undefined4 *)(param_1 + 0x9b8));
}

