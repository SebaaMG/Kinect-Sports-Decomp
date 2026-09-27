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
extern unsigned int *auStack_50;
extern int fn_83062AD8();


longlong fn_83061680(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_50 [16];
  
  piVar4 = (int *)(param_1 + 4);
  lVar1 = 0;
  iVar2 = 0;
  if ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) & 0xfffffff8U) != 0) {
    iVar3 = 0;
    do {
      if ((((int *)(iVar3 + *piVar4))[1] == param_3) && (*(int *)(iVar3 + *piVar4) == param_2)) {
        fn_83062AD8(auStack_50,piVar4);
        lVar1 = lVar1 + 1;
      }
      else {
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      }
    } while (iVar2 < *(int *)(param_1 + 8) - *piVar4 >> 3);
  }
  piVar4 = (int *)(param_2 + 4);
  iVar2 = 0;
  if ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4) & 0xfffffff8U) != 0) {
    iVar3 = 0;
    do {
      if ((((int *)(iVar3 + *piVar4))[1] == param_3) && (*(int *)(iVar3 + *piVar4) == param_1)) {
        fn_83062AD8(auStack_50,piVar4);
      }
      else {
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      }
    } while (iVar2 < *(int *)(param_2 + 8) - *piVar4 >> 3);
  }
  return lVar1;
}

