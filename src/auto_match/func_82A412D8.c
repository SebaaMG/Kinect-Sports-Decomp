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
extern int fn_82A4F4E0();


void fn_82A412D8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  while (param_1[0x33] != 0) {
    iVar3 = param_1[0x33];
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar3 + 4) = *param_1;
    *param_1 = iVar3;
    param_1[0x33] = iVar1;
  }
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  if (param_1[1] != 0) {
    do {
      piVar2 = (int *)param_1[1];
      iVar3 = *piVar2;
      if ((piVar2 != param_1 + 2) && (piVar2 != (int *)0x0)) {
        fn_82A4F4E0();
        param_1[1] = 0;
      }
      param_1[1] = iVar3;
    } while (iVar3 != 0);
  }
  return;
}

