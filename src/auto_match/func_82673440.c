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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_20;
extern int fn_82522ED8();
extern int fn_8262FEC8();
extern int fn_8265CA20();
extern int fn_82670C10();
extern int fn_82670C78();
extern int fn_82672718();
extern int fn_8267A1C0();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_82825F40();
extern unsigned int lbl_82002CFC;
extern U64 storeWordConditionalIndexed();


void fn_82673440(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  char in_RESERVE;
  byte in_cr0;
  undefined1 auStack_20 [8];
  
  iVar1 = param_1[0x3b];
  *param_1 = &lbl_82002CFC;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x24);
    fn_82522ED8();
  }
  param_1[0x3b] = 0;
  if (param_1[0x2e] != 0) {
    fn_8267A1C0();
    fn_8265CA20(param_1[0x2e]);
    param_1[0x2e] = 0;
  }
  if (param_1[0x3e] != 0) {
    fn_8262FEC8();
    param_1[0x3e] = 0;
  }
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  param_1[4] = 0;
  if (param_1[3] != 0) {
    fn_82687270();
  }
  param_1[3] = 0;
  fn_82672718(param_1);
  fn_82825F40(auStack_20,param_1 + 0x19,*(undefined4 *)param_1[0x1a]);
  fn_8265CA20(param_1[0x1a]);
  fn_82670C78(param_1 + 0x15);
  fn_82670C10(param_1 + 0x11);
  fn_82670C10(param_1 + 0xd);
  fn_82670C10(param_1 + 9);
  fn_82670C10(param_1 + 5);
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  if (param_1[3] != 0) {
    fn_82687270();
  }
  piVar2 = (int *)param_1[2];
  if (ZEXT48(piVar2) != 0) {
    lVar4 = ZEXT48(piVar2) + 8;
    do {
      puVar5 = (uint *)lVar4;
      lVar6 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar6,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  return;
}

