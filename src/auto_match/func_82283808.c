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
extern unsigned int *auStack_162e;
extern unsigned int *auStack_1c2e;
extern unsigned int *auStack_1c50;
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_822750C8();
extern int fn_82279CA0();
extern int fn_8249ABC0();
extern int fn_82A1C0C0();
extern int fn_82A1E0C0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F64020();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int uStack_1630;
extern unsigned int uStack_1c30;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82283808(int param_1,uint param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_1c50 [32];
  undefined2 uStack_1c30;
  undefined1 auStack_1c2e [1534];
  undefined2 uStack_1630;
  undefined1 auStack_162e [5678];
  
  *(uint *)(param_1 + 0x160) = param_2;
  if (param_2 == 0) {
    uVar5 = 0xffffffff821a8ae0;
  }
  else if (param_2 == 1) {
    uVar5 = 0xffffffff821a8ae8;
  }
  else if (param_2 < 3) {
    uVar5 = 0xffffffff821a8af8;
  }
  else if (param_2 == 3) {
    uVar5 = 0xffffffff821a8b04;
  }
  else if (param_2 < 5) {
    uVar5 = 0xffffffff821a8b0c;
  }
  else if (param_2 == 5) {
    uVar5 = 0xffffffff821a8b14;
  }
  else {
    uVar5 = 0xffffffff821a6774;
  }
  fn_82F64020(auStack_1c50,0x14,uVar5);
  dVar6 = (double)*(float *)(param_1 + 0x15c);
  uVar1 = *(undefined4 *)(param_1 + 0x164);
  pcVar2 = (char *)fn_8225F670();
  if (((*pcVar2 != '\0') && (iVar3 = fn_8225FDE0(0x65,1), iVar3 == 0)) &&
     (cVar4 = fn_82E1CAD0(0x65), cVar4 != '\0')) {
    fn_82E1CC60(dVar6,0xffffffff821a7a04);
    fn_82E1CB08(0xffffffff821a7a18,auStack_1c50,0);
    fn_82E1CB88(0xffffffff821a7a28,uVar1);
    fn_82E1CCA8();
  }
  *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
  if (param_2 == 0) {
    fn_82279CA0(param_1,1);
    uStack_1630 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_162e,0,0x1fe);
  }
  if (param_2 == 1) {
    fn_82279CA0(param_1,1);
    uStack_1c30 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_1c2e,0,0x1fe);
  }
  if (param_2 < 3) {
    fn_82279CA0(param_1,1);
    iVar3 = fn_8249ABC0();
    *(undefined4 *)(iVar3 + 0x80) = 1;
  }
  else if (param_2 == 4) {
    fn_822750C8();
    fn_82A1C0C0();
  }
  else if (param_2 == 5) {
    uVar5 = fn_822750C8();
    fn_82A1E0C0(0,0,0xffffffff82283c60,uVar5,0,0);
  }
  return;
}

