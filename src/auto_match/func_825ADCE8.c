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
extern unsigned int uStack00000028;


void fn_825ADCE8(undefined4 *param_1,int *param_2,int param_3,ulonglong param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uStack00000028;
  
  piVar1 = (int *)*param_2;
  piVar4 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    piVar4 = *(int **)*piVar1;
  }
  uVar3 = param_2[2];
  if (piVar4 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  if (uVar3 != *(uint *)(param_3 + 8)) {
    do {
      uVar6 = uVar3 >> 2;
      if (*(uint *)(iVar5 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(iVar5 + 8);
      }
      uStack00000028 = (uint)(param_4 >> 0x20);
      uVar6 = *(uint *)(*(int *)(uVar6 * 4 + *(int *)(iVar5 + 4)) + (uVar3 & 3) * 4);
      if ((uVar6 < uStack00000028) || (bVar2 = true, (param_4 & 0xffffffff) < (ulonglong)uVar6)) {
        bVar2 = false;
      }
    } while ((!bVar2) && (uVar3 = uVar3 + 1, uVar3 != *(uint *)(param_3 + 8)));
  }
  param_2[2] = uVar3;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar1;
  }
  param_1[2] = uVar3;
  return;
}

