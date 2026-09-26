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
extern unsigned int *auStack_20;
extern int fn_83049F40();
extern int fn_8304A420();
extern unsigned int iStack_1c;


void fn_8304A878(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))();
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(*(int *)(param_1 + 8) + 0xd4);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0x7c) = 0;
      fn_8304A420(param_1);
      fn_83049F40(param_1);
      iVar1 = *(int *)(param_1 + 0x54);
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))(*(int **)(param_1 + 0x2c),iVar1,0,auStack_20)
      ;
      *(int *)(param_1 + 0x30) = iVar1 - iStack_1c;
    }
  }
  return;
}

