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
extern int fn_83019A10();


undefined8 fn_83019E38(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar3;
  undefined8 uVar2;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  cVar3 = fn_83019A10();
  if (cVar3 == '\0') {
    uVar2 = 2;
  }
  else {
    *(uint *)(param_1[2] + 4) = param_2;
    *(undefined4 *)(param_1[2] + 8) = *param_3;
    if ((int *)*param_1 == (int *)0x0) {
      piVar6 = (int *)param_1[2];
      uVar2 = 1;
      param_1[1] = (int)piVar6;
      param_1[2] = *piVar6;
      *piVar6 = 0;
      *param_1 = param_1[1];
      param_1[5] = param_1[5] + 1;
    }
    else {
      piVar6 = (int *)*param_1;
      piVar4 = (int *)0x0;
      do {
        piVar5 = piVar6;
        piVar6 = piVar5;
        if (param_2 < (uint)piVar5[1]) break;
        piVar6 = (int *)*piVar5;
        piVar4 = piVar5;
      } while (piVar6 != (int *)0x0);
      puVar1 = (undefined4 *)param_1[2];
      if (piVar6 == (int *)0x0) {
        param_1[1] = (int)puVar1;
      }
      if (piVar4 == (int *)0x0) {
        *param_1 = (int)puVar1;
      }
      else {
        *piVar4 = (int)puVar1;
      }
      uVar2 = 1;
      param_1[2] = *(int *)param_1[2];
      *puVar1 = piVar6;
      param_1[5] = param_1[5] + 1;
    }
  }
  return uVar2;
}

