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
extern unsigned int *auStack_a0;
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();
extern int fn_82F63F40();


void fn_82A9B2F0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 auStack_a0 [160];
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d29f8);
  fn_82A9A860(param_2);
  puVar6 = (uint *)*param_3;
  if (puVar6 < puVar6 + param_3[1]) {
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d29dc);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2998,*puVar6 >> 0x14 & 0xf);
      fn_82F63F40(auStack_a0,0xffffffff820d29b8,*(undefined1 *)puVar6);
      fn_82A99D88(param_2,0xffffffff820d29c0,auStack_a0);
      uVar1 = *puVar6;
      uVar5 = 0xffffffff821ce364;
      if ((uVar1 & 0x80000) == 0) {
        uVar5 = 0xffffffff82196582;
      }
      uVar4 = 0xffffffff821ce360;
      if ((uVar1 & 0x40000) == 0) {
        uVar4 = 0xffffffff82196582;
      }
      uVar3 = 0xffffffff821ce35c;
      if ((uVar1 & 0x20000) == 0) {
        uVar3 = 0xffffffff82196582;
      }
      uVar2 = 0xffffffff821ce358;
      if ((uVar1 & 0x10000) == 0) {
        uVar2 = 0xffffffff82196582;
      }
      fn_82F63F40(auStack_a0,0xffffffff820d29ec,uVar2,uVar3,uVar4,uVar5);
      fn_82A99D88(param_2,0xffffffff82005da8,auStack_a0);
      fn_82A9A810(param_2);
      puVar6 = puVar6 + 1;
    } while (puVar6 < (uint *)(param_3[1] * 4 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d29f8);
  return;
}

