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
extern int fn_82BA70A8();


void fn_82B7C530(int param_1,char param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_2 != '\0') {
    (**(code **)(param_1 + 0x59c))
              (*(undefined4 *)(param_1 + 0x5a4),*(undefined4 *)(param_1 + 0x550));
  }
  piVar2 = (int *)(param_1 + 0x5a8);
  lVar1 = 3;
  do {
    if (*piVar2 != 0) {
      fn_82BA70A8();
      (**(code **)(param_1 + 0x59c))(*(undefined4 *)(param_1 + 0x5a4),*piVar2);
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  return;
}

