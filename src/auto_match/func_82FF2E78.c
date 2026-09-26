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
extern unsigned int *auStack_20;
extern int fn_82FF2778();
extern int fn_82FF2D40();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_8326431C;
extern unsigned int lbl_832643D0;


undefined8 fn_82FF2E78(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 auStack_20 [8];
  
  uVar1 = fn_82FF2778((double)lbl_8326431C,lbl_831BC768);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = fn_82FF2778((double)lbl_832643D0,lbl_831BC770);
  }
  if ((uVar1 & 0xff) != 0) {
    auStack_20[0] = 0;
    uVar2 = fn_82FF2D40(param_1,uVar1,0,0,1,auStack_20);
    return uVar2;
  }
  return 1;
}

