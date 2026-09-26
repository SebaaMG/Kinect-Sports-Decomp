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
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_827459D8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


void fn_82745B00(int param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar4;
  longlong lVar3;
  undefined1 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (*(int *)(param_1 + 0x1c) < 2) {
    puVar1 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 2;
    puVar1[4] = 0;
  }
  else {
    uVar2 = fn_826957D0(param_1,0);
    fn_82695DA0(auStack_50,uVar2);
    uVar2 = fn_826957D0(param_1,1);
    fn_82695DA0(auStack_60,uVar2);
    cVar4 = fn_82695468(param_1,0x11);
    if (cVar4 == '\0') {
      fn_826954C0(param_1,0xffffffff8200eef4,0,0);
    }
    else {
      lVar3 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
      if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
        lVar3 = 0;
      }
      dStack_40 = lbl_82005710;
      dStack_38 = lbl_82005710;
      dStack_30 = lbl_82005710;
      dStack_28 = lbl_82005710;
      fn_827459D8(lVar3,*(undefined4 *)(param_1 + 0x18),&dStack_40);
      dVar6 = (double)fn_826972E0(auStack_50,*(undefined4 *)(param_1 + 0x18));
      dVar7 = (double)fn_826972E0(auStack_60,*(undefined4 *)(param_1 + 0x18));
      if (dVar6 == dStack_30) {
        dVar6 = dVar6 + lbl_82005758;
      }
      if (dVar7 == dStack_28) {
        dVar7 = dVar7 + lbl_82005758;
      }
      if ((((dStack_30 < dVar6) || (dVar6 < dStack_40)) || (dStack_28 < dVar7)) ||
         (uVar5 = 1, dVar7 < dStack_38)) {
        uVar5 = 0;
      }
      puVar1 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar1);
      puVar1[4] = uVar5;
      *puVar1 = 2;
    }
    fn_82696330(auStack_60);
    fn_82696330(auStack_50);
  }
  return;
}

