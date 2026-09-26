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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826A79D8();
extern int fn_826C0B08();
extern int fn_82712148();
extern unsigned int uStack_100;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_826ACCA8(int param_1)

{
  int iVar3;
  longlong lVar1;
  char cVar4;
  ulonglong uVar2;
  ulonglong uVar5;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  ushort uStack_d8;
  undefined1 auStack_d0 [8];
  double dStack_c8;
  undefined1 auStack_c0 [8];
  double dStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  double dStack_38;
  
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x40))();
  lVar1 = (**(code **)(*(int *)(iVar3 + 8) + 0xc))((int *)(iVar3 + 8),0x1b);
  if (lVar1 != 0) {
    uVar5 = 0;
    uStack_d8 = 0;
    cVar4 = fn_82712148(lVar1,&uStack_100);
    if (cVar4 != '\0') {
      uVar2 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                0x30,0);
      if ((uVar2 & 0xffffffff) != 0) {
        uVar5 = fn_826C0B08(uVar2,*(undefined4 *)(param_1 + 0x18));
      }
      if ((uStack_d8 & 1) != 0) {
        auStack_90[0] = 3;
        dStack_88 = (double)(uStack_100 & 0xffffff);
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff82006688,
                      auStack_90);
        fn_82696330(auStack_90);
      }
      if ((uStack_d8 >> 1 & 1) != 0) {
        auStack_40[0] = 3;
        dStack_38 = (double)(uStack_fc & 0xffffff);
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820065d4,
                      auStack_40);
        fn_82696330(auStack_40);
      }
      if ((uStack_d8 >> 2 & 1) != 0) {
        auStack_b0[0] = 3;
        dStack_a8 = (double)(uStack_f8 & 0xffffff);
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff8200744c,
                      auStack_b0);
        fn_82696330(auStack_b0);
      }
      if ((uStack_d8 >> 3 & 1) != 0) {
        auStack_70[0] = 3;
        dStack_68 = (double)(uStack_f4 & 0xffffff);
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff82007438,
                      auStack_70);
        fn_82696330(auStack_70);
      }
      if ((uStack_d8 >> 4 & 1) != 0) {
        auStack_d0[0] = 3;
        dStack_c8 = (double)(uStack_f0 & 0xffffff);
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff8200741c,
                      auStack_d0);
        fn_82696330(auStack_d0);
      }
      if ((uStack_d8 >> 5 & 1) != 0) {
        auStack_50[0] = 3;
        dStack_48 = (double)(uStack_ec & 0xffffff);
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820073fc,
                      auStack_50);
        fn_82696330(auStack_50);
      }
      if ((uStack_d8 >> 6 & 1) != 0) {
        auStack_c0[0] = 3;
        dStack_b8 = (double)uStack_e0;
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820073f0,
                      auStack_c0);
        fn_82696330(auStack_c0);
      }
      if ((uStack_d8 >> 7 & 1) != 0) {
        auStack_a0[0] = 3;
        dStack_98 = (double)uStack_e8;
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820073d8,
                      auStack_a0);
        fn_82696330(auStack_a0);
      }
      if ((uStack_d8 >> 8 & 1) != 0) {
        auStack_80[0] = 3;
        dStack_78 = (double)uStack_e4;
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820073b8,
                      auStack_80);
        fn_82696330(auStack_80);
      }
      if ((uStack_d8 >> 9 & 1) != 0) {
        auStack_60[0] = 3;
        dStack_58 = (double)uStack_dc;
        fn_826A79D8(uVar5 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820073a0,
                      auStack_60);
        fn_82696330(auStack_60);
      }
      fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar5);
      if ((uVar5 & 0xffffffff) != 0) {
        fn_826824B0(uVar5);
      }
    }
    fn_8267C4F0(lVar1);
  }
  return;
}

