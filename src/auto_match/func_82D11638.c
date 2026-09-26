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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))


void fn_82D11638(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  
  iVar1 = *(int *)param_1;
  iVar2 = iVar1;
  do {
    if (iVar2 == 0) {
      return;
    }
    uVar7 = (ulonglong)(uint)*param_1;
    do {
      *param_1 = CONCAT44(iVar1,-(uint)(uVar7 != 2) & (int)uVar7 + 1U);
      uVar7 = (ulonglong)(uint)*param_1;
      if ((uint)*param_1 == 0) goto LAB_82d117a8;
      iVar1 = *(int *)param_1;
      iVar5 = 0;
      iVar2 = *(int *)((int)((uVar7 + 2 & 0xffffffff) << 2) + iVar1);
      iVar6 = *(int *)((int)(((-(ulonglong)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + iVar1
                      );
      piVar8 = (int *)(iVar6 + 0x20);
      do {
        iVar3 = *(int *)((iVar2 - iVar6) + (int)piVar8);
        if (iVar3 < *piVar8) break;
        if (*piVar8 < iVar3) {
          bVar4 = false;
          goto LAB_82d116e4;
        }
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar5 < 3);
      bVar4 = true;
LAB_82d116e4:
      if ((bVar4) ||
         (bVar4 = false, (*(uint *)((int)((uVar7 + 5 & 0xffffffff) << 2) + iVar1) & 0xfffffffc) == 0
         )) {
        bVar4 = true;
      }
    } while (!bVar4);
    iVar5 = 0;
    iVar6 = *(int *)((int)(((-(ulonglong)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + iVar1);
    piVar8 = (int *)(iVar6 + 0x20);
    do {
      iVar3 = *(int *)((iVar2 - iVar6) + (int)piVar8);
      if (iVar3 < *piVar8) break;
      if (*piVar8 < iVar3) {
        bVar4 = false;
        goto LAB_82d11770;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar5 < 3);
    bVar4 = true;
LAB_82d11770:
    if ((bVar4) ||
       (bVar4 = false, (*(uint *)((int)((uVar7 + 5 & 0xffffffff) << 2) + iVar1) & 0xfffffffc) == 0))
    {
      bVar4 = true;
    }
    if (bVar4) {
      return;
    }
LAB_82d117a8:
    *param_1 = (ulonglong)**(uint **)param_1 << 0x20;
    iVar1 = *(int *)param_1;
    if (iVar1 != 0) {
      uVar7 = (ulonglong)(uint)*param_1;
      iVar6 = 0;
      iVar2 = *(int *)((int)(((-(ulonglong)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + iVar1
                      );
      piVar8 = (int *)(iVar2 + 0x20);
      do {
        iVar5 = *(int *)((*(int *)((int)((uVar7 + 2 & 0xffffffff) << 2) + iVar1) - iVar2) +
                        (int)piVar8);
        if (iVar5 < *piVar8) break;
        if (*piVar8 < iVar5) {
          bVar4 = false;
          goto LAB_82d11830;
        }
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar6 < 3);
      bVar4 = true;
LAB_82d11830:
      if ((bVar4) ||
         (bVar4 = false, (*(uint *)((int)((uVar7 + 5 & 0xffffffff) << 2) + iVar1) & 0xfffffffc) == 0
         )) {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
    }
    iVar2 = *(int *)param_1;
  } while( true );
}

