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


void fn_82B7C490(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (param_2 + 0x16a) * 4;
  if (*(int *)(iVar1 + param_1) == 0) {
    piVar2 = (int *)(**(code **)(param_1 + 0x5a0))(*(undefined4 *)(param_1 + 0x5a4),0x2c);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
      piVar2[7] = 0;
      piVar2[8] = 0;
      piVar2[9] = 0;
      *(undefined1 *)(piVar2 + 10) = 0;
    }
    *(int **)(iVar1 + param_1) = piVar2;
  }
  return;
}

