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
extern int fn_82AD1978();
extern int fn_82B841E8();


int fn_82B475D8(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar2 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                            (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,0x68,1,*param_2 >> 0x19 & 7
                           );
  uVar3 = fn_82AD1978(iVar2,param_2);
  uVar1 = *(uint *)(iVar2 + 8);
  *(undefined4 *)(iVar2 + 0x2c) = uVar3;
  iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  puVar5 = (uint *)(iVar4 + iVar2 + -4);
  *puVar5 = *puVar5 | 0x200000;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
  return iVar2;
}

