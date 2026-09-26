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
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD2128();
extern int fn_82B42C70();
extern int fn_82B841E8();


int fn_82AD4E58(undefined8 param_1)

{
  uint uVar1;
  int iVar3;
  uint uVar4;
  undefined8 uVar2;
  undefined4 uVar5;
  undefined8 in_r7;
  undefined8 in_r8;
  
  iVar3 = fn_82B42C70();
  uVar4 = fn_82B841E8(param_1,iVar3,0,in_r7,1,1);
  *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) | 0x40;
  uVar2 = fn_82AD18C0(param_1,in_r8,0);
  uVar5 = fn_82AD1978(uVar4,uVar2);
  uVar1 = uVar4 & 0xfffffffe;
  *(undefined4 *)(uVar4 + 0x2c) = uVar5;
  *(undefined4 *)(uVar1 + 0x24) = *(undefined4 *)(iVar3 + 0x20);
  *(uint *)(*(uint *)(iVar3 + 0x20) & 0xfffffffe) = uVar1;
  *(uint *)(uVar1 + 0x28) = iVar3 - 4U | 1;
  *(uint *)(iVar3 + 0x20) = uVar1 + 0x28;
  if (*(int *)(iVar3 + 0x60) != 0) {
    fn_82AD2128(uVar4,1,*(int *)(iVar3 + 0x60),param_1);
  }
  *(uint *)(iVar3 + 0x60) = uVar4;
  *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) | 0x2000000;
  return iVar3;
}

