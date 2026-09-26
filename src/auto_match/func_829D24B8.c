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
extern unsigned int lbl_83215060;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_832170E0;
extern unsigned int lbl_832177AC;
extern unsigned int lbl_832177B4;


undefined8 fn_829D24B8(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else if (lbl_83215A40 == 0) {
    uVar1 = 0xffffffff83010002;
  }
  else if (lbl_832170E0 == 0) {
    uVar1 = 0xffffffff83010005;
  }
  else {
    RtlEnterCriticalSection(0xffffffff8315c3cc);
    if (lbl_83215060 == 0) {
      lbl_832177B4 = ((((U64)(lbl_832177B4)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(*param_1 - lbl_832177AC)) & ((U64)0xFFFFFFFF)) << 0));
      if (*param_1 == 0) {
        lbl_832177B4 = ((((U64)(lbl_832177B4)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(0)) & ((U64)0xFFFFFFFF)) << 0));
      }
      lbl_832177B4 = ((((U64)(lbl_832177B4)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(param_1[1] - lbl_832177AC)) & ((U64)0xFFFFFFFF)) << 32));
      if (param_1[1] == 0) {
        lbl_832177B4 = ((((U64)(lbl_832177B4)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(0)) & ((U64)0xFFFFFFFF)) << 32));
      }
      RtlLeaveCriticalSection(0xffffffff8315c3cc);
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff8301000b;
      RtlLeaveCriticalSection(0xffffffff8315c3cc);
    }
  }
  return uVar1;
}

