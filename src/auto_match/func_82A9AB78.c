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
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9AB78(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2904);
  fn_82A9A860(param_2);
  uVar1 = *param_3;
  if (uVar1 < param_3[1] * 0x18 + uVar1) {
    puVar3 = (undefined4 *)(uVar1 + 8);
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d28dc);
      fn_82A99CF8(param_2,0xffffffff820d28e8,param_4,puVar3[-2],puVar3[-1]);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d28bc,*puVar3);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820293a8,puVar3[1]);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d28ec,puVar3[2]);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d28f4,puVar3[3]);
      fn_82A9A810(param_2);
      puVar2 = puVar3 + 4;
      puVar3 = puVar3 + 6;
    } while (puVar2 < (undefined4 *)(param_3[1] * 0x18 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d2904);
  return;
}

