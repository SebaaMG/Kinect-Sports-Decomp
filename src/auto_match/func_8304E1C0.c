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
extern int fn_8304DE60();


void fn_8304E1C0(int param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))();
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(code **)(**(int **)(param_1 + 0x28) + 0x30))();
        uVar2 = *(uint *)(param_1 + 0x3c);
        if (*(uint *)(param_1 + 0x44) < uVar2) {
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x50) - uVar2;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x44) - uVar2;
          *(uint *)(param_1 + 0x44) = uVar2;
          uVar1 = (ulonglong)(*(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x6c) + 0x24) >> 3) & 0x1f;
          *(undefined4 *)(param_1 + 0x34) = 0;
          trapWord(6,uVar1,0);
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(int *)(param_1 + 0x44) = (int)(uVar2 / uVar1) * (int)uVar1;
        }
      }
    }
    else {
      if (param_2 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(code **)(**(int **)(param_1 + 0x28) + 0x30))();
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      fn_8304DE60(param_1,*(undefined4 *)(param_1 + 0x30));
      *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(*(int *)(param_1 + 8) + 0xd4);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}

