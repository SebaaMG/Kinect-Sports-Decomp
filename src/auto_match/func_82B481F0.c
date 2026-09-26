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


uint fn_82B481F0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = fn_82B841E8(param_1,*(undefined4 *)(param_1 + 0x234),0,10,1,4);
  if (*(int *)(param_2 + 0x10) != 0) {
    param_2 = fn_82ACA920(param_1,param_2,*(undefined4 *)(param_2 + 0xc));
  }
  puVar4 = (uint *)fn_82AD1978(uVar3,param_2);
  *(uint **)(uVar3 + 0x2c) = puVar4;
  uVar2 = uVar3 & 0xfffffffe;
  *(uint *)(uVar3 + 8) = (*puVar4 >> 0x19 & 7) << 0xe | *(uint *)(uVar3 + 8) & 0xfffe3fff;
  iVar1 = *(int *)(param_1 + 0x234);
  puVar4 = (uint *)(iVar1 + 0x18);
  *(uint *)(uVar2 + 0x24) = *puVar4;
  *(uint *)(*puVar4 & 0xfffffffe) = uVar2;
  *(uint *)(uVar2 + 0x28) = iVar1 - 0xcU | 1;
  *puVar4 = uVar2 + 0x28;
  return uVar3;
}

