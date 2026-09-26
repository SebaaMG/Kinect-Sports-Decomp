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
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_8258E568();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_82BA02A8();
extern int fn_82BE28A8();
extern int fn_82BE3778();
extern unsigned int lbl_821955F4;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_8a;
extern unsigned int uStack_8b;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_92;
extern unsigned int uStack_94;
extern unsigned int uStack_96;
extern unsigned int uStack_97;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_9e;
extern unsigned int uStack_a0;


void fn_8258C058(int param_1)

{
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar1;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int aiStack_b0 [4];
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined1 auStack_60 [96];
  
  *(undefined4 *)(param_1 + 500) = 0;
  fn_82520158(0xffffffff821c6538,aiStack_b0,0);
  if ((aiStack_b0[0] != 0) && (iVar2 = fn_8251F720(aiStack_b0,0), *(int *)(iVar2 + 0x48) != 0)
     ) {
    iVar3 = fn_8251FBA8();
    if (iVar3 != 0) {
      uVar6 = (ulonglong)(iVar3 - 0x4c) / 0x4c;
      if (((int)uVar6 != 0) && (uVar6 != 0)) {
        puVar7 = (undefined4 *)(iVar2 + 0x94);
        do {
          fn_82230110(auStack_60,puVar7 + -0x10);
          puVar4 = (undefined4 *)fn_8258E568(param_1 + 0x1c0,auStack_60);
          *puVar4 = *puVar7;
          fn_82230300(auStack_60,1,0);
          uVar6 = uVar6 - 1;
          puVar7 = puVar7 + 0x13;
        } while (uVar6 != 0);
      }
    }
    fn_82BA02A8(0xffffffff8258d2b8);
    fn_82BA02A8(0xffffffff8258cee8);
    fn_82BE28A8(0xffffffff825b1970,0xffffffff824b4280);
    pcStack_68 = "4.0.0.0";
    uStack_70 = 30000;
    uStack_78 = 0x20000000000000;
    iVar2 = fn_82BE3778(auStack_80);
    if ((iVar2 == 0) || (iVar2 == 0xc9)) {
      *(undefined4 *)(param_1 + 500) = 1;
    }
    fn_82520158(0xffffffff821c655c,aiStack_b0,0);
    uVar1 = fn_8251F720(aiStack_b0,0);
    uVar5 = fn_82631830();
    *(undefined4 *)(param_1 + 0xff0) = uVar5;
    fn_8251FA58(uVar1);
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_98 = 0;
    uStack_9c = 0x2a23b9;
    uStack_97 = 0;
    uStack_96 = 0;
    uStack_94 = 0xff;
    uStack_92 = 0;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uVar5 = fn_82631BF8(&uStack_a0);
    *(undefined4 *)(param_1 + 0xff4) = uVar5;
    *(undefined4 *)(param_1 + 0xff8) = lbl_821955F4;
    *(undefined4 *)(param_1 + 0x354) = 0xfffffff6;
    *(undefined4 *)(param_1 + 0x358) = 0xfffffff6;
    *(undefined4 *)(param_1 + 0x35c) = 0xfffffff6;
    *(undefined4 *)(param_1 + 0x360) = 0xfffffff6;
  }
  return;
}

