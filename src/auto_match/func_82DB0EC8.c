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
extern unsigned int *auStack_40;
extern int fn_82D899A0();


bool fn_82DB0EC8(int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_40 [64];
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    iVar4 = *(int *)(param_1 + 0x48) + -1;
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar4 <= *(int *)(param_1 + 0x60)) {
      iVar5 = iVar4;
    }
    iVar4 = 0;
    *(int *)(param_1 + 0x60) = iVar5;
    iVar7 = 0;
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 100)) {
      do {
        iVar4 = iVar5;
        iVar5 = *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x60) = iVar5 + -1;
        if (iVar5 < 0) {
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x48);
          break;
        }
        iVar1 = iVar5 * 4;
        iVar6 = *(int *)(*(int *)(param_1 + 0x44) + iVar1);
        if (((*(char *)(iVar6 + 0x18) == '\x01') && (*(char *)(iVar6 + 0x10) + iVar6 != 0)) &&
           (pcVar2 = (char *)fn_82D899A0(auStack_40), *pcVar2 == '\0')) {
          *(undefined4 *)(param_2[1] * 4 + *param_2) =
               *(undefined4 *)(*(int *)(param_1 + 0x44) + iVar1);
          param_2[1] = param_2[1] + 1;
          iVar6 = *(int *)(param_1 + 0x48) + -1;
          *(int *)(param_1 + 0x48) = iVar6;
          if (iVar6 != iVar5) {
            *(undefined4 *)(*(int *)(param_1 + 0x44) + iVar1) =
                 *(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x44));
          }
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar4;
      } while (iVar7 < *(int *)(param_1 + 100));
    }
    bVar3 = *(int *)(param_1 + 0x48) == iVar4;
  }
  else {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x48) - 1;
    if (-1 < (longlong)uVar8) {
      lVar9 = (uVar8 & 0x3fffffff) << 2;
      do {
        iVar4 = (int)lVar9;
        iVar5 = *(int *)(iVar4 + *(int *)(param_1 + 0x44));
        if (((*(char *)(iVar5 + 0x18) == '\x01') && (*(char *)(iVar5 + 0x10) + iVar5 != 0)) &&
           (pcVar2 = (char *)fn_82D899A0(auStack_40), *pcVar2 == '\0')) {
          *(undefined4 *)(param_2[1] * 4 + *param_2) =
               *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x44));
          param_2[1] = param_2[1] + 1;
          iVar5 = *(int *)(param_1 + 0x48) + -1;
          *(int *)(param_1 + 0x48) = iVar5;
          if (iVar5 != (int)uVar8) {
            *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x44)) =
                 *(undefined4 *)(iVar5 * 4 + *(int *)(param_1 + 0x44));
          }
        }
        uVar8 = uVar8 - 1;
        lVar9 = lVar9 + -4;
      } while (-1 < (longlong)uVar8);
    }
    bVar3 = true;
  }
  return bVar3;
}

