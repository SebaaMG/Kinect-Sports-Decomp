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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_829411D0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5
             ,ulonglong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x718) != 0) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_a0,0x20,param_3,uVar2,uVar2);
      fn_828F6FA8(auStack_c0,0x20,param_4,uVar2,uVar2);
      uVar1 = fn_829410A8(param_1,0xffffffff82034748,auStack_a0,param_2,auStack_c0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((param_5 & 0xffffffff) != 0) {
        fn_828F6FA8(auStack_80,0x20,param_5,uVar2,uVar2);
        uVar1 = fn_829410A8(param_1,0xffffffff821ce420,auStack_80);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      if ((param_6 & 0xffffffff) != 0) {
        fn_828F6FA8(auStack_80,0x20,param_6,uVar2,uVar2);
        uVar1 = fn_829410A8(param_1,0xffffffff821ce420,auStack_80);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar1 = fn_829410A8(param_1,0xffffffff82034754);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x718));
  }
  return 0;
}

