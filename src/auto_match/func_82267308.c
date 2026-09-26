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
extern int fn_82267218();
extern int fn_822673B0();
extern int fn_82267750();


void fn_82267308(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 < 4) {
    fn_822673B0(param_1);
  }
  else if (param_2 == 4) {
    iVar1 = *(int *)(param_1 + 0x5d8);
    lVar3 = 0;
    iVar2 = *(int *)(param_1 + 0x478) + iVar1;
    *(int *)(param_1 + 0x5d8) = iVar2;
    if (*(int *)(param_1 + 0x474) <= iVar2) {
      *(undefined4 *)(param_1 + 0x5d8) = 0;
    }
    if (*(int *)(param_1 + 0x5d8) != iVar1) {
      if (0 < *(int *)(param_1 + 0x478)) {
        do {
          fn_82267750(*(undefined4 *)(param_1 + 0x5c0),lVar3);
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < *(int *)(param_1 + 0x478));
      }
      fn_82267218(param_1);
    }
  }
  return;
}

