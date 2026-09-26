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


void fn_82699338(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      piVar2 = *(int **)(iVar4 + *param_1);
      cVar3 = (**(code **)(*piVar2 + 8))(piVar2);
      if ((cVar3 != '\0') &&
         ((**(code **)(*piVar2 + 0x90))(piVar2,param_2,param_3), (uint)param_1[1] <= uVar5 + 1)) {
        return;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < uVar1);
  }
  return;
}

