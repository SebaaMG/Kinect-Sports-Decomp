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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_82697EB8();
extern int fn_826A66F8();
extern int fn_82741A50();
extern int fn_827437A0();
extern int fn_82743808();
extern int fn_82744378();


void fn_82742CC8(int param_1)

{
  undefined4 uVar1;
  char cVar5;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_f0 [8];
  double dStack_e8;
  undefined1 auStack_e0 [8];
  double dStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  cVar5 = fn_82695468(param_1,0xf);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    if (((uVar7 & 0xffffffff) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      iVar3 = fn_82696958(uVar2,uVar1);
      if ((iVar3 != 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar3 + 0x10) + 8))(iVar3 + 0x10), iVar4 == 0x10)) {
        fn_82741A50(&fStack_d0,uVar7,*(undefined4 *)(param_1 + 0x18));
        puVar8 = auStack_60;
        lVar9 = 2;
        do {
          puVar8 = puVar8 + 0x10;
          *puVar8 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        fn_827437A0(iVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_50);
        uVar7 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288)
                                  ,0x30,0);
        if ((uVar7 & 0xffffffff) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = fn_82744378(uVar7,*(undefined4 *)(param_1 + 0x18));
        }
        pfVar6 = &fStack_c0;
        lVar9 = 2;
        do {
          pfVar6 = pfVar6 + 4;
          *(undefined1 *)pfVar6 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        dStack_e8 = (double)fStack_d0;
        auStack_f0[0] = 3;
        fn_826A66F8(auStack_f0,*(undefined4 *)(param_1 + 0x18),auStack_50);
        dStack_d8 = (double)fStack_cc;
        auStack_e0[0] = 3;
        fn_826A66F8(auStack_e0,*(undefined4 *)(param_1 + 0x18),auStack_40);
        dStack_68 = (double)fStack_c8;
        auStack_70[0] = 3;
        fn_82695FA0(auStack_b0,auStack_70);
        fn_82696330(auStack_70);
        fn_82697EB8(auStack_b0,*(undefined4 *)(param_1 + 0x18),auStack_f0);
        fn_82697EB8(auStack_b0,*(undefined4 *)(param_1 + 0x18),auStack_e0);
        dStack_78 = (double)fStack_c4;
        auStack_80[0] = 3;
        fn_82695FA0(auStack_f0,auStack_80);
        fn_82696330(auStack_80);
        fn_826A66F8(auStack_f0,*(undefined4 *)(param_1 + 0x18),auStack_50);
        dStack_88 = (double)fStack_c0;
        auStack_90[0] = 3;
        fn_82695FA0(auStack_e0,auStack_90);
        fn_82696330(auStack_90);
        fn_826A66F8(auStack_e0,*(undefined4 *)(param_1 + 0x18),auStack_40);
        dStack_58 = (double)fStack_bc;
        auStack_60[0] = 3;
        fn_82695FA0(auStack_a0,auStack_60);
        fn_82696330(auStack_60);
        fn_82697EB8(auStack_a0,*(undefined4 *)(param_1 + 0x18),auStack_f0);
        fn_82697EB8(auStack_a0,*(undefined4 *)(param_1 + 0x18),auStack_e0);
        fn_82743808(uVar7,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_b0);
        fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar7);
        fn_82696330(auStack_e0);
        fn_82696330(auStack_f0);
        puVar8 = auStack_90;
        lVar9 = 1;
        do {
          puVar8 = puVar8 + -0x10;
          fn_82696330(puVar8);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        if ((uVar7 & 0xffffffff) != 0) {
          fn_826824B0(uVar7);
        }
        puVar8 = auStack_30;
        lVar9 = 1;
        do {
          puVar8 = puVar8 + -0x10;
          fn_82696330(puVar8);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
    }
  }
  return;
}

