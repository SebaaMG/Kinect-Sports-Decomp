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
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82694700();
extern int fn_82F66570();
extern int fn_82F6A4B0();


ulonglong fn_826A8AA8(uint *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar2;
  int iVar3;
  ulonglong uVar1;
  longlong lVar4;
  int iVar5;
  
  iVar3 = *(int *)*param_2;
  iVar5 = -1;
  iVar2 = fn_82F66570(iVar3,0x3a);
  if ((iVar2 == 0) && (iVar2 = fn_82F6A4B0(iVar3,0x2e), iVar2 == 0)) {
    uVar1 = fn_82F6A4B0(iVar3,0x2f);
    if ((uVar1 & 0xffffffff) == 0) {
      return uVar1;
    }
  }
  else {
    iVar5 = iVar2 - iVar3;
    if (-1 < iVar5) {
      iVar3 = fn_82694700((ulonglong)*param_1 + 0x254,*(int *)*param_2 + iVar5 + 1);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 2;
      lVar4 = (ulonglong)*(uint *)(*param_4 + 8) - 1;
      *(int *)(*param_4 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8();
      }
      *param_4 = iVar3;
      lVar4 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
      *(int *)(iVar3 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8(iVar3);
      }
      goto LAB_826a8bb0;
    }
  }
  iVar3 = *(int *)(*param_1 + 8);
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  lVar4 = (ulonglong)*(uint *)(*param_4 + 8) - 1;
  *(int *)(*param_4 + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8();
  }
  *param_4 = iVar3;
LAB_826a8bb0:
  if ((0 < iVar5) && (*(char *)(*(int *)*param_2 + iVar5 + -1) == '/')) {
    iVar5 = iVar5 + -1;
  }
  if (iVar5 < 0) {
    iVar3 = *param_2;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    lVar4 = (ulonglong)*(uint *)(*param_3 + 8) - 1;
    *(int *)(*param_3 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8();
    }
    *param_3 = iVar3;
  }
  else {
    iVar3 = fn_82694610((ulonglong)*param_1 + 0x254,*(undefined4 *)*param_2,iVar5);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 2;
    lVar4 = (ulonglong)*(uint *)(*param_3 + 8) - 1;
    *(int *)(*param_3 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8();
    }
    *param_3 = iVar3;
    lVar4 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
    *(int *)(iVar3 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(iVar3);
    }
  }
  return 1;
}

