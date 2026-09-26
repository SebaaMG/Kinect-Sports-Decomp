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
extern unsigned int *auStack_30;
extern int fn_82F63BA0();
extern int fn_82F63C78();
extern int fn_82F664B0();
extern int fn_82F686F8();
extern int fn_82F6A3F0();


undefined8 fn_82F6D050(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_30 [48];
  
  lVar1 = thunk_FUN_82f6a4b0(param_1,0x2e);
  uVar3 = lVar1 + 1;
  if (((uVar3 & 0xffffffff) < (param_1 & 0xffffffff)) ||
     ((param_2 & 0xffffffff) <= (uVar3 - param_1 & 0xffffffff))) {
    fn_82F63BA0();
  }
  else {
    lVar1 = fn_82F6A3F0(uVar3,0,0x20);
    if ((lVar1 + 1U & 0xffffffff) < (param_3 & 0xffffffff)) {
      iVar2 = fn_82F686F8(lVar1 + 1U,auStack_30,8,0x20);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63C78(0,0,0,0,0);
      }
      iVar2 = fn_82F664B0(uVar3,(param_1 - uVar3) + param_2,auStack_30);
      if (iVar2 == 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
  }
  return 0xffffffffffffffff;
}

