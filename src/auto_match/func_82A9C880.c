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
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9C880(int param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2b28);
  fn_82A9A860(param_2);
  uVar1 = *param_3;
  if (uVar1 < param_3[1] * 0x14 + uVar1) {
    piVar6 = (int *)(uVar1 + 8);
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff8200ed6c);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,
                    (int)((int)piVar6 + (-8 - *param_3)) / 0x14);
      lVar2 = -0x7de69a7e;
      if (piVar6[-2] != 0xffffffff) {
        lVar2 = (ulonglong)*(uint *)(param_1 + 0x2c) + (ulonglong)(uint)piVar6[-2];
      }
      fn_82A99D88(param_2,0xffffffff820d2ac0,lVar2);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2b14,piVar6[-1]);
      fn_82A9A860(param_2);
      puVar5 = (undefined4 *)*piVar6;
      puVar4 = puVar5 + piVar6[1];
      for (; puVar5 < puVar4; puVar5 = puVar5 + 1) {
        fn_82A99BC8(param_2);
        fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2b1c);
        fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,*puVar5);
        fn_82A9A810(param_2);
        puVar4 = (undefined4 *)(piVar6[1] * 4 + *piVar6);
      }
      fn_82A99C28(param_2,0xffffffff8200ed6c);
      piVar3 = piVar6 + 3;
      piVar6 = piVar6 + 5;
    } while (piVar3 < (int *)(param_3[1] * 0x14 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d2b28);
  return;
}

