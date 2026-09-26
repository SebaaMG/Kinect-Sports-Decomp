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
#define _uStack00000028 ((*(U64*)&uStack00000028))
#define _uStack00000030 ((*(U64*)&uStack00000030))
extern unsigned int *auStack_60;
extern int fn_82FE6608();
extern int fn_82FF9278();
extern int fn_82FF9FA8();
extern int fn_8300F1A8();
extern int fn_8300F208();
extern int fn_8302B530();
extern int fn_8302B540();
extern int fn_8302B618();
extern int fn_8302B660();
extern unsigned int iStack_5c;
extern unsigned int lbl_832642E4;
extern unsigned int lbl_832642F0;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack_5e;


undefined8
fn_82FFA798(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar3;
  undefined2 uVar4;
  undefined8 uVar2;
  undefined8 uStack00000020;
  undefined4 uStack00000028;
  undefined4 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined1 auStack_60 [2];
  undefined2 uStack_5e;
  int iStack_5c;
  
  uStack00000020 = param_2;
  _uStack00000028 = param_3;
  _uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  fn_8302B530();
  uVar1 = uStack00000030;
  iVar3 = fn_8302B618(param_1 + 0x39c,uStack00000030);
  if (iVar3 == 0) {
    fn_8302B540();
    fn_82FF9278(param_1,&stack0x00000020,0x36);
    uVar2 = 0x36;
  }
  else {
    fn_8302B660((ulonglong)lbl_832642F0 + 0x39c,uVar1);
    if ((*(byte *)(iVar3 + 0x48) & 0x80) == 0) {
      fn_8302B540();
      fn_82FF9278(param_1,&stack0x00000020,1);
      uVar2 = 1;
    }
    else {
      fn_8302B540();
      fn_82FF9FA8(iVar3);
      *(undefined4 *)(iVar3 + 0x2c) = (((U64)(uStack00000020) >> 32) & 0xFFFFFFFF);
      *(undefined4 *)(iVar3 + 0x30) = uStack00000028;
      uStack_5e = 0x18;
      iStack_5c = iVar3;
      uVar4 = fn_8300F1A8();
      fn_8300F208(lbl_832642E4,auStack_60,uVar4);
      uVar2 = fn_82FE6608();
    }
  }
  return uVar2;
}

