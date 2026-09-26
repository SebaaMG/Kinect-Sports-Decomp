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
#define _uStack00000020 ((*(U64*)&uStack00000020))
#define _uStack00000028 ((*(U64*)&uStack00000028))
extern int fn_82FFCDE0();
extern int fn_8300EE60();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000040;


undefined8
fn_82FFD318(longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uStack00000020;
  undefined4 uStack00000028;
  ulonglong uStack00000030;
  undefined8 uStack00000040;
  
  uVar1 = param_4 >> 0x20;
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000040 = param_6;
  uVar2 = fn_82FFCDE0(param_1);
  uVar4 = 0xffffffffffffffff;
  if (uStack00000020 < 8) {
    if (uStack00000020 == 1) {
LAB_82ffd3ac:
      uVar3 = uVar1;
      uVar4 = param_4 & 0xffffffff;
      goto LAB_82ffd3c8;
    }
    if ((uStack00000020 != 2) && (uStack00000020 != 3)) {
      uVar3 = 0;
      if (uStack00000020 == 4) goto LAB_82ffd3c8;
      if (uStack00000020 != 5) {
        uVar3 = uVar1;
        if ((uStack00000020 == 6) || (uStack00000020 != 0)) goto LAB_82ffd3c8;
        goto LAB_82ffd3ac;
      }
    }
  }
  uVar3 = -(ulonglong)(uVar1 == 1) & param_4 & 0xffffffff;
LAB_82ffd3c8:
  fn_8300EE60(param_1 + 0x4a4,_uStack00000020 & 0xffffffff,uVar3,uVar2,uVar4,uStack00000028);
  return uVar2;
}

