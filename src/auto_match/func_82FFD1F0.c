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
#define _uStack00000030 ((*(U64*)&uStack00000030))
extern int fn_82FFCF20();
extern int fn_8300EE60();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


undefined8
fn_82FFD1F0(longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uStack00000020;
  undefined4 uStack00000028;
  uint uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  _uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  fn_82FFCF20();
  uVar2 = 0xffffffffffffffff;
  uVar1 = 0;
  if (uStack00000020 < 8) {
    if (uStack00000020 == 1) {
code_r0x82ffd254:
      uVar2 = _uStack00000030 & 0xffffffff;
code_r0x82ffd258:
      uVar1 = (ulonglong)uStack00000030;
      goto code_r0x82ffd278;
    }
    if ((uStack00000020 != 2) && (uStack00000020 != 3)) {
      if (uStack00000020 == 4) goto code_r0x82ffd278;
      if (uStack00000020 != 5) {
        if ((uStack00000020 != 6) && (uStack00000020 == 0)) goto code_r0x82ffd254;
        goto code_r0x82ffd258;
      }
    }
  }
  uVar1 = -(ulonglong)(uStack00000030 == 1) & _uStack00000030 & 0xffffffff;
code_r0x82ffd278:
  fn_8300EE60(param_1 + 0x4a4,_uStack00000020 & 0xffffffff,uVar1,1,uVar2,uStack00000028);
  return 1;
}

