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
extern int fn_82FFFC20();
extern int fn_8302BBA8();


void fn_8303CBA8(int param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  
  dVar5 = (double)fn_82FFFC20(param_1 + 0x2c);
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  iVar3 = *param_2;
  dVar5 = (double)(float)(dVar5 + (double)*(float *)(param_1 + 0x28));
  uVar4 = fn_8302BBA8(param_1);
  (**(code **)(iVar3 + 0xac))(dVar5,param_2,param_3,uVar2,param_4,uVar1 >> 3 & 0x1f,uVar4);
  return;
}

