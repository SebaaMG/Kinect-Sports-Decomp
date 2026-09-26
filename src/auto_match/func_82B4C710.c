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
extern int fn_82AD1978();
extern int fn_82B4BAA8();
extern int fn_82B841E8();
extern unsigned int stack0x00000018;
extern unsigned int uStack00000018;


uint fn_82B4C710(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 uStack00000018;
  
  uStack00000018 = param_2;
  uVar4 = fn_82B841E8(param_1,*(undefined4 *)(param_1 + 0x234),0,0x3c,1,1);
  uVar3 = fn_82B4BAA8(param_1,&stack0x00000018);
  uVar5 = fn_82AD1978(uVar4,uVar3);
  *(undefined4 *)(uVar4 + 0x2c) = uVar5;
  iVar1 = *(int *)(param_1 + 0x234);
  puVar6 = (uint *)(iVar1 + 0x18);
  uVar2 = uVar4 & 0xfffffffe;
  *(uint *)(uVar2 + 0x24) = *puVar6;
  *(uint *)(*puVar6 & 0xfffffffe) = uVar2;
  *(uint *)(uVar2 + 0x28) = iVar1 - 0xcU | 1;
  *puVar6 = uVar2 + 0x28;
  return uVar4;
}

