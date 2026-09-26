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
extern unsigned int *auStack_2c;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CFFFC8();
extern int fn_82D00020();
extern int fn_82D00060();
extern int fn_82D002F0();
extern int fn_82E19DA0();
extern int fn_82E1A470();
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_82E1ACB8(undefined8 param_1)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  char acStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  fn_82E19DA0(auStack_2c);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0xffffffff;
  iVar3 = fn_82CE5410();
  fn_82CEAB00(&uStack_28,*(undefined4 *)(iVar3 + 0x10),0);
  uVar1 = fn_82CFFFC8(param_1);
  fn_82D002F0(acStack_30,param_1,uVar1);
  while (acStack_30[0] != '\0') {
    uVar2 = fn_82D00020(param_1,uVar1);
    fn_82E1A470(auStack_2c,uVar2,&uStack_28,1);
    uVar1 = fn_82D00060(param_1,uVar1);
    fn_82D002F0(acStack_30,param_1,uVar1);
  }
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(&uStack_28,*(undefined4 *)(iVar3 + 0x10));
  fn_82BA02A8(&uStack_28);
  return;
}

