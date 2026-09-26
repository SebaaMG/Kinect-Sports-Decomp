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
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_823F2E20();
extern int fn_824A0720();
extern int fn_824A0808();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_82672C20();
extern unsigned int iStack_ac;
extern unsigned int lbl_82195B10;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824A0520(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double dStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [80];
  
  puVar3 = (undefined4 *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = fn_8266EC60();
    uVar1 = fn_8266ECF0(auStack_b0,uVar1,param_1 + 0x4c,4,0,0xffffffffffffffff,0,0x18280143);
    fn_823F2E20(puVar3,uVar1);
    if (iStack_ac != 0) {
      fn_822315A0();
    }
    puVar2 = &uStack_9c;
    lVar5 = 2;
    do {
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
      *puVar2 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_82273CD8(auStack_90,3);
    uStack_88 = lbl_82195B10;
    uVar1 = lbl_82195B10;
    fn_82273CD8(auStack_80,3);
    uStack_78 = uVar1;
    fn_82672C20(*puVar3,0xffffffff821bf118,auStack_90,2);
    puVar4 = auStack_70;
    lVar5 = 1;
    do {
      puVar4 = puVar4 + -0x10;
      fn_82273C88(puVar4);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
    *(undefined4 *)(param_1 + 0x84) = lbl_821CC160;
    fn_824A0808(param_1);
  }
  if (param_3 == 0) {
    uStack_a0 = 0;
    uStack_9c = 0;
    fn_82273CD8(&uStack_a0,3);
    lStack_a8 = (longlong)(int)param_2;
    dStack_98 = (double)lStack_a8;
    fn_82672C20(*puVar3,0xffffffff821bf124,&uStack_a0,1);
    fn_824A0720(param_1,param_2,0);
    fn_82273C88(&uStack_a0);
  }
  else {
    puVar2 = &uStack_7c;
    lVar5 = 2;
    do {
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
      *puVar2 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_82273CD8(auStack_70,3);
    lStack_a8 = (longlong)(int)param_2;
    dStack_68 = (double)lStack_a8;
    fn_82273CD8(auStack_60,3);
    lStack_a8 = (longlong)param_3;
    dStack_58 = (double)lStack_a8;
    fn_82672C20(*puVar3,0xffffffff821bf134,auStack_70,2);
    puVar4 = auStack_50;
    lVar5 = 1;
    do {
      puVar4 = puVar4 + -0x10;
      fn_82273C88(puVar4);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}

