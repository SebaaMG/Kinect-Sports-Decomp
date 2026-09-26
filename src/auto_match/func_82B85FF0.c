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
extern int fn_82B47B90();
extern int fn_82B81A98();


void fn_82B85FF0(undefined8 param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  if ((uVar1 & 0x18) == 0) {
LAB_82b86028:
    if ((uVar1 & 2) != 0) {
      if ((param_3 & 1) != 0) goto LAB_82b86020;
    }
    if ((uVar1 & 4) != 0) {
      bVar2 = false;
      if ((param_3 & 1) != 0) goto LAB_82b86050;
    }
    bVar2 = true;
  }
  else {
    if ((param_3 & 0x18) == 0) goto LAB_82b86028;
LAB_82b86020:
    bVar2 = false;
  }
LAB_82b86050:
  puVar4 = param_2;
  if (!bVar2) {
    uVar3 = fn_82B47B90(param_1,param_2,param_2);
    puVar4 = (uint *)fn_82AD17B0(param_1,uVar3);
    *puVar4 = *param_2 & 0xe000000 | *puVar4 & 0xf1ffffff;
  }
  uVar1 = *puVar4;
  uVar5 = (ulonglong)uVar1 & 0x1f;
  if (((uVar1 & 4) != 0) && ((param_3 & 2) != 0)) {
    uVar5 = uVar5 - 4;
  }
  if ((uVar5 & param_3 & 4) != 0) {
    uVar5 = uVar5 - 4;
    param_3 = param_3 - 4;
  }
  if (((uVar5 & 1) != 0) && ((param_3 & 2) != 0)) {
    param_3 = param_3 - 2;
  }
  fn_82B81A98(param_1,puVar4[3],uVar1 >> 0x19 & 7,uVar5 | param_3,uVar1 >> 5 & 0xff);
  return;
}

