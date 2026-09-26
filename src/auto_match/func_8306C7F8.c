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
extern int fn_82A2A7D0();
extern unsigned int iStack_18;
extern unsigned int iStack_6c;


void fn_8306C7F8(longlong *param_1)

{
  uint uVar1;
  int aiStack_c0 [21];
  int iStack_6c;
  int iStack_18;
  
  uVar1 = fn_82A2A7D0(aiStack_c0);
  if (uVar1 != 0) {
    if ((uVar1 == 1) || (iStack_6c = iStack_18, uVar1 < 3)) {
      aiStack_c0[0] = iStack_6c + aiStack_c0[0];
    }
    else {
      aiStack_c0[0] = 0;
    }
  }
  *param_1 = (longlong)(aiStack_c0[0] * 0x3c) * 10000000;
  return;
}

