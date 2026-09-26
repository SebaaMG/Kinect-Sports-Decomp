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
extern unsigned int lbl_8322344C;


ulonglong fn_82A81B88(byte param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (lbl_8322344C == '\0') {
    iVar1 = -0x7fff0001;
  }
  else {
    if ((((param_2 == 0) || (param_3 == 0)) || (param_1 == 0)) || ((param_1 & 0xfc) != 0)) {
      iVar1 = -0x7ff8ffa9;
    }
    else {
      iVar1 = XamAvatarGetMetadataRandom();
    }
    if (-1 < iVar1) {
      return -(ulonglong)(param_4 != 0) & 0x3e5;
    }
  }
  if (param_4 == 0) {
    thunk_FUN_82a2b748();
  }
  else {
    *(int *)(param_4 + 0x18) = iVar1;
  }
  return 0x65b;
}

