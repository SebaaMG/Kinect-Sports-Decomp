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
extern int fn_827F0458();


void fn_827F1B20(int *param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_1[4]; iVar2 != param_1[5]; iVar2 = *(int *)(iVar2 + 8)) {
  }
  if (*param_1 != 0) {
    iVar2 = *param_1;
    do {
      iVar1 = *(int *)(iVar2 + 0x30);
      fn_827F0458(param_1 + 6,iVar2);
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
  return;
}

