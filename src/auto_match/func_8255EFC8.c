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
extern int fn_827EFC80();
extern int fn_827F3B90();
extern int fn_827F3C08();
extern int fn_827F3C20();
extern int fn_827F68F8();
extern int fn_827F74C0();
extern int fn_827F93E8();
extern int fn_82811238();
extern int fn_82811438();
extern U64 storeWordConditionalIndexed();


void fn_8255EFC8(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_RESERVE;
  byte in_cr0;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x124);
    uVar2 = *(undefined4 *)(param_1 + 0x11c);
    uVar3 = *(undefined4 *)(param_1 + 0x114);
    uVar4 = fn_827F3C20();
    fn_827F68F8(uVar4,uVar3,param_1,uVar2,uVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x110);
    uVar4 = fn_827F3C20(param_1);
    fn_827F74C0(uVar4,uVar2);
    fn_827F3C20(param_1);
    fn_827F93E8();
  }
  *(ushort *)(param_1 + 300) = *(ushort *)(param_1 + 300) & 0xfffe;
  if (param_2 == 0) {
    auStack_60[0] = 3;
    uVar4 = fn_82811438(auStack_50,auStack_60,0x10);
    uVar5 = fn_827F3C08(param_1);
    fn_82811238(0xffffffff8320a3e0,uVar5,uVar4);
  }
  else {
    uVar4 = fn_827EFC80();
    do {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar4);
        *(undefined4 *)uVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  fn_827F3B90(param_1,0,0);
  return;
}

