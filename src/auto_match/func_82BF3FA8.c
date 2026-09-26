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
extern int fn_82BE8D50();
extern int fn_82BF6AB8();
extern int fn_82BFAAE8();
extern int fn_82BFABD8();
extern int fn_82BFABE0();
extern int fn_82BFAED0();
extern unsigned int lbl_8322B4F4;


undefined8 fn_82BF3FA8(ulonglong param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)lbl_8322B4F4;
  if (uVar3 == 0) {
    return 0;
  }
  if ((param_1 & 0xffffffff) != 0) {
    uVar1 = thunk_FUN_82be5550(0x14);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82BFAED0(uVar1,param_1);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82BFABD8(uVar3 + 0x2c,0xffffffff820eb7a4);
      iVar2 = fn_82BF6AB8(uVar3 + 0x18,uVar1);
      fn_82BFABE0(uVar3 + 0x2c,0xffffffff820eb7a4);
      if (iVar2 != 0) {
        fn_82BE8D50(uVar1);
        fn_82BFAAE8(uVar3 + 0x58,1);
        return 1;
      }
    }
  }
  return 0;
}

