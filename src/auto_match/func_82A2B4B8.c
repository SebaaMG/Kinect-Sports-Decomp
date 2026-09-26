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
extern unsigned int *auStack_60;
extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_28;


bool fn_82A2B4B8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  iVar1 = (**(code **)(lbl_8315D3D0 + 0x20))(param_1,auStack_60,auStack_50,0x38,0x22);
  if (-1 < iVar1) {
    *param_2 = uStack_28;
  }
  else {
    fn_82A2B760();
  }
  return -1 < iVar1;
}

