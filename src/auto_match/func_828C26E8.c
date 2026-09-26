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
extern int fn_82230218();


undefined1 * fn_828C26E8(undefined1 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230218(param_1,param_2,0,0xffffffffffffffff);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (puVar2 != param_3) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = param_3[1];
    param_3[1] = uVar1;
    uVar1 = *puVar2;
    *puVar2 = *param_3;
    *param_3 = uVar1;
  }
  return param_1;
}

