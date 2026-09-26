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
extern int fn_82CE0750();
extern int fn_82CE07B0();
extern int fn_82CE07C8();


void fn_828CFB00(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x84);
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = fn_82CE0750(1,param_1 + 0x48,param_1 + 0x4c,param_1 + 0x50,0,0,0,
                              *(undefined4 *)(param_1 + 0x88));
    if (iVar1 != 0) {
      if (*piVar2 != 0) {
        fn_82CE07C8();
        *piVar2 = 0;
      }
      *(undefined4 *)(param_1 + 0x7c) = 5;
      return;
    }
  }
  else {
    iVar1 = fn_82CE07B0(0,0,piVar2);
    if (iVar1 != 0) {
      if (*piVar2 != 0) {
        fn_82CE07C8();
        *piVar2 = 0;
      }
      *(undefined4 *)(param_1 + 0x7c) = 5;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 2;
  return;
}

