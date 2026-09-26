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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82681898();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_82697EB8();
extern int fn_826A66F8();
extern int fn_826BC950();
extern int fn_82743730();


void fn_82743938(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  fn_826BC950();
  fn_82681898(*(undefined4 *)(param_1 + 4));
  if (1 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = fn_826957D0(param_1,0);
    iVar3 = fn_82696958(uVar2,uVar1);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = fn_826957D0(param_1,1);
    iVar4 = fn_82696958(uVar2,uVar1);
    if ((iVar3 != 0) && (iVar4 != 0)) {
      iVar5 = (**(code **)(*(int *)(iVar3 + 0x10) + 8))(iVar3 + 0x10);
      if ((iVar5 == 0x10) ||
         (iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10), iVar5 == 0x10)) {
        puVar6 = auStack_60;
        lVar7 = 2;
        do {
          puVar6 = puVar6 + 0x10;
          *puVar6 = 0;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        puVar6 = auStack_80;
        lVar7 = 2;
        do {
          puVar6 = puVar6 + 0x10;
          *puVar6 = 0;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        fn_82743730(*(undefined4 *)(param_1 + 0x18),iVar3,auStack_50);
        fn_82743730(*(undefined4 *)(param_1 + 0x18),iVar4,auStack_70);
        fn_82695DA0(auStack_a0,auStack_70);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        dVar8 = (double)fn_826972E0(auStack_a0,uVar1);
        dVar9 = (double)fn_826972E0(auStack_50,uVar1);
        fn_82681898(dVar8 - dVar9,auStack_a0);
        fn_826A66F8(auStack_a0,*(undefined4 *)(param_1 + 0x18),auStack_a0);
        fn_82695DA0(auStack_90,auStack_60);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        dVar8 = (double)fn_826972E0(auStack_90,uVar1);
        dVar9 = (double)fn_826972E0(auStack_40,uVar1);
        fn_82681898(dVar8 - dVar9,auStack_90);
        fn_826A66F8(auStack_90,*(undefined4 *)(param_1 + 0x18),auStack_90);
        fn_82697EB8(auStack_a0,*(undefined4 *)(param_1 + 0x18),auStack_90);
        dStack_78 = (double)fn_826972E0(auStack_a0,*(undefined4 *)(param_1 + 0x18));
        dStack_78 = SQRT(dStack_78);
        auStack_80[0] = 3;
        uVar2 = fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18));
        fn_82696330(auStack_80);
        fn_82681898(uVar2,*(undefined4 *)(param_1 + 4));
        fn_82696330(auStack_90);
        fn_82696330(auStack_a0);
        puVar6 = auStack_50;
        lVar7 = 1;
        do {
          puVar6 = puVar6 + -0x10;
          fn_82696330(puVar6);
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
        puVar6 = auStack_30;
        lVar7 = 1;
        do {
          puVar6 = puVar6 + -0x10;
          fn_82696330(puVar6);
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      else {
        puVar6 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar6);
        *puVar6 = 0;
      }
    }
  }
  return;
}

