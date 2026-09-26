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
extern int fn_828D4E10();


undefined4 * fn_828B3B98(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(int *)(param_2 + 8) != *(int *)(param_3 + 8)) {
    do {
      iVar3 = fn_828D4E10(param_2);
      iVar4 = fn_828D4E10(param_4);
      iVar5 = 0;
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
      lVar6 = 0x2a;
      *(undefined8 *)(iVar4 + 0x10) = *(undefined8 *)(iVar3 + 0x10);
      do {
        *(undefined1 *)(iVar4 + 0x18 + iVar5) = *(undefined1 *)(iVar3 + 0x18 + iVar5);
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      param_4[2] = param_4[2] + 1;
      iVar3 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar3 + 1;
    } while (iVar3 + 1 != *(int *)(param_3 + 8));
  }
  piVar1 = (int *)*param_4;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar1 != (int *)0x0) && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0)) {
    *param_1 = *puVar2;
  }
  param_1[2] = param_4[2];
  return param_1;
}

