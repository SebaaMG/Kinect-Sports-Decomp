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
extern int fn_82AB15D0();
extern int fn_82B6B008();


undefined4 * fn_82B9F468(undefined8 param_1,code *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820dddc0,0x42);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820dddc0,0x43);
  }
  puVar2 = (undefined4 *)(*param_2)(param_1,0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dde30,0xffffffff820dddc0,0x46);
  }
  puVar2[1] = (int)param_1;
  puVar2[2] = param_2;
  *puVar2 = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[3] = (int)param_3;
  uVar1 = fn_82B6B008(param_4,0x14,param_2,param_3,param_1);
  puVar2[4] = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820dde18,0xffffffff820dddc0,0x58);
  }
  return puVar2;
}

