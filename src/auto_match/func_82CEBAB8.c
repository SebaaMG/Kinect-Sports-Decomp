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


longlong fn_82CEBAB8(int *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 auStack_20 [8];
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0xc))(auStack_20,param_1);
  if (*pcVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulonglong)(uint)param_1[4] - (ulonglong)(uint)param_1[3];
    if ((int)param_2 < (int)lVar2) {
      lVar2 = param_2;
    }
    param_1[3] = param_1[3] + (int)lVar2;
    if (((int)lVar2 == 0) && ((int)param_2 != 0)) {
      param_1[3] = param_1[4] + 1;
    }
  }
  return lVar2;
}

