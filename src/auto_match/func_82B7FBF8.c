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
extern int fn_82AB69F0();
extern int fn_82AB6E00();
extern int fn_82B7DE00();
extern int fn_82B7F170();


undefined4 *
fn_82B7FBF8(undefined8 param_1,code *param_2,ulonglong param_3,undefined4 param_4,
             ulonglong param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  uint uVar3;
  int *piVar4;
  int in_stack_00000054;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820dbba0,0x4e);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820dbba0,0x4f);
  }
  if ((param_5 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bdc,0xffffffff820dbba0,0x50);
  }
  if ((param_6 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bcc,0xffffffff820dbba0,0x51);
  }
  puVar2 = (undefined4 *)(*param_2)(param_1,0x4c);
  if (puVar2 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x57);
    return (undefined4 *)0x0;
  }
  puVar2[4] = param_4;
  puVar2[0x12] = 1;
  *puVar2 = (int)param_1;
  uVar3 = 0;
  puVar2[1] = param_2;
  piVar4 = puVar2 + 6;
  puVar2[2] = (int)param_3;
  puVar2[3] = (int)param_5;
  puVar2[5] = in_stack_00000054;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  do {
    uVar1 = (*param_2)(param_1,0xa0);
    *piVar4 = (int)uVar1;
    if ((uVar1 & 0xffffffff) == 0) {
      fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820dbcf0,0xffffffff820dbba0,0x77);
    }
    if (*piVar4 == 0) goto LAB_82b7fe20;
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 6);
  fn_82B7DE00(puVar2);
  if (in_stack_00000054 != 2) {
    uVar1 = fn_82AB69F0(param_1,param_2,param_3,param_5,param_6,param_7,param_8,0);
    puVar2[0xd] = (int)uVar1;
    if ((uVar1 & 0xffffffff) == 0) goto LAB_82b7fe20;
    fn_82AB6E00(uVar1,0);
  }
  uVar1 = fn_82AB69F0(param_1,param_2,param_3,param_5,param_6,param_7,param_8,0);
  puVar2[0xc] = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    fn_82AB6E00(uVar1,1);
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    return puVar2;
  }
LAB_82b7fe20:
  fn_82B7F170(puVar2);
  return (undefined4 *)0x0;
}

