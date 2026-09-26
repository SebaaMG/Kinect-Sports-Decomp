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


undefined8 fn_82369328(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)**(int **)(param_1 + 0x20);
  piVar2 = (int *)(*(int **)(param_1 + 0x20))[1];
  iVar3 = piVar1[1] - *piVar1 >> 2;
  iVar4 = piVar2[1] - *piVar2 >> 2;
  if (*(int *)(param_1 + 0x4c0) != 0) {
    return 2;
  }
  if (iVar3 == 1) {
    if (iVar4 == 1) {
      return 1;
    }
  }
  else if ((iVar3 == 2) && (iVar4 == 0)) {
    return 0;
  }
  return 3;
}

