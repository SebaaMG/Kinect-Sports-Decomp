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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_827451A8();
extern int fn_827459D8();
extern unsigned int lbl_82005710;


void fn_82746120(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  lVar3 = 0;
  auStack_50[0] = 0;
  auStack_60[0] = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = fn_826957D0(param_1,0);
    fn_82695FA0(auStack_50,uVar1);
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar1 = fn_826957D0(param_1,1);
      fn_82695FA0(auStack_60,uVar1);
    }
  }
  cVar2 = fn_82695468(param_1,0x11);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
  }
  else {
    if ((ulonglong)*(uint *)(param_1 + 8) != 0) {
      lVar3 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    }
    dStack_40 = lbl_82005710;
    dStack_38 = lbl_82005710;
    dStack_30 = lbl_82005710;
    dStack_28 = lbl_82005710;
    fn_827459D8(lVar3,*(undefined4 *)(param_1 + 0x18),&dStack_40);
    dVar4 = (double)fn_826972E0(auStack_60,*(undefined4 *)(param_1 + 0x18));
    dVar5 = (double)fn_826972E0(auStack_50,*(undefined4 *)(param_1 + 0x18));
    dStack_38 = dStack_38 - dVar4;
    dStack_40 = dStack_40 - dVar5;
    dStack_28 = dVar4 + dStack_28;
    dStack_30 = dStack_30 + dVar5;
    fn_827451A8(lVar3,*(undefined4 *)(param_1 + 0x18),&dStack_40);
  }
  fn_82696330(auStack_60);
  fn_82696330(auStack_50);
  return;
}

