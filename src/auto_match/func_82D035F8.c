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
extern unsigned int *auStack_30;
extern int fn_82D02A58();
extern int fn_82D02B68();
extern int fn_82D03028();


void fn_82D035F8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined1 auStack_30 [48];
  
  iVar2 = (int)param_1;
  uVar8 = param_1 + 0xa4;
  *(uint *)(*(int *)(iVar2 + 0x10) + 4) = *(uint *)(iVar2 + 0x14) | 1;
  *(int *)(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 0x10)) = *(int *)(iVar2 + 0x14);
  uVar5 = (ulonglong)*(uint *)(iVar2 + 0xa8);
  if (uVar5 != (uVar8 & 0xffffffff)) {
    do {
      piVar6 = (int *)uVar5;
      iVar4 = piVar6[4];
      if (((*(uint *)(iVar4 + 4) >> 1 & 1) == 0) &&
         ((*(uint *)(iVar4 + 4) & 0xfffffffc) + iVar4 == piVar6[5] + -0x10)) {
        uVar1 = piVar6[1];
        *(uint *)(*piVar6 + 4) = uVar1;
        *(int *)piVar6[1] = *piVar6;
        if (iVar4 == *(int *)(iVar2 + 0x10)) {
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(int *)(iVar2 + 0x10) = iVar2 + 0x9c;
        }
        else {
          fn_82D02B68(param_1);
        }
        (**(code **)(**(int **)(iVar2 + 0x98) + 0x10))
                  (*(int **)(iVar2 + 0x98),uVar5,*(undefined4 *)((int)uVar5 + 0xc));
      }
      else {
        uVar1 = piVar6[1];
      }
      uVar5 = (ulonglong)uVar1;
    } while (uVar5 != (uVar8 & 0xffffffff));
  }
  if ((ulonglong)*(uint *)(iVar2 + 0xa8) == (uVar8 & 0xffffffff)) {
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(int *)(iVar2 + 0x10) = iVar2 + 0x9c;
  }
  else {
    pcVar3 = (char *)(**(code **)(**(int **)(iVar2 + 0x98) + 4))(auStack_30);
    if (*pcVar3 == '\0') {
      uVar9 = (undefined4)(param_1 + 0x9cU);
      if ((ulonglong)*(uint *)(iVar2 + 0x10) != (param_1 + 0x9cU & 0xffffffff)) {
        fn_82D02A58(param_1,(ulonglong)*(uint *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14));
        *(undefined4 *)(iVar2 + 0x10) = uVar9;
        *(undefined4 *)(iVar2 + 0x14) = 0;
      }
      uVar5 = (ulonglong)*(uint *)(iVar2 + 0xa8);
      iVar4 = 0;
      if (uVar5 != (uVar8 & 0xffffffff)) {
        do {
          iVar7 = *(int *)((int)uVar5 + 0x14);
          piVar6 = (int *)(iVar7 + -0x10);
          if (((*(uint *)(iVar7 + -0xc) & 1) == 0) &&
             ((iVar7 = (int)piVar6 - *piVar6, iVar4 == 0 ||
              ((*(uint *)(iVar4 + 4) & 0xfffffffc) < (*(uint *)(iVar7 + 4) & 0xfffffffc))))) {
            iVar4 = iVar7;
          }
          uVar5 = (ulonglong)*(uint *)((int)uVar5 + 4);
        } while (uVar5 != (uVar8 & 0xffffffff));
        if (iVar4 != 0) {
          fn_82D02B68(param_1);
          *(int *)(iVar2 + 0x10) = iVar4;
          *(uint *)(iVar2 + 0x14) = *(uint *)(iVar4 + 4) & 0xfffffffc;
          return;
        }
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar9;
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
    else if (0x7fff < *(uint *)(iVar2 + 0x14)) {
      fn_82D03028(auStack_30,param_1,
                    ((ulonglong)*(uint *)(iVar2 + 0x10) -
                    (ulonglong)*(uint *)(*(int *)(iVar2 + 0xa8) + 0x10)) + 0x120);
    }
  }
  return;
}

