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


undefined8 fn_8302C908(int param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar4;
  undefined8 uVar3;
  int iVar5;
  char cVar6;
  uint uVar7;
  
  uVar7 = (uint)*param_2;
  param_2 = param_2 + 1;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
  if (uVar7 == uVar4) {
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        iVar2 = *(int *)param_2;
        cVar1 = *(char *)(param_2 + 2);
        param_2 = (ushort *)((int)param_2 + 5);
        iVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),uVar4);
        if ((iVar5 != iVar2) ||
           (cVar6 = (**(code **)(**(int **)(param_1 + 0x88) + 0x28))
                              (*(int **)(param_1 + 0x88),uVar4), cVar6 != cVar1)) goto LAB_8302c93c;
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < uVar7);
    }
    uVar3 = 0;
  }
  else {
LAB_8302c93c:
    uVar3 = 1;
  }
  return uVar3;
}

