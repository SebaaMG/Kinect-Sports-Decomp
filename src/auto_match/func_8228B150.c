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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_82484768();
extern int fn_8251F720();
extern int fn_8251FBA8();
extern int fn_82520158();


void fn_8228B150(int param_1)

{
  uint uVar3;
  undefined8 uVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  uVar3 = fn_82484768(*(undefined4 *)(param_1 + 0x11f0));
  if (uVar3 == 0) {
    fn_82520158(0xffffffff821977d4,auStack_20,0);
    uVar1 = 0xffffffff821977e4;
  }
  else if (uVar3 == 1) {
    fn_82520158(0xffffffff821977f8,auStack_20,0);
    uVar1 = 0xffffffff8219780c;
  }
  else if (uVar3 < 3) {
    fn_82520158(0xffffffff82197820,auStack_20,0);
    uVar1 = 0xffffffff82197830;
  }
  else {
    if (uVar3 != 3) goto LAB_8228b210;
    fn_82520158(0xffffffff82197844,auStack_20,0);
    uVar1 = 0xffffffff82197858;
  }
  fn_82520158(uVar1,auStack_1c,0);
LAB_8228b210:
  uVar4 = fn_8251F720(auStack_20,0);
  *(undefined4 *)(param_1 + 0x122c) = uVar4;
  uVar4 = fn_8251F720(auStack_1c,0);
  *(undefined4 *)(param_1 + 0x1230) = uVar4;
  uVar2 = fn_8251FBA8(*(undefined4 *)(param_1 + 0x122c));
  *(int *)(param_1 + 0x1234) = (int)((uVar2 & 0xffffffff) / 0x24);
  uVar2 = fn_8251FBA8(*(undefined4 *)(param_1 + 0x1230));
  *(int *)(param_1 + 0x1238) = (int)((uVar2 & 0xffffffff) / 0x24);
  return;
}

