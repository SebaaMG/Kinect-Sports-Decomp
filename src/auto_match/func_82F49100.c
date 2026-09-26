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
extern int fn_82A2A378();
extern int fn_82F48F80();
extern int fn_82F490A0();
extern unsigned int lbl_8326181C;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82F49100(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  uStack_30 = 0;
  uStack_2c = 0;
  puVar3 = (undefined4 *)0x0;
  if ((param_2 & 0xffffffff) != 0) {
    uVar1 = fn_82F490A0(param_2);
    if ((int)uVar1 < 0) {
      return;
    }
    if ((int)uVar1 == 0) {
      lVar4 = (ulonglong)lbl_8326181C * 2 + param_2;
      uVar2 = fn_82A2A378(uVar1,0,lVar4,0xffffffffffffffff,0,0,0,0);
      if (uVar2 < 6) {
        fn_82A2A378(0,0,lVar4,0xffffffffffffffff,&uStack_30,5,0,0);
        puVar3 = &uStack_30;
      }
    }
    else if ((param_1 & 0xffffffff) == 0) {
      return;
    }
  }
  fn_82F48F80(param_1,puVar3,param_3);
  return;
}

