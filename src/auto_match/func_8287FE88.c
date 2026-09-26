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
extern int fn_828865B0();


void fn_8287FE88(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = param_1[1];
  do {
    if (iVar1 == 0) {
LAB_8287fed0:
      if (*param_1 != 0) {
        *(int *)(*param_1 + 0x34) = param_2;
      }
      *(int *)(param_2 + 0x30) = *param_1;
      *param_1 = param_2;
LAB_8287feec:
      *(int *)(param_2 + 0x34) = iVar1;
      if (param_1[1] == iVar1) {
        param_1[1] = param_2;
      }
      param_1[2] = param_1[2] + 1;
      *(int **)(param_2 + 0x2c) = param_1;
      return;
    }
    lVar2 = fn_828865B0(iVar1);
    lVar3 = fn_828865B0(param_2);
    if (lVar2 <= lVar3) {
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x30) != 0) {
          *(int *)(*(int *)(iVar1 + 0x30) + 0x34) = param_2;
        }
        *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
        *(int *)(iVar1 + 0x30) = param_2;
        goto LAB_8287feec;
      }
      goto LAB_8287fed0;
    }
    iVar1 = *(int *)(iVar1 + 0x34);
  } while( true );
}

