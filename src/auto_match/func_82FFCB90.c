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
extern int fn_82FFBD98();
extern int fn_8300EE60();
extern int fn_8302B618();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


undefined8
fn_82FFCB90(longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uStack00000020;
  undefined4 uStack00000028;
  uint uStack00000030;
  uint uStack00000034;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  
  uStack00000030 = (uint)(param_4 >> 0x20);
  uVar1 = uStack00000030;
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  _uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  iVar2 = fn_8302B618(param_1 + 0x39c,uVar1);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x4c) != 0) {
      *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + -1;
    }
    fn_82FFBD98(iVar2,0);
  }
  uVar4 = 0xffffffffffffffff;
  if (uStack00000020 < 8) {
    if (uStack00000020 == 1) {
code_r0x82ffcc28:
      uVar4 = _uStack00000030 & 0xffffffff;
      uVar3 = uVar1;
      goto code_r0x82ffcc48;
    }
    if ((uStack00000020 != 2) && (uStack00000020 != 3)) {
      uVar3 = 0;
      if (uStack00000020 == 4) goto code_r0x82ffcc48;
      if (uStack00000020 != 5) {
        uVar3 = uVar1;
        if ((uStack00000020 == 6) || (uStack00000020 != 0)) goto code_r0x82ffcc48;
        goto code_r0x82ffcc28;
      }
    }
  }
  uVar3 = -(uint)(uVar1 == 1) & uStack00000034;
code_r0x82ffcc48:
  fn_8300EE60(param_1 + 0x4a4,_uStack00000020 & 0xffffffff,uVar3,1,uVar4,uStack00000028);
  return 1;
}

