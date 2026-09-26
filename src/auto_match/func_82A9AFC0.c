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
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99CF8();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9AFC0(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d297c);
  fn_82A9A860(param_2);
  uVar1 = *param_3;
  if (uVar1 < param_3[1] * 0xc + uVar1) {
    puVar4 = (uint *)(uVar1 + 8);
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2968);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,puVar4[-2]);
      uVar2 = 0xffffffff82196f18;
      if ((*puVar4 & 0x20000) == 0) {
        uVar2 = 0xffffffff82196f10;
      }
      fn_82A99D88(param_2,0xffffffff820d2974,uVar2);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff8200ed2c,puVar4[-1]);
      fn_82A99CF8(param_2,0xffffffff820d28e8,param_4,*puVar4 >> 0x12 & 1,*puVar4 >> 0x13);
      fn_82A9A810(param_2);
      puVar3 = puVar4 + 1;
      puVar4 = puVar4 + 3;
    } while (puVar3 < (uint *)(param_3[1] * 0xc + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d297c);
  return;
}

