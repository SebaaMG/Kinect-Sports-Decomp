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
extern int fn_8300E510();
extern int fn_8300E630();


void fn_8300E6B8(int param_1,int *param_2,int *param_3,ulonglong param_4,undefined8 param_5)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    puVar2 = (undefined2 *)((int)param_2 + 6);
    param_2 = (int *)((uint)*(ushort *)(param_2 + 1) * 0xc + iVar1);
    uVar3 = fn_8300E510(param_1,param_2,*puVar2,*param_3);
    if ((uVar3 & 0xffffffff) != 0) {
      if ((param_4 & 0xffffffff) == 1) {
        fn_8300E630(param_1,uVar3,param_5);
      }
      else {
        fn_8300E6B8(param_1,uVar3,param_3 + 1,param_4 - 1,param_5);
      }
    }
    if (*param_2 != 0) {
      return;
    }
    if (*param_3 == 0) {
      return;
    }
    if ((param_4 & 0xffffffff) == 1) break;
    iVar1 = *(int *)(param_1 + 4);
    param_4 = param_4 - 1;
    param_3 = param_3 + 1;
  }
  fn_8300E630(param_1,param_2,param_5);
  return;
}

