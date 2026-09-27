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
extern int fn_8284F8A0();
extern int fn_8284F8F8();
extern int fn_8284FA10();
extern int fn_8284FBD0();
extern int fn_82860270();
extern int fn_828602E0();


void fn_8284FEE8(void)

{
  int aiStack_10;
  
  fn_82860270();
  fn_828602E0(0,&aiStack_10);
  *(code **)(aiStack_10 + 0x20) = fn_8284FBD0;
  *(code **)(aiStack_10 + 0x24) = fn_8284FA10;
  fn_828602E0(1,&aiStack_10);
  *(code **)(aiStack_10 + 0x20) = fn_8284F8F8;
  *(code **)(aiStack_10 + 0x24) = fn_8284F8A0;
  return;
}

