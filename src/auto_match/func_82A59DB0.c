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
extern int fn_82A59BF0();


void fn_82A59DB0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    fn_82A59BF0();
    *(undefined4 *)(param_1 + 0x29c) = 0;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x80) = 1;
    }
    else {
      puVar2 = *(undefined4 **)(param_1 + 0x150);
      *(undefined4 *)(param_1 + 0x80) = 0;
      while (puVar2 != (undefined4 *)0x0) {
        if (puVar2 == (undefined4 *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = (int *)*puVar2;
          puVar2 = (undefined4 *)puVar2[1];
        }
        (**(code **)(*piVar1 + 4))();
      }
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}

