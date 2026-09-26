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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern int fn_82A1E110();
extern unsigned int uStack_b0;


void fn_8229A0B8(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  char cStack_58;
  undefined1 auStack_50 [80];
  
  cVar4 = '\x01';
  uVar5 = 0;
  puVar3 = param_1 + 3;
  do {
    iVar1 = fn_82A1E110(puVar3,0xffffffff821aad20);
    if (iVar1 == 0) {
      cVar4 = -((uVar5 < 0xf) + -1);
      break;
    }
    uVar5 = uVar5 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  } while ((uVar5 & 0xffffffff) < 0x100);
  puVar3 = (undefined4 *)((int)&uStack_b0 + 4);
  lVar7 = 5;
  do {
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
    *puVar3 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uStack_b0 = (ulonglong)(uint)param_1[2];
  dVar8 = (double)uStack_b0;
  fn_82273CD8(auStack_a0,3);
  uStack_b0 = (ulonglong)(int)param_1[0x484];
  dVar9 = (double)(longlong)uStack_b0;
  dStack_98 = dVar8;
  fn_82273CD8(auStack_90,3);
  uStack_b0 = (ulonglong)(int)param_1[0x485];
  dVar8 = (double)(longlong)uStack_b0;
  dStack_88 = dVar9;
  fn_82273CD8(auStack_80,3);
  uStack_b0 = (ulonglong)(int)param_1[0x486];
  dVar9 = (double)(longlong)uStack_b0;
  dStack_78 = dVar8;
  fn_82273CD8(auStack_70,3);
  dStack_68 = dVar9;
  fn_82273CD8(auStack_60,2);
  if (param_1[0x48a] == 0) {
    uVar2 = 0xffffffff821aad24;
  }
  else {
    uVar2 = 0xffffffff821aad44;
  }
  cStack_58 = cVar4;
  fn_82672C20(*param_1,uVar2,auStack_a0,5);
  param_1[0x483] = 1;
  param_1[0x48a] = 1;
  puVar6 = auStack_50;
  param_1[0x48b] = 0;
  lVar7 = 4;
  do {
    puVar6 = puVar6 + -0x10;
    fn_82273C88(puVar6);
    lVar7 = lVar7 + -1;
  } while (-1 < lVar7);
  return;
}

