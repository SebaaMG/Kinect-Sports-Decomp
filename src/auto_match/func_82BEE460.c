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
extern unsigned int *auStack_50;
extern int fn_82BE54C8();
extern int fn_82BE6720();
extern int fn_82BE6A00();
extern int fn_82BE6C60();
extern int fn_82BE6E28();
extern int fn_82BE8E38();
extern int fn_82D7E470();
extern int fn_82D7EA10();


undefined8 fn_82BEE460(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar1;
  undefined1 auStack_50 [80];
  
  iVar2 = fn_82BE6720(param_1,0x3d,0);
  if ((((iVar2 != 0) && (iVar2 = fn_82BE6E28(param_1,param_2,0), iVar2 != 0)) &&
      (iVar2 = fn_82BE6720(param_1,0x3e,0), iVar2 != 0)) &&
     (((iVar2 = fn_82BE6E28(param_1,param_3,0), iVar2 != 0 &&
       (iVar2 = fn_82BE6720(param_1,0x3c,0), iVar2 != 0)) &&
      ((iVar2 = fn_82BE6720(param_1,1,0), iVar2 != 0 &&
       (iVar2 = fn_82BE6720(param_1,0x18,0), iVar2 != 0)))))) {
    fn_82BE8E38();
    uVar3 = fn_82D7E470();
    iVar2 = fn_82BE6720(param_1,uVar3,0);
    if ((iVar2 != 0) && (iVar2 = fn_82BE6720(param_1,0x1b,0), iVar2 != 0)) {
      fn_82BE8E38();
      uVar3 = fn_82D7EA10();
      iVar2 = fn_82BE6720(param_1,uVar3,0);
      if ((iVar2 != 0) &&
         ((iVar2 = fn_82BE6720(param_1,0x44,0), iVar2 != 0 &&
          (iVar2 = fn_82BE6E28(param_1,0xffffffff831751f0,0), iVar2 != 0)))) {
        if ((param_4 != 0) && (iVar2 = fn_82BE8E38(), iVar2 != 0)) {
          uVar1 = fn_82BE8E38();
          iVar2 = fn_82BE54C8(uVar1,auStack_50,0x21);
          if (iVar2 != 0) {
            iVar2 = fn_82BE6720(param_1,0x1d,0);
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = fn_82BE6E28(param_1,auStack_50,0);
            if (iVar2 == 0) {
              return 0;
            }
          }
        }
        iVar2 = fn_82BE6720(param_1,0x16,0);
        if (((iVar2 != 0) && (iVar2 = fn_82BE6E28(param_1,0xffffffff820e8a0c,0), iVar2 != 0))
           && (iVar2 = fn_82BE6A00(param_1), iVar2 != 0)) {
          uVar1 = fn_82BE6C60(param_1,0xcb,1,1);
          return uVar1;
        }
      }
    }
  }
  return 0;
}

