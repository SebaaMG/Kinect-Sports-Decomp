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
extern int fn_82C2B590();


void fn_82A6C3A0(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (0 < (int)param_2) {
      iVar1 = 0;
      do {
        iVar2 = *param_1 + iVar1;
        if (*(int *)(iVar2 + 4) != 0) {
          fn_82C2B590();
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        if (*(int *)(iVar2 + 0x88) != 0) {
          fn_82C2B590();
          *(undefined4 *)(iVar2 + 0x88) = 0;
        }
        if (*(int *)(iVar2 + 0x8c) != 0) {
          fn_82C2B590();
          *(undefined4 *)(iVar2 + 0x8c) = 0;
        }
        if (*(int *)(iVar2 + 0x90) != 0) {
          fn_82C2B590();
          *(undefined4 *)(iVar2 + 0x90) = 0;
        }
        if (*(int *)(iVar2 + 0x94) != 0) {
          fn_82C2B590();
          *(undefined4 *)(iVar2 + 0x94) = 0;
        }
        param_2 = param_2 + -1;
        iVar1 = iVar1 + 0x98;
      } while (param_2 != 0);
    }
    if (*param_1 != 0) {
      fn_82C2B590();
      *param_1 = 0;
    }
  }
  return;
}

