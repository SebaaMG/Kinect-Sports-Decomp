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
extern int fn_82AD1978();
extern int fn_82B841E8();


int fn_82B1B2E8(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_82B841E8(param_1,*(undefined4 *)(param_3 + 0x1c),0,0x3e,1,1);
  if (*(int *)(param_4 + 0x10) != 0) {
    param_4 = fn_82ACA920(param_1,param_4,*(undefined4 *)(param_4 + 0xc));
  }
  uVar2 = fn_82AD1978(iVar1,param_4);
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  fn_82AC6860(param_1,iVar1,param_2,param_3);
  return iVar1;
}

