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


uint fn_82B487F8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  uVar3 = fn_82B841E8(param_1,*(undefined4 *)(param_1 + 0x234),0,0x1d,2,4);
  if (*(int *)(param_2 + 0x10) != 0) {
    param_2 = fn_82ACA920(param_1,param_2,*(undefined4 *)(param_2 + 0xc));
  }
  uVar4 = fn_82AD1978(uVar3,param_2);
  *(undefined4 *)(uVar3 + 0x2c) = uVar4;
  if (*(int *)(param_3 + 0x10) != 0) {
    param_3 = fn_82ACA920(param_1,param_3,*(undefined4 *)(param_3 + 0xc));
  }
  uVar4 = fn_82AD1978(uVar3,param_3);
  *(undefined4 *)(uVar3 + 0x30) = uVar4;
  iVar1 = *(int *)(param_1 + 0x234);
  puVar5 = (uint *)(iVar1 + 0x18);
  uVar2 = uVar3 & 0xfffffffe;
  *(uint *)(uVar2 + 0x24) = *puVar5;
  *(uint *)(*puVar5 & 0xfffffffe) = uVar2;
  *(uint *)(uVar2 + 0x28) = iVar1 - 0xcU | 1;
  *puVar5 = uVar2 + 0x28;
  return uVar3;
}

