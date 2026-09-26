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
extern int fn_82ABDD90();
extern int fn_82AC9F80();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82B1B1B8();
extern int fn_82B841E8();
extern int fn_82B8A3A0();
extern unsigned int lbl_821AAD20;


void fn_82B20348(int param_1,longlong param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  dVar5 = (double)lbl_821AAD20;
  uVar2 = fn_82B8A3A0(dVar5,dVar5,dVar5,param_1,1);
  uVar2 = fn_82AD18C0(param_1,uVar2,0);
  uVar2 = fn_82B1B1B8(param_1,param_2,param_2 + 0x18,uVar2);
  iVar3 = fn_82B841E8(param_1,param_2,param_2 + 0x20,0x55,0,0);
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x60000;
  uVar2 = fn_82AC9F80(param_1,uVar2,7);
  fn_82AD1978(iVar3,uVar2);
  iVar4 = fn_82ABDD90(param_1,0x55,0,0);
  puVar1 = (undefined4 *)(iVar4 + iVar3 + -0x14);
  *puVar1 = param_3;
  puVar1[1] = *(undefined4 *)(param_4 + 4);
  puVar1[4] = puVar1[4] | 0x10;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x2000;
  return;
}

