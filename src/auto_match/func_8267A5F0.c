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


undefined8 fn_8267A5F0(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  piVar3 = (int *)param_1[6];
  if (*(char *)(param_1 + 5) == '\0') {
    if ((piVar3 != (int *)0x0) &&
       (cVar2 = (**(code **)(*(int *)param_1[6] + 8))((int *)param_1[6],uVar1), cVar2 != '\0')) {
      return 1;
    }
  }
  else {
    uVar4 = 0;
    if (piVar3[1] != 0) {
      iVar5 = 0;
      do {
        cVar2 = (**(code **)(**(int **)(iVar5 + *piVar3) + 8))(*(int **)(iVar5 + *piVar3),uVar1);
        if (cVar2 != '\0') {
          return 1;
        }
        piVar3 = (int *)param_1[6];
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < (uint)piVar3[1]);
    }
  }
  return 0;
}

