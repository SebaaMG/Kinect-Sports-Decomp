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
extern int fn_8257A9F0();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828DB7C0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_30 [12];
  
  iVar1 = fn_828E9DA8(param_2);
  iVar2 = fn_828E9D90(param_2);
  if (iVar1 - iVar2 < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_828E9FF8(param_2,2);
  }
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 == 1) {
    while( true ) {
      iVar1 = fn_828E9DA8(param_2);
      iVar2 = fn_828E9D90(param_2);
      if ((iVar1 - iVar2 < 1) || (iVar1 = fn_828E9FF8(param_2,1), iVar1 == 0)) break;
      iVar1 = fn_828E9DA8(param_2);
      iVar2 = fn_828E9D90(param_2);
      if (iVar1 - iVar2 < 0x10) {
        auStack_30[0] = 0;
        fn_8257A9F0(param_1 + 0x84,auStack_30);
      }
      else {
        auStack_30[0] = fn_828E9FF8(param_2,0x10);
        fn_8257A9F0(param_1 + 0x84,auStack_30);
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (iVar1 - iVar2 < 0x10) {
      auStack_30[0] = 0;
    }
    else {
      auStack_30[0] = fn_828E9FF8(param_2,0x10);
    }
    fn_8257A9F0(param_1 + 0x84,auStack_30);
  }
  return;
}

