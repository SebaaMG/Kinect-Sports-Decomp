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


ulonglong fn_82414F58(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  
  piVar1 = (int *)param_1[1];
  if ((piVar1 != (int *)0x0) && ((int *)param_1[2] != (int *)0x0)) {
    bVar2 = true;
    if (*(int *)param_1[2] + *piVar1 == 10) goto LAB_82414f8c;
  }
  bVar2 = false;
LAB_82414f8c:
  if (bVar2) {
    return (ulonglong)(*(int *)(param_1[2] + 8) != 0);
  }
  if ((piVar1 == (int *)0x0) || (bVar2 = true, *piVar1 != 10)) {
    bVar2 = false;
  }
  if (bVar2) {
    if ((piVar1[2] == 0) || (uVar3 = 1, *(int *)(piVar1[2] + 8) == 0)) {
      uVar3 = 0;
    }
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x82415000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)*param_1)();
  return uVar3;
}

