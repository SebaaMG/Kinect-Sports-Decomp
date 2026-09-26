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


void fn_82AB4E50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1[4] == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = *(undefined4 **)(param_1[4] + 8);
    if (puVar1 != (undefined4 *)0x0) goto LAB_82ab4f10;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69e8,0xffffffff820d68b0,0x203);
LAB_82ab4f10:
  while( true ) {
    puVar2 = (undefined4 *)param_1[4];
    if (puVar1 == puVar2) break;
    puVar2 = puVar1;
    if ((puVar1 == (undefined4 *)0x0) ||
       (puVar2 = (undefined4 *)puVar1[2], puVar2 == (undefined4 *)0x0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69e8,0xffffffff820d68b0,0x20c);
    }
    puVar1 = (undefined4 *)fn_82AB4C70(puVar1);
    (*(code *)param_1[3])(param_1[1],puVar1[4]);
    fn_82B6B230(*puVar1,puVar1);
    puVar1 = puVar2;
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_82B6B230(*puVar2);
  }
  fn_82B6B0C8(*param_1);
  (*(code *)param_1[3])(param_1[1],param_1);
  return;
}

