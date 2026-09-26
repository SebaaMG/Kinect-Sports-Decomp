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
extern int fn_82AB4C70();
extern int fn_82B6B0C8();
extern int fn_82B6B230();


void fn_82AB53C0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a6c,0xffffffff820d68b0,0x434);
  }
  puVar1 = (undefined4 *)param_1[4];
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[2];
  }
  if (puVar2 != puVar1) {
    do {
      puVar3 = puVar2;
      if ((puVar2 == (undefined4 *)0x0) ||
         (puVar3 = (undefined4 *)puVar2[2], puVar3 == (undefined4 *)0x0)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69e8,0xffffffff820d68b0,0x440);
      }
      puVar1 = (undefined4 *)fn_82AB4C70(puVar2);
      (*(code *)param_1[3])(param_1[1],puVar1[4]);
      fn_82B6B230(*puVar1,puVar1);
      puVar1 = (undefined4 *)param_1[4];
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    fn_82B6B230(*puVar1);
  }
  if (param_1[7] == 0) {
    fn_82B6B0C8(*param_1);
    (*(code *)param_1[3])(param_1[1],param_1);
  }
  return;
}

