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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_828F5960();
extern int fn_828F6FA8();
extern unsigned int lbl_8315B5D8;
extern unsigned int lbl_8315B5E4;
extern unsigned int lbl_8315B610;
extern unsigned int lbl_8315B624;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82941320(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5,longlong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uStack00000028;
  ulonglong uStack00000030;
  longlong lStack00000038;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  
  uVar2 = ((param_2 & 0xffffffff) >> 0x14 & 0x700 | param_2 & 0x1800) >> 8;
  if (uVar2 < 0xf) {
    if (uVar2 == 0xe) {
      uStack00000040 = 0xffffffff8315b5d8;
      param_6 = -0x7dfd0000;
      param_5 = param_2 & 0x7ff;
      uVar1 = 0xffffffff82034774;
      uStack00000028 = ZEXT48(lbl_8315B610);
      goto fn_828F6FA8;
    }
    if (1 < uVar2) {
      if (uVar2 == 3) {
        uStack00000040 = 0xffffffff8315b5d8;
        param_6 = -0x7dfd0000;
        param_5 = param_2 & 0x7ff;
        uVar1 = 0xffffffff82034788;
        uStack00000028 = ZEXT48(lbl_8315B5E4);
        goto fn_828F6FA8;
      }
      if ((uVar2 < 5) || (6 < uVar2)) goto code_r0x829413d4;
    }
  }
  else if (uVar2 != 0xf) {
    if (uVar2 == 0x13) {
      param_2 = 0xffffffff8315b5d8;
      uStack00000040 = 0xffffffff82030000;
      uVar1 = 0xffffffff8203475c;
      uStack00000028 = ZEXT48(lbl_8315B624);
      goto fn_828F6FA8;
    }
code_r0x829413d4:
    param_6 = uVar2 << 2;
    uStack00000040 = 0xffffffff8315b5d8;
    uVar2 = param_2 & 0x7ff;
    param_2 = 0xffffffff82030000;
    param_5 = uVar2 + param_5;
    uVar1 = 0xffffffff82034768;
    uStack00000028 = (ulonglong)*(uint *)((int)&lbl_8315B5D8 + (int)param_6);
    goto fn_828F6FA8;
  }
  uStack00000040 = 0xffffffff8315b5d8;
  param_6 = -0x7dfd0000;
  param_5 = param_2 & 0x7ff;
  uVar1 = 0xffffffff82034798;
  uStack00000028 = (ulonglong)*(uint *)((int)&lbl_8315B5D8 + (int)(uVar2 << 2));
fn_828F6FA8:
  if ((param_4 & 0xffffffff) < 0x80000000) {
    uStack00000030 = param_5;
    lStack00000038 = param_6;
    uStack00000048 = param_2;
    uVar1 = fn_828F5960(param_3,param_4,uVar1,&stack0x00000028);
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

