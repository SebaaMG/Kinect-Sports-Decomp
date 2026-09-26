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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_827450A8();
extern int fn_82745128();


void fn_82745290(int param_1)

{
  char cVar2;
  undefined8 uVar1;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  cVar2 = fn_82695468(param_1,0x11);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
  }
  else {
    auStack_80[0] = 0;
    auStack_90[0] = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = fn_826957D0(param_1,0);
      fn_82695FA0(auStack_80,uVar1);
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar1 = fn_826957D0(param_1,1);
        fn_82695FA0(auStack_90,uVar1);
      }
    }
    lVar3 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar3 = 0;
    }
    puVar4 = auStack_80;
    lVar5 = 4;
    do {
      puVar4 = puVar4 + 0x10;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_827450A8(lVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_70);
    dVar6 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
    dStack_a8 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18));
    lVar5 = 3;
    dStack_a8 = dVar6 + dStack_a8;
    auStack_b0[0] = 3;
    fn_82695FA0(auStack_70,auStack_b0);
    fn_82696330(auStack_b0);
    dVar6 = (double)fn_826972E0(auStack_60,*(undefined4 *)(param_1 + 0x18));
    dStack_98 = (double)fn_826972E0(auStack_90,*(undefined4 *)(param_1 + 0x18));
    dStack_98 = dVar6 + dStack_98;
    auStack_a0[0] = 3;
    fn_82695FA0(auStack_60,auStack_a0);
    fn_82696330(auStack_a0);
    fn_82745128(lVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_70);
    puVar4 = auStack_30;
    do {
      puVar4 = puVar4 + -0x10;
      fn_82696330(puVar4);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
    fn_82696330(auStack_90);
    fn_82696330(auStack_80);
  }
  return;
}

