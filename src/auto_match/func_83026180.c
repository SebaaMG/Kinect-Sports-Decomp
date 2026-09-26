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
extern int fn_83037510();


void fn_83026180(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x1c) * 0x10 + *(int *)(param_1 + 8) + 0xf4) == '\0') &&
     ((*(byte *)(*(int *)(param_1 + 8) + 0xda) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (param_2[0xd0] == 0x11) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    if (*param_2 == 0) {
      iVar1 = fn_83037510(param_2,*(undefined2 *)(param_2 + 3),*(undefined4 *)(param_1 + 0x18)
                               );
      if (iVar1 != 1) {
        param_2[0xd0] = 2;
        return;
      }
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x16) = 0;
    }
    *(int **)(param_1 + 0x20) = param_2;
    param_2[2] = param_2[0xd0];
    (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
              (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x20));
    param_2[0xd0] = *(int *)(*(int *)(param_1 + 0x20) + 8);
  }
  else {
    if (*(char *)(param_1 + 0x15) == '\0') {
      (**(code **)(**(int **)(param_1 + 0xc) + 8))();
    }
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return;
}

