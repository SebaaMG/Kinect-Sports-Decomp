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
extern int fn_82831868();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_82831910(int param_1,int param_2)

{
  int iVar1;
  int iStack_20;
  int iStack_1c;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    iStack_20 = *(int *)(param_1 + 0x2c8);
    if (*(int *)(param_2 + 0x14) != iStack_20) {
      iStack_1c = *(int *)(param_1 + 0x2b8);
      if (iStack_1c != 0) {
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        if (*(char *)(param_1 + 1000) == '\0') {
          fn_82831868(&iStack_20,*(undefined4 *)(param_1 + 0x3c0));
        }
        *(undefined4 *)(param_1 + 0x2b8) = 0;
      }
      *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x14);
    }
    iVar1 = *(int *)(param_1 + 700) + 1;
    *(int *)(param_1 + 700) = iVar1;
    iStack_1c = *(int *)(param_1 + 0x2b8) + 1;
    *(int *)(param_1 + 0x2b8) = iStack_1c;
    if (iVar1 == *(int *)(param_1 + 0xb4)) {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      if (*(char *)(param_1 + 1000) == '\0') {
        iStack_20 = *(int *)(param_1 + 0x2c8);
        fn_82831868(&iStack_20,*(undefined4 *)(param_1 + 0x3c0));
      }
    }
  }
  return;
}

