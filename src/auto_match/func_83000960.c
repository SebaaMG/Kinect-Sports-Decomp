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


void fn_83000960(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[0x15];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != piVar1[1]) {
      do {
        if (*(char *)(*(int *)(iVar2 + 4) + 0x3c) != -1) {
          (**(code **)(*param_1 + 200))
                    (param_1,*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc),param_2,param_3);
        }
        iVar2 = iVar2 + 8;
      } while (iVar2 != *(int *)(param_1[0x15] + 4));
    }
  }
  return;
}

