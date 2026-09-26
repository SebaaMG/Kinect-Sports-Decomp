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
extern int fn_82AC6860();
extern int fn_82ACA920();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B841E8();


int fn_82B1BFC8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = fn_82B841E8(param_1,*(undefined4 *)(param_3 + 0x1c),0,0xf,3,4);
  if (*(int *)(param_4 + 0x10) != 0) {
    param_4 = fn_82ACA920(param_1,param_4,*(undefined4 *)(param_4 + 0xc));
  }
  uVar3 = fn_82AD1978(iVar2,param_4);
  *(undefined4 *)(iVar2 + 0x2c) = uVar3;
  if (*(int *)(param_5 + 0x10) != 0) {
    param_5 = fn_82ACA920(param_1,param_5,*(undefined4 *)(param_5 + 0xc));
  }
  uVar3 = fn_82AD1978(iVar2,param_5);
  *(undefined4 *)(iVar2 + 0x30) = uVar3;
  uVar1 = fn_82AD17B0(param_1,param_6);
  uVar3 = fn_82AD1978(iVar2,uVar1);
  *(undefined4 *)(iVar2 + 0x34) = uVar3;
  *(uint *)(iVar2 + 8) =
       (**(uint **)(iVar2 + 0x2c) >> 0x19 & 7) << 0xe | *(uint *)(iVar2 + 8) & 0xfffe3fff;
  fn_82AC6860(param_1,iVar2,param_2,param_3);
  return iVar2;
}

