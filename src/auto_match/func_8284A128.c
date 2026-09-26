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


int * fn_8284A128(int *param_1)

{
  int iVar1;
  int *piStack_4;
  
  if (*(char *)(*param_1 + 0x2d) == '\0') {
    if (*(char *)(*(int *)(*param_1 + 8) + 0x2d) == '\0') {
      for (piStack_4 = *(int **)(*param_1 + 8); *(char *)(*piStack_4 + 0x2d) == '\0';
          piStack_4 = (int *)*piStack_4) {
      }
      *param_1 = (int)piStack_4;
    }
    else {
      while ((iVar1 = *(int *)(*param_1 + 4), *(char *)(iVar1 + 0x2d) == '\0' &&
             (*param_1 == *(int *)(iVar1 + 8)))) {
        *param_1 = iVar1;
      }
      *param_1 = iVar1;
    }
  }
  return param_1;
}

