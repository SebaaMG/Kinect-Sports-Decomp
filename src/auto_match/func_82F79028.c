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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack00000020 ((*(U64*)&uStack00000020))
#define _uStack00000028 ((*(U64*)&uStack00000028))
#define _uStack00000030 ((*(U64*)&uStack00000030))
extern int fn_82D7E470();
extern int fn_82F78F98();
extern int fn_82F79400();
extern unsigned int iStack_3c;
extern unsigned int lbl_831BBCB0;
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined8
fn_82F79028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  undefined8 in_r8;
  int *piVar2;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar2 = &lbl_831BBCB0;
  iVar1 = 0;
  do {
    if (*piVar2 == param_5) {
      iStack_3c = *(int *)(iVar1 * 8 + -0x7ce4434c);
      goto LAB_82f79088;
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < -0x7ce44268);
  iStack_3c = 0;
LAB_82f79088:
  _uStack00000020 = param_1;
  _uStack00000028 = param_2;
  _uStack00000030 = param_3;
  if (iStack_3c == 0) {
    fn_82F79400(in_r8,0xffffffffc007feff);
    fn_82F78F98(param_4);
  }
  else {
    uStack00000020 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack00000024 = (undefined4)param_1;
    uStack00000028 = (undefined4)((ulonglong)param_2 >> 0x20);
    uStack0000002c = (undefined4)param_2;
    uStack00000030 = (undefined4)((ulonglong)param_3 >> 0x20);
    uStack00000034 = (undefined4)param_3;
    uStack_40 = (undefined4)param_4;
    uStack_38 = uStack00000020;
    uStack_34 = uStack00000024;
    uStack_30 = uStack00000028;
    uStack_2c = uStack0000002c;
    uStack_28 = uStack00000030;
    uStack_24 = uStack00000034;
    fn_82F79400(in_r8,0xffffffffc007feff);
    iVar1 = fn_82D7E470(&uStack_40);
    if (iVar1 == 0) {
      fn_82F78F98(param_4);
    }
    param_3 = CONCAT44(uStack_28,uStack_24);
  }
  return param_3;
}

