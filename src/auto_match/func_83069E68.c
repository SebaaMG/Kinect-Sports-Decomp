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
extern unsigned int *auStack_11c;
extern unsigned int *auStack_128;
extern unsigned int *auStack_134;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c8;
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_82810B78();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_8305D5F0();
extern int fn_8305D5F8();
extern int fn_8305D618();
extern int fn_8305D660();
extern int fn_8305D680();
extern int fn_8305D688();
extern int fn_8305D7C8();
extern int fn_8305D990();
extern int fn_8305E0F8();
extern int fn_8305EB60();
extern int fn_8305F258();
extern int fn_8305F2E8();
extern int fn_830602B8();
extern int fn_83060570();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_83064788();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_821AAD20;


void fn_83069E68(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar5;
  int iVar6;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [12];
  undefined1 auStack_128 [12];
  undefined1 auStack_11c [12];
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [144];
  
  piVar5 = (int *)fn_82F6A540();
  iVar7 = *piVar5;
  dVar11 = extraout_f1;
  while( true ) {
    if (iVar7 == 0) break;
    fn_83064788(param_2,*(undefined4 *)(iVar7 + 0x10),0,0xffffffff83069d38,iVar7);
    iVar7 = *(int *)(iVar7 + 4);
  }
  iVar7 = *piVar5;
  if (iVar7 != 0) {
    dVar12 = (double)lbl_821AAD20;
    dVar13 = (double)lbl_82002C5C;
    dVar14 = (double)lbl_8200D8C4;
    do {
      uVar1 = *(undefined4 *)(iVar7 + 0x10);
      iVar6 = fn_8305D680(uVar1);
      if (0 < iVar6) {
        dVar16 = (double)(float)(dVar11 * dVar14 + dVar13);
        dVar15 = -dVar16;
        uVar8 = 0;
        do {
          uVar9 = uVar8 + 1;
          uVar2 = fn_8305D680(uVar1);
          fn_8305D688(uVar1,uVar8,auStack_170);
          fn_8305D688(uVar1,-(ulonglong)(uVar2 != uVar9) & uVar9,auStack_150);
          fn_82810328(auStack_150,auStack_170,auStack_160);
          fn_82810B78(auStack_160,auStack_160);
          uVar3 = fn_8305D618(uVar1);
          fn_82810558(dVar15,uVar3,auStack_170);
          uVar3 = fn_8305D618(uVar1);
          fn_82810558(dVar15,uVar3,auStack_150);
          uVar3 = fn_8305D618(uVar1);
          fn_82810558(dVar16,uVar3,auStack_150);
          uVar3 = fn_8305D618(uVar1);
          fn_82810558(dVar16,uVar3,auStack_170);
          fn_83061508(auStack_90);
          fn_8305F2E8(auStack_110);
          fn_830602B8(auStack_90,4);
          fn_8305D5F0(auStack_110);
          fn_8305E0F8(auStack_110,auStack_90);
          fn_8305EB60(auStack_110,4);
          uVar3 = fn_8305D618(uVar1);
          fn_82810240(auStack_160,uVar3,auStack_180);
          fn_82810B78(auStack_180,auStack_180);
          fn_8305D5F8(auStack_110,auStack_180);
          fn_82810328(auStack_11c,auStack_140,auStack_a8);
          fn_82810328(auStack_128,auStack_140,auStack_c8);
          fn_82810240(auStack_a8,auStack_c8,auStack_b8);
          uVar3 = fn_8305D7C8(auStack_110);
          dVar10 = (double)fn_82810280(auStack_b8,auStack_180);
          if (dVar10 <= dVar12) {
            uVar4 = fn_83060570(uVar3,auStack_140);
            fn_8305D660(auStack_110,0,uVar4);
            uVar4 = fn_83060570(uVar3,auStack_134);
            fn_8305D660(auStack_110,1,uVar4);
            uVar4 = fn_83060570(uVar3,auStack_128);
            fn_8305D660(auStack_110,2,uVar4);
            uVar3 = fn_83060570(uVar3,auStack_11c);
            uVar4 = 3;
          }
          else {
            uVar4 = fn_83060570(uVar3,auStack_140);
            fn_8305D660(auStack_110,0,uVar4);
            uVar4 = fn_83060570(uVar3,auStack_134);
            fn_8305D660(auStack_110,3,uVar4);
            uVar4 = fn_83060570(uVar3,auStack_128);
            fn_8305D660(auStack_110,2,uVar4);
            uVar3 = fn_83060570(uVar3,auStack_11c);
            uVar4 = 1;
          }
          fn_8305D660(auStack_110,uVar4,uVar3);
          fn_8305D990(auStack_110);
          fn_83064788(param_2,auStack_110,0,0,0);
          fn_8305F258(auStack_110);
          fn_83061F30(auStack_90);
          iVar6 = fn_8305D680(uVar1);
          uVar8 = uVar9;
        } while ((int)uVar9 < iVar6);
      }
      iVar7 = *(int *)(iVar7 + 4);
    } while (iVar7 != 0);
  }
  fn_82F6A58C();
  return;
}

