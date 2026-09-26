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
extern int fn_82EDAED0();
extern int fn_82F01808();
extern int fn_82F02A98();
extern int fn_82F02E20();
extern int fn_82F03248();


void fn_82F03FA0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x6a4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x4a94);
  uVar4 = *(undefined4 *)(param_1 + 0x4a98);
  *(undefined4 *)(param_1 + 0x6a4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x4a9c);
  fn_82F02A98(param_1,0);
  fn_82F03248();
  fn_82F01808();
  fn_82F02E20(param_1,uVar3,uVar4,uVar1,*(undefined4 *)(param_1 + 0x4a94),
                  *(undefined4 *)(param_1 + 0x4a98),*(undefined4 *)(param_1 + 0x4a9c));
  fn_82EDAED0(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x6a4);
  *(undefined4 *)(param_1 + 0x6a4) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  fn_82F02A98(param_1,uVar1);
  fn_82F03248();
  fn_82F01808();
  return;
}

