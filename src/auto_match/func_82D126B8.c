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
extern int fn_82D11638();


int * fn_82D126B8(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  
  *(undefined8 *)param_1 = param_2;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar6 = (ulonglong)(uint)param_1[1];
    iVar5 = 0;
    iVar2 = *(int *)((int)(((-(ulonglong)(uVar6 != 2) & uVar6 + 1) + 2 & 0xffffffff) << 2) + iVar1);
    piVar7 = (int *)(iVar2 + 0x20);
    do {
      iVar3 = *(int *)((*(int *)((int)((uVar6 + 2 & 0xffffffff) << 2) + iVar1) - iVar2) +
                      (int)piVar7);
      if (iVar3 < *piVar7) break;
      if (*piVar7 < iVar3) {
        bVar4 = false;
        goto LAB_82d12740;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar5 < 3);
    bVar4 = true;
LAB_82d12740:
    if ((bVar4) ||
       (bVar4 = false, (*(uint *)((int)((uVar6 + 5 & 0xffffffff) << 2) + iVar1) & 0xfffffffc) == 0))
    {
      bVar4 = true;
    }
    if (!bVar4) {
      fn_82D11638(param_1);
    }
  }
  return param_1;
}

