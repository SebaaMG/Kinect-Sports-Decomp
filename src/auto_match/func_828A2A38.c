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
extern int fn_8287CBD0();


undefined4 * fn_828A2A38(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_2 + 8) != *(int *)(param_3 + 8)) {
    do {
      puVar3 = (undefined4 *)fn_8287CBD0(param_2);
      puVar4 = (undefined4 *)fn_8287CBD0(param_4);
      *puVar4 = *puVar3;
      param_4[2] = param_4[2] + 1;
      iVar1 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar1 + 1;
    } while (iVar1 + 1 != *(int *)(param_3 + 8));
  }
  piVar2 = (int *)*param_4;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar2 != (int *)0x0) && (puVar3 = (undefined4 *)*piVar2, puVar3 != (undefined4 *)0x0)) {
    *param_1 = *puVar3;
  }
  param_1[2] = param_4[2];
  return param_1;
}

