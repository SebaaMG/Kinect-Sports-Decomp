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
extern int fn_8282AFD0();


void fn_8282B068(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    if ((*(int *)(param_2 + 0x14) != *(int *)(param_1 + 0x2c0)) ||
       (*(int *)(param_2 + 0x18) != *(int *)(param_1 + 0x2c4))) {
      if (*(int *)(param_1 + 0x2b8) != 0) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        if (*(char *)(param_1 + 1000) == '\0') {
          fn_8282AFD0(param_1);
        }
        *(undefined4 *)(param_1 + 0x2b8) = 0;
      }
      *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x18);
    }
    iVar1 = *(int *)(param_1 + 700) + 1;
    *(int *)(param_1 + 700) = iVar1;
    *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 1;
    if (iVar1 == *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      if (*(char *)(param_1 + 1000) == '\0') {
        fn_8282AFD0(param_1);
      }
    }
  }
  return;
}

