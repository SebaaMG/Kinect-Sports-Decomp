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
extern int fn_8236CE28();
extern int fn_823C2230();


void fn_823C06A0(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_4 != 0) {
    fn_823C2230(param_2,*(undefined4 *)(param_2 + 0xe10));
    if (*(int *)(param_2 + 0x4c0) == 0) {
      fn_8236CE28(param_1,param_2);
    }
    else {
      piVar2 = (int *)(param_2 + 0xe14);
      lVar1 = 3;
      do {
        if (*piVar2 != *(int *)(param_2 + 0xe10)) {
          fn_823C2230(param_2);
        }
        lVar1 = lVar1 + -1;
        piVar2 = piVar2 + 1;
      } while (lVar1 != 0);
    }
  }
  return;
}

