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
extern int fn_82BFB468();


ulonglong fn_82BF7E20(int param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xc);
  if (*(char **)(param_1 + 0xc) == (char *)0x0) {
    pcVar2 = "(none)";
  }
  if (*pcVar2 != '\0') {
    uVar1 = thunk_FUN_82be5550(0x10);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      pcVar2 = *(char **)(param_1 + 0xc);
      if (*(char **)(param_1 + 0xc) == (char *)0x0) {
        pcVar2 = "(none)";
      }
      uVar1 = fn_82BFB468(uVar1,pcVar2);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      return uVar1;
    }
  }
  return 0;
}

