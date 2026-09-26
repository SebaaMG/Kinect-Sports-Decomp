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
extern int fn_82ACA920();
extern int fn_82AD1978();
extern int fn_82B841E8();


uint fn_82B1AB88(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = fn_82B841E8(param_1,param_2,0,0xe,3,4);
  if (*(int *)(param_3 + 0x10) != 0) {
    param_3 = fn_82ACA920(param_1,param_3,*(undefined4 *)(param_3 + 0xc));
  }
  uVar3 = fn_82AD1978(uVar2,param_3);
  *(undefined4 *)(uVar2 + 0x2c) = uVar3;
  if (*(int *)(param_4 + 0x10) != 0) {
    param_4 = fn_82ACA920(param_1,param_4,*(undefined4 *)(param_4 + 0xc));
  }
  uVar3 = fn_82AD1978(uVar2,param_4);
  *(undefined4 *)(uVar2 + 0x30) = uVar3;
  if (*(int *)(param_5 + 0x10) != 0) {
    param_5 = fn_82ACA920(param_1,param_5,*(undefined4 *)(param_5 + 0xc));
  }
  uVar3 = fn_82AD1978(uVar2,param_5);
  *(undefined4 *)(uVar2 + 0x34) = uVar3;
  uVar1 = uVar2 & 0xfffffffe;
  *(uint *)(uVar2 + 8) =
       (**(uint **)(uVar2 + 0x2c) >> 0x19 & 7) << 0xe | *(uint *)(uVar2 + 8) & 0xfffe3fff;
  *(undefined4 *)(uVar1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  *(uint *)(*(uint *)(param_2 + 0x18) & 0xfffffffe) = uVar1;
  *(uint *)(uVar1 + 0x28) = param_2 - 0xcU | 1;
  *(uint *)(param_2 + 0x18) = uVar1 + 0x28;
  return uVar2;
}

