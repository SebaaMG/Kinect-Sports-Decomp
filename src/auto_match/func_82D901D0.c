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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DBBDA8();


void fn_82D901D0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar6 = (ulonglong)*(ushort *)(param_1 + 0xb0) - 1;
  if (-1 < (longlong)uVar6) {
    lVar5 = (uVar6 + (uVar6 & 0x7fffffff) * 2 & 0xfffffff) << 4;
    do {
      iVar2 = *(int *)((int)lVar5 + *(int *)(param_1 + 0xac));
      fn_82CE4040(iVar2);
      *(byte *)(*(int *)(iVar2 + 8) + 0x25) = *(byte *)(*(int *)(iVar2 + 8) + 0x25) & 0x3f | 0x40;
      if (*(int *)(iVar1 + 0x94) == 0) {
        *(undefined4 *)(iVar1 + 0x94) = 1;
        fn_82DBBDA8(iVar2);
        lVar4 = (ulonglong)*(uint *)(iVar1 + 0x94) - 1;
        *(int *)(iVar1 + 0x94) = (int)lVar4;
        if ((lVar4 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
          if (*(int *)(iVar1 + 0x8c) != 0) {
            fn_82D80C18(iVar1);
          }
          if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
            fn_82D80C30(iVar1);
          }
        }
      }
      else {
        fn_82DBBDA8(iVar2);
      }
      iVar3 = fn_82CE5410();
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_2,4);
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -0x30;
      *(int *)(param_2[1] * 4 + *param_2) = iVar2;
      param_2[1] = param_2[1] + 1;
    } while (-1 < (longlong)uVar6);
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xb8) - 1;
  if (-1 < (longlong)uVar6) {
    lVar5 = (uVar6 & 0x3fffffff) << 2;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + (int)lVar5);
      fn_82CE4040(iVar2);
      *(byte *)(*(int *)(iVar2 + 8) + 0x25) = *(byte *)(*(int *)(iVar2 + 8) + 0x25) & 0x3f | 0x40;
      if (*(int *)(iVar1 + 0x94) == 0) {
        *(undefined4 *)(iVar1 + 0x94) = 1;
        fn_82DBBDA8(iVar2);
        lVar4 = (ulonglong)*(uint *)(iVar1 + 0x94) - 1;
        *(int *)(iVar1 + 0x94) = (int)lVar4;
        if ((lVar4 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
          if (*(int *)(iVar1 + 0x8c) != 0) {
            fn_82D80C18(iVar1);
          }
          if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
            fn_82D80C30(iVar1);
          }
        }
      }
      else {
        fn_82DBBDA8(iVar2);
      }
      iVar3 = fn_82CE5410();
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_2,4);
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -4;
      *(int *)(param_2[1] * 4 + *param_2) = iVar2;
      param_2[1] = param_2[1] + 1;
    } while (-1 < (longlong)uVar6);
  }
  return;
}

