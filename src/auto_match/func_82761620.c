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
extern unsigned int *auStack_110;
extern unsigned int *auStack_140;
extern unsigned int *auStack_148;
extern unsigned int *auStack_14c;
extern unsigned int *auStack_158;
extern unsigned int *auStack_15c;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_bc;
extern unsigned int fStack_ec;
extern int fn_8275E9C0();
extern int fn_8275EB28();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern unsigned int iStack_100;
extern unsigned int iStack_104;
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int iStack_30;
extern unsigned int iStack_50;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


undefined8 fn_82761620(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  byte abStack_160 [4];
  undefined1 auStack_15c [4];
  undefined1 auStack_158 [8];
  byte abStack_150 [4];
  undefined1 auStack_14c [4];
  undefined1 auStack_148 [4];
  byte abStack_144 [4];
  undefined1 auStack_140 [24];
  uint uStack_128;
  uint uStack_124;
  undefined1 auStack_110 [4];
  uint uStack_10c;
  uint uStack_108;
  int iStack_104;
  int iStack_100;
  float fStack_ec;
  undefined1 auStack_e0 [4];
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  float fStack_bc;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 auStack_a0 [24];
  uint uStack_88;
  uint uStack_84;
  longlong lStack_78;
  longlong lStack_70;
  byte abStack_60 [16];
  int iStack_50;
  byte abStack_40 [16];
  int iStack_30;
  
  iStack_170 = 0;
  iStack_168 = 0;
  (**(code **)(*param_1 + 0x44))(param_1,&iStack_170,&iStack_168);
  iStack_16c = 0;
  iStack_164 = 0;
  (**(code **)(*param_2 + 0x44))(param_2,&iStack_16c,&iStack_164);
  if ((iStack_170 == iStack_16c) && (iStack_168 == iStack_164)) {
    fn_8275EB28(auStack_140,param_1);
    fn_8275EB28(auStack_a0,param_2);
    while (uVar4 = uStack_88, uVar3 = uStack_128, uStack_128 < uStack_124) {
      if (uStack_84 <= uStack_88) goto LAB_827617c4;
      fn_8275FFC0(auStack_140,abStack_150,auStack_14c,auStack_148);
      fn_8275FFC0(auStack_a0,abStack_160,auStack_15c,auStack_158);
      pbVar9 = abStack_150;
      pbVar7 = abStack_160;
      do {
        bVar1 = *pbVar9;
        bVar2 = *pbVar7;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar9 = pbVar9 + 1;
        pbVar7 = pbVar7 + 1;
      } while (pbVar9 != abStack_144);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_827617c4;
      fn_8275FE18(auStack_e0,auStack_140);
      fn_8275FE18(auStack_110,auStack_a0);
      lStack_b0 = (longlong)iStack_d4;
      lStack_70 = (longlong)iStack_104;
      if ((float)lStack_b0 * fStack_bc != (float)lStack_70 * fStack_ec) goto LAB_827617c4;
      lStack_b8 = (longlong)iStack_d0;
      lStack_78 = (longlong)iStack_100;
      if (((float)lStack_b8 * fStack_bc != (float)lStack_78 * fStack_ec) ||
         (uStack_d8 != uStack_108)) goto LAB_827617c4;
      while (uStack_dc < uStack_d8) {
        if (uStack_108 <= uStack_10c) goto LAB_827617c4;
        fn_8275E9C0(auStack_e0,abStack_60);
        fn_8275E9C0(auStack_110,abStack_40);
        if (iStack_50 != iStack_30) goto LAB_827617c4;
        pbVar7 = abStack_40;
        pbVar9 = abStack_60;
        lVar6 = 0;
        if (iStack_50 * 4 != 0) {
          pbVar8 = pbVar9 + iStack_50 * 4;
          do {
            lVar6 = (ulonglong)*pbVar9 - (ulonglong)*pbVar7;
            if (lVar6 != 0) break;
            pbVar9 = pbVar9 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar9 != pbVar8);
        }
        if ((int)lVar6 != 0) goto LAB_827617c4;
      }
      uStack_128 = uVar3 + 1;
      fn_8275EB90(auStack_140);
      if (uStack_108 <= uStack_10c) {
        uStack_88 = uVar4 + 1;
        fn_8275EB90(auStack_a0);
      }
    }
    uVar5 = 1;
  }
  else {
LAB_827617c4:
    uVar5 = 0;
  }
  return uVar5;
}

