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
extern int fn_82EE5E28();
extern int fn_82EE5F60();


undefined8 fn_82E769A8(int param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte abStack_40 [64];
  
  if (param_2 == (uint *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  uVar1 = *(uint *)(param_1 + 0x230);
  if (uVar1 == 0) {
LAB_82e769e4:
    *param_2 = uVar1;
    return 0x400d3a98;
  }
  abStack_40[0] = 0;
  uVar2 = fn_82EE5F60(param_1 + 0x218,abStack_40,1);
  if (-1 < (int)uVar2) {
    if ((abStack_40[0] & 0x80) != 0x80) {
      uVar2 = 0;
      *param_2 = 0;
      goto LAB_82e76a9c;
    }
    *param_2 = 1;
    if ((abStack_40[0] & 0x60) != 0) {
      return 0xffffffffc00d3a9a;
    }
    *(uint *)(param_1 + 0x13c) = abStack_40[0] & 0x10;
    if ((abStack_40[0] & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x138);
    }
    if ((abStack_40[0] & 0xf) != 2) {
      return 0xffffffffc00d3a9a;
    }
    if (uVar1 < 3) goto LAB_82e769e4;
    uVar2 = fn_82EE5E28(param_1 + 0x218,3);
    if (-1 < (int)uVar2) {
      *(undefined1 *)(param_1 + 0x150) = 3;
      *param_2 = 3;
    }
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_82e76a9c:
  *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) | 1;
  return uVar2;
}

