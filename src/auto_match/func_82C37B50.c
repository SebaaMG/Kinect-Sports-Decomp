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
extern int fn_82A70D38();
extern int fn_82C37940();


void fn_82C37B50(int param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = (int)param_2;
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(int *)(param_1 + 0x30) == 0) {
        if (*(int *)(param_1 + 0xd0) < iVar2) {
          uVar3 = (((longlong)
                    (int)((longlong)(int)(iVar2 - *(uint *)(param_1 + 0xd0)) *
                          (longlong)*(int *)(param_1 + 0xcc) >> 0x14) +
                   (ulonglong)*(uint *)(param_1 + 200)) - param_2) +
                  (ulonglong)*(uint *)(param_1 + 0xd0);
        }
        else {
          uVar3 = (ulonglong)*(uint *)(param_1 + 200);
        }
      }
      else {
        lVar1 = fn_82A70D38(param_1,param_2);
        if (*(int *)(param_1 + 0xd0) < (int)lVar1) {
          uVar3 = ((longlong)
                   (int)((longlong)(int)((int)lVar1 - *(uint *)(param_1 + 0xd0)) *
                         (longlong)*(int *)(param_1 + 0xcc) >> 0x14) +
                   (ulonglong)*(uint *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0)) -
                  param_2;
        }
        else {
          uVar3 = (lVar1 - param_2) + (ulonglong)*(uint *)(param_1 + 200);
        }
      }
      goto code_r0x82c37cb0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      lVar1 = fn_82A70D38(param_1,param_2);
      uVar3 = lVar1 - param_2;
      goto code_r0x82c37cb0;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(param_1 + 0xd0) < iVar2) {
    uVar3 = (((longlong)
              (int)((longlong)(int)(iVar2 - *(uint *)(param_1 + 0xd0)) *
                    (longlong)*(int *)(param_1 + 0xcc) >> 0x14) +
             (ulonglong)*(uint *)(param_1 + 200)) - param_2) + (ulonglong)*(uint *)(param_1 + 0xd0);
  }
  else {
    uVar3 = (ulonglong)*(uint *)(param_1 + 200);
  }
code_r0x82c37cb0:
  if ((int)uVar3 < -0x4000000) {
    uVar3 = 0xfffffffffc000000;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = 0x3ffffff;
  }
  fn_82C37940(0xffffffff820ef42c,uVar3);
  return;
}

