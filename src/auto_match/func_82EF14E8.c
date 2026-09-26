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
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_82EF1198();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


undefined8 fn_82EF14E8(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar2;
  undefined8 uVar1;
  int iStack0000001c;
  undefined4 auStack_20 [2];
  undefined1 auStack_18 [8];
  
  auStack_20[0] = 0;
  if ((param_2 == 0) || (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    iStack0000001c = param_2;
    iVar2 = fn_82EF1198(param_1 + 0x94,&stack0x0000001c,auStack_20,auStack_18);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      *param_3 = auStack_20[0];
    }
  }
  return uVar1;
}

