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
extern int fn_82B841E8();


uint fn_82B494C8(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar4;
  undefined8 uVar3;
  uint *puVar5;
  
  uVar4 = fn_82B841E8(param_1,*(undefined4 *)(param_1 + 0x234),0,9,1,4);
  uVar3 = fn_82AD17B0(param_1,param_2);
  puVar5 = (uint *)fn_82AD1978(uVar4,uVar3);
  *(uint **)(uVar4 + 0x2c) = puVar5;
  uVar2 = uVar4 & 0xfffffffe;
  *(uint *)(uVar4 + 8) = (*puVar5 >> 0x19 & 7) << 0xe | *(uint *)(uVar4 + 8) & 0xfffe3fff;
  iVar1 = *(int *)(param_1 + 0x234);
  puVar5 = (uint *)(iVar1 + 0x18);
  *(uint *)(uVar2 + 0x24) = *puVar5;
  *(uint *)(*puVar5 & 0xfffffffe) = uVar2;
  *(uint *)(uVar2 + 0x28) = iVar1 - 0xcU | 1;
  *puVar5 = uVar2 + 0x28;
  return uVar4;
}

