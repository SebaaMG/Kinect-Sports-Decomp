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
extern int fn_82A3AB68();
extern int fn_82F68CC0();


ulonglong fn_82A3AC90(int param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  if (iVar4 < 1) {
LAB_82a3acb0:
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x988);
    uVar2 = (ulonglong)uVar1;
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x4320) + param_2;
    if ((int)uVar1 < iVar4) {
      if (0 < (int)uVar1) {
        fn_82F68CC0(lVar3,*(undefined4 *)(param_1 + 0x984),uVar2);
        iVar4 = *(int *)(param_1 + 0x988);
        *(undefined4 *)(param_1 + 0x988) = 0;
        *(int *)(param_1 + 0x984) = iVar4 + *(int *)(param_1 + 0x984);
        goto code_r0x82a3ad2c;
      }
      uVar2 = 0;
    }
    else {
      fn_82F68CC0(lVar3,*(undefined4 *)(param_1 + 0x984),param_3);
      *(int *)(param_1 + 0x984) = *(int *)(param_1 + 0x984) + iVar4;
      *(int *)(param_1 + 0x988) = *(int *)(param_1 + 0x988) - iVar4;
      uVar2 = param_3;
code_r0x82a3ad2c:
      if ((int)uVar2 < 0) goto LAB_82a3acb0;
    }
    if ((*(int *)(param_1 + 0x86c) != 0) && (*(uint *)(param_1 + 0x432c) < 0x8000)) {
      fn_82A3AB68(param_1,(ulonglong)*(uint *)(param_1 + 0x4320) + param_2,uVar2);
    }
    *(int *)(param_1 + 0x432c) = *(int *)(param_1 + 0x432c) + 1;
  }
  return uVar2;
}

