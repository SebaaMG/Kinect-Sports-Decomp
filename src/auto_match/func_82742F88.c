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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
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


void fn_82742F88(int param_1)

{
  undefined4 uVar1;
  char cVar5;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar6;
  undefined1 *puVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 auStack_c0 [8];
  double dStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  
  cVar5 = fn_82695468(param_1,0xf);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    if (((uVar6 & 0xffffffff) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      iVar3 = fn_82696958(uVar2,uVar1);
      if ((iVar3 != 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar3 + 0x10) + 8))(iVar3 + 0x10), iVar4 == 0x10)) {
        fn_82741A50(&fStack_40,uVar6,*(undefined4 *)(param_1 + 0x18));
        puVar7 = auStack_70;
        lVar9 = 2;
        do {
          puVar7 = puVar7 + 0x10;
          *puVar7 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        fn_827437A0(iVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_60);
        uVar6 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288)
                                  ,0x30,0);
        if ((uVar6 & 0xffffffff) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = fn_82744378(uVar6,*(undefined4 *)(param_1 + 0x18));
        }
        puVar7 = auStack_c0;
        lVar9 = 2;
        do {
          puVar7 = puVar7 + 0x10;
          *puVar7 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        dStack_b8 = (double)fStack_40;
        auStack_c0[0] = 3;
        fn_826A66F8(auStack_c0,*(undefined4 *)(param_1 + 0x18),auStack_60);
        dStack_78 = (double)fStack_3c;
        auStack_80[0] = 3;
        fn_82695FA0(auStack_b0,auStack_80);
        fn_82696330(auStack_80);
        fn_826A66F8(auStack_b0,*(undefined4 *)(param_1 + 0x18),auStack_50);
        fn_82697EB8(auStack_b0,*(undefined4 *)(param_1 + 0x18),auStack_c0);
        dStack_68 = (double)fStack_34;
        auStack_70[0] = 3;
        fn_82695FA0(auStack_c0,auStack_70);
        fn_82696330(auStack_70);
        fn_826A66F8(auStack_c0,*(undefined4 *)(param_1 + 0x18),auStack_60);
        dStack_88 = (double)fStack_30;
        auStack_90[0] = 3;
        fn_82695FA0(auStack_a0,auStack_90);
        fn_82696330(auStack_90);
        fn_826A66F8(auStack_a0,*(undefined4 *)(param_1 + 0x18),auStack_50);
        fn_82697EB8(auStack_a0,*(undefined4 *)(param_1 + 0x18),auStack_c0);
        fn_82743808(uVar6,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_b0);
        fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar6);
        fn_82696330(auStack_c0);
        puVar7 = auStack_90;
        lVar9 = 1;
        do {
          puVar7 = puVar7 + -0x10;
          fn_82696330(puVar7);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        if ((uVar6 & 0xffffffff) != 0) {
          fn_826824B0(uVar6);
        }
        pfVar8 = &fStack_40;
        lVar9 = 1;
        do {
          pfVar8 = pfVar8 + -4;
          fn_82696330(pfVar8);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
    }
  }
  return;
}

