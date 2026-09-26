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
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B1F0();
extern int fn_82752D38();
extern int fn_827532F0();
extern unsigned int lbl_831E7E64;


void fn_827533C8(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint auStack_50 [20];
  
  if ((param_1 & 0xffffffff) != 0) {
    fn_8268AFB0(auStack_50,lbl_831E7E64);
    fn_8268B1F0(auStack_50,param_2,0xffffffffffffffff);
    fn_8268B1F0(auStack_50,param_3,0xffffffffffffffff);
    fn_8268B1F0(auStack_50,param_4,0xffffffffffffffff);
    uVar1 = fn_82752D38(param_5);
    fn_8268B1F0(auStack_50,uVar1,0xffffffffffffffff);
    fn_8268B1F0(auStack_50,param_6,0xffffffffffffffff);
    uVar2 = (ulonglong)auStack_50[0];
    if (uVar2 == 0) {
      uVar2 = 0xffffffff82196582;
    }
    fn_827532F0(param_1,uVar2);
    fn_8268AFD8(auStack_50);
  }
  return;
}

