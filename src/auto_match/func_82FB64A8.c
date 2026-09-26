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


ulonglong fn_82FB64A8(int param_1,int *param_2,int param_3,int *param_4,int param_5,int *param_6,
                       undefined1 *param_7)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  lVar3 = (longlong)((*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0)) / 0x34) + -1;
  if (-1 < lVar3) {
    uVar5 = lVar3 * 0x34 + (ulonglong)*(uint *)(param_1 + 0xa0);
    do {
      iVar2 = *(int *)uVar5;
      if ((iVar2 == -1) || (piVar1 = param_4, iVar2 == param_3)) {
LAB_82fb6524:
        iVar2 = ((int *)uVar5)[1];
        if ((iVar2 == -1) || (piVar1 = param_6, iVar2 == param_5)) {
LAB_82fb659c:
          uVar4 = 0;
LAB_82fb65a0:
          *param_7 = uVar4;
          return uVar5;
        }
        for (; (piVar1 != (int *)0x0 && (piVar1 != param_2)); piVar1 = (int *)piVar1[4]) {
          if (piVar1[3] == iVar2) {
            iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
            uVar4 = 1;
            if (iVar2 == 8) goto LAB_82fb65a0;
            goto LAB_82fb659c;
          }
        }
      }
      else {
        for (; (piVar1 != (int *)0x0 && (piVar1 != param_2)); piVar1 = (int *)piVar1[4]) {
          if (piVar1[3] == iVar2) goto LAB_82fb6524;
        }
      }
      lVar3 = lVar3 + -1;
      uVar5 = uVar5 - 0x34;
    } while (-1 < lVar3);
  }
  return (ulonglong)*(uint *)(param_1 + 0xa0);
}

