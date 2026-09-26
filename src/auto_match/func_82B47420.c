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
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B471E8();
extern int fn_82B84350();


void fn_82B47420(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,ulonglong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 in_stack_00000054;
  
  lVar6 = 2;
  uVar1 = fn_82B471E8();
  uVar2 = fn_82B471E8(param_1,param_4,param_5);
  if ((param_6 & 0xffffffff) != 0) {
    param_6 = fn_82B471E8(param_1,param_6,param_7);
    lVar6 = 3;
  }
  if ((param_8 & 0xffffffff) != 0) {
    param_8 = fn_82B471E8(param_1,param_8,in_stack_00000054);
    lVar6 = lVar6 + 1;
  }
  iVar3 = fn_82B84350(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                            (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,lVar6);
  uVar4 = fn_82AD1978(iVar3,uVar1);
  *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  uVar4 = fn_82AD1978(iVar3,uVar2);
  *(undefined4 *)(iVar3 + 0x30) = uVar4;
  iVar5 = 2;
  if ((param_6 & 0xffffffff) != 0) {
    uVar4 = fn_82AD1978(iVar3,param_6);
    *(undefined4 *)(iVar3 + 0x34) = uVar4;
    iVar5 = 3;
  }
  if ((param_8 & 0xffffffff) != 0) {
    uVar4 = fn_82AD1978(iVar3,param_8);
    *(undefined4 *)((iVar5 + 0xb) * 4 + iVar3) = uVar4;
  }
  fn_82AD17B0(param_1,iVar3);
  return;
}

