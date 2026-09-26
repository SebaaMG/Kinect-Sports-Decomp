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
extern int fn_82F6F870();
extern int fn_82F8DD20();
extern int fn_82F8DDF0();
extern int fn_82F8E4A0();
extern int fn_82F8EF78();
extern int fn_82F8F000();
extern int fn_82F8F070();
extern int fn_82F93A00();
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_2c;


int fn_82F8DBA0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar6;
  undefined8 uVar5;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined1 auStack_70 [68];
  undefined4 uStack_2c;
  
  uVar1 = lbl_831BB8F0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  iVar6 = fn_82F8F070(0xa0);
  if (iVar6 == 0) {
    uStack_2c = 0;
  }
  else {
    uStack_2c = fn_82F8DD20(iVar6);
  }
  fn_82F8EF78(auStack_70,uStack_2c);
  iVar6 = fn_82F93A00(auStack_70);
  uVar2 = uStack00000024;
  if (iVar6 == 0) {
    fn_82F8F000(auStack_70);
    fn_82F6F870(uVar1);
    iVar6 = -0x7ff8fff2;
  }
  else {
    uVar5 = fn_82F93A00(auStack_70);
    iVar6 = fn_82F8E4A0(uVar5,uVar2);
    uVar4 = uStack0000002c;
    uVar3 = uStack0000001c;
    uVar2 = uStack00000014;
    if (iVar6 < 0) {
      fn_82F8F000(auStack_70);
      fn_82F6F870(uVar1);
    }
    else {
      uVar5 = fn_82F93A00(auStack_70);
      iVar6 = fn_82F8DDF0(uVar5,uVar2,uVar3,uVar4);
      fn_82F8F000(auStack_70);
      fn_82F6F870(uVar1);
    }
  }
  return iVar6;
}

