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
extern int fn_82BC0088();


void fn_82BD0D30(int param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((uint)param_3 < *(uint *)(iVar1 + 4)) {
    puVar4 = (undefined4 *)(*(int *)(iVar1 + 8) + (uint)param_3 * 4);
  }
  else {
    puVar4 = (undefined4 *)fn_82BC0088(iVar1,param_3);
  }
  iVar1 = *(int *)(param_1 + 4);
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
    piVar2 = (int *)(*(int *)(iVar1 + 8) + (int)param_2 * 4);
  }
  else {
    piVar2 = (int *)fn_82BC0088(iVar1,param_2);
  }
  puVar3 = (undefined4 *)
           fn_82BC0088(*(int *)(*piVar2 + 0x10),*(undefined4 *)(*(int *)(*piVar2 + 0x10) + 4))
  ;
  *puVar3 = *puVar4;
  return;
}

