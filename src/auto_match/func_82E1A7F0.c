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
extern int fn_82CE5410();
extern int fn_82CFBF28();
extern int fn_82CFFFC8();
extern int fn_82D00000();
extern int fn_82D00060();
extern int fn_82D002A8();
extern int fn_82D002F0();


void fn_82E1A7F0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char acStack_30 [48];
  
  uVar1 = fn_82CFFFC8();
  fn_82D002F0(acStack_30,param_1,uVar1);
  while (acStack_30[0] != '\0') {
    uVar2 = fn_82D00000(param_1,uVar1);
    iVar3 = fn_82CE5410();
    fn_82CFBF28(uVar2,*(undefined4 *)(iVar3 + 0x10));
    uVar1 = fn_82D00060(param_1,uVar1);
    fn_82D002F0(acStack_30,param_1,uVar1);
  }
  fn_82D002A8(param_1);
  return;
}

