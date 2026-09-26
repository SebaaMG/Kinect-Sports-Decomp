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
extern int fn_824973B0();


int * fn_82498F58(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = fn_824973B0(param_2,param_3);
  iVar1 = *(int *)(param_2 + 4);
  piVar5 = (int *)(iVar3 * 8 + *(int *)(param_2 + 0x10));
  iVar3 = *piVar5;
  piVar2 = (int *)iVar3;
  while( true ) {
    iVar4 = iVar1;
    if (iVar3 != iVar1) {
      iVar4 = *(int *)piVar5[1];
    }
    if (piVar2 == (int *)iVar4) break;
    if (piVar2[2] == *param_3) {
      *param_1 = (int)piVar2;
      return param_1;
    }
    piVar2 = (int *)*piVar2;
  }
  *param_1 = iVar1;
  return param_1;
}

