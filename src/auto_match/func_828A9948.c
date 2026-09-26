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
extern int fn_82248B90();
extern int fn_8288F9A0();
extern int fn_828A12E8();


int * fn_828A9948(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_30 [12];
  
  uVar2 = fn_828A12E8();
  iVar3 = fn_8288F9A0(uVar2,1);
  aiStack_30[0] = **(int **)(iVar3 + 4);
  if ((int *)aiStack_30[0] != *(int **)(iVar3 + 4)) {
    do {
      piVar1 = *(int **)(aiStack_30[0] + 0x14);
      iVar4 = (**(code **)(*piVar1 + 0x44))(piVar1);
      if (iVar4 == param_2) {
        return piVar1;
      }
      fn_82248B90(aiStack_30);
    } while (aiStack_30[0] != *(int *)(iVar3 + 4));
  }
  return (int *)0x0;
}

