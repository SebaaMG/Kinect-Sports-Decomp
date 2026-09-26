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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82809CB0();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810B78();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8305F778();
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821AAD20;


void fn_8305DC18(void)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  iVar2 = fn_82F6A548();
  if (3 < *(int *)(iVar2 + 0x30)) {
    lVar4 = 2;
    dVar8 = (double)lbl_821AAD20;
    if (2 < *(int *)(iVar2 + 0x30) + 2) {
      iVar3 = 0;
      dVar7 = (double)lbl_8201DCB8;
      dVar9 = dVar8;
      do {
        fn_8305F778(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar3 + *(int *)(iVar2 + 0x2c)),
                     auStack_80);
        fn_8305F778(*(undefined4 *)(iVar2 + 0x28),
                     *(undefined4 *)
                      ((int)(((lVar4 + -1) -
                              (longlong)((int)(lVar4 + -1) / *(int *)(iVar2 + 0x30)) *
                              (longlong)*(int *)(iVar2 + 0x30) & 0xffffffffU) << 2) +
                      *(int *)(iVar2 + 0x2c)),auStack_90);
        fn_8305F778(*(undefined4 *)(iVar2 + 0x28),
                     *(undefined4 *)
                      ((int)((lVar4 - (longlong)((int)lVar4 / *(int *)(iVar2 + 0x30)) *
                                      (longlong)*(int *)(iVar2 + 0x30) & 0xffffffffU) << 2) +
                      *(int *)(iVar2 + 0x2c)),auStack_70);
        fn_82810328(auStack_90,auStack_80,auStack_a0);
        fn_82810328(auStack_70,auStack_90,auStack_b0);
        fn_82810B78(auStack_a0,auStack_a0);
        fn_82810B78(auStack_b0,auStack_b0);
        fn_82810240(auStack_a0,auStack_b0,auStack_60);
        dVar5 = (double)fn_82810280(auStack_60,iVar2 + 0x34);
        dVar6 = (double)fn_82809CB0();
        if ((dVar7 < dVar6) && (dVar6 = dVar5 * dVar9, dVar9 = dVar5, (double)(float)dVar6 < dVar8))
        {
          uVar1 = 0;
          goto switchD_82f20fb0_default;
        }
        lVar4 = lVar4 + 1;
        iVar3 = iVar3 + 4;
      } while ((int)lVar4 < *(int *)(iVar2 + 0x30) + 2);
    }
  }
  uVar1 = 1;
switchD_82f20fb0_default:
  fn_82F6A594(uVar1);
  return;
}

