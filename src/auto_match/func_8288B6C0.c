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
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289F350();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828BE158();
extern int fn_828C6CD0();


void fn_8288B6C0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [48];
  
  uVar1 = fn_8289F350(param_1,param_3);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_8265C9E0(0xa8);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828B5580(auStack_30,param_2);
      uVar3 = fn_828C6CD0(uVar2,uVar3);
    }
    fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
    uVar4 = fn_82897BD0(uVar1);
    fn_828BE158(param_1,uVar3,uVar4,0);
  }
  fn_828B55B0(param_2);
  return;
}

