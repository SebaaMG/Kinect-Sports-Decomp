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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_827F3AB0();
extern int fn_827F3B90();
extern int fn_827F3C20();
extern int fn_827F68F8();
extern int fn_827F74C0();
extern int fn_827F93E8();
extern int fn_82811080();
extern int fn_82811238();
extern int fn_82811438();
extern unsigned int lbl_831F13D0;
extern U64 storeWordConditionalIndexed();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_827F0280(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  char in_RESERVE;
  byte bVar8;
  byte in_cr0;
  undefined4 auStack_a0 [4];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar4 = fn_827F3AB0();
  uVar7 = 0;
  bVar6 = false;
  if ((uVar4 & 0xffffffff) < 0x19001) {
    do {
      iVar2 = lbl_831F13D0;
      if (in_RESERVE != '\0') {
        lbl_831F13D0 = storeWordConditionalIndexed(1,0,0xffffffff831f13d0);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (iVar2 == 0) {
      bVar6 = true;
      uVar7 = 0xffffffff831f13e0;
    }
  }
  bVar8 = !bVar6 << 1;
  if (!bVar6) {
    auStack_a0[0] = 0;
    fn_82811438(auStack_90,auStack_a0,0x10);
    uVar7 = fn_82811080(0xffffffff8320a3e0,uVar4,auStack_90);
  }
  fn_827F3B90(param_1,uVar7,uVar4);
  (**(code **)(*param_1 + 0xc))(param_1);
  if (param_1[0x44] != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x49);
    iVar2 = param_1[0x47];
    iVar3 = param_1[0x45];
    uVar5 = fn_827F3C20(param_1);
    fn_827F68F8(uVar5,iVar3,param_1,iVar2,uVar1);
    iVar2 = param_1[0x44];
    uVar5 = fn_827F3C20(param_1);
    fn_827F74C0(uVar5,iVar2);
    fn_827F3C20(param_1);
    fn_827F93E8();
  }
  *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) & 0xfffe;
  fn_827F3B90(param_1,0,0);
  if (bVar6) {
    do {
      if (in_RESERVE != '\0') {
        lbl_831F13D0 = storeWordConditionalIndexed(0,0,0xffffffff831f13d0);
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
  }
  else {
    auStack_a0[0] = 3;
    uVar5 = fn_82811438(auStack_70,auStack_a0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar7,uVar5);
  }
  return;
}

