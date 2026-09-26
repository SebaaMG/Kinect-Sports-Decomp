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
extern unsigned int *auStack_80;
extern int fn_82814728();
extern int fn_82815268();
extern int fn_82815960();
extern int fn_82820290();
extern int fn_82821728();
extern int (*lbl_8320A5C8)();
extern int (*lbl_8320A5CC)();


ulonglong fn_82815BA8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar6;
  undefined8 uVar5;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint auStack_80 [32];
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar9 = 0;
  if (param_3 != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x80;
  }
  lVar8 = (ulonglong)*(uint *)(param_2 + 0x6c) - 1;
  *(int *)(param_2 + 0x6c) = (int)lVar8;
  if (lVar8 == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x80;
      fn_82821728(param_2,iVar1 == 0,0);
      iVar6 = fn_82814728(param_2,0);
      if (iVar6 == 0) {
        uVar7 = 0;
        *(undefined4 *)(param_2 + 0x68) = 0;
        if (*(char *)(*(int *)(param_2 + 0x1c) + 0x51) != '\0') {
          iVar6 = 0;
          do {
            if (*(int *)(iVar6 + *(int *)(param_2 + 0x30) + 0x19) != 0) {
              *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
            }
            uVar7 = uVar7 + 1;
            iVar6 = iVar6 + 0x21;
          } while (uVar7 < *(byte *)(*(int *)(param_2 + 0x1c) + 0x51));
        }
        if (*(int *)(param_2 + 0x68) != 0) {
          uVar10 = 0;
          if (*(char *)(*(int *)(param_2 + 0x1c) + 0x51) == '\0') {
            return 0;
          }
          iVar6 = 0;
          do {
            iVar11 = *(int *)(param_2 + 0x30) + iVar6;
            iVar2 = *(int *)(iVar11 + 0x19);
            if (iVar2 != 0) {
              if (((*(uint *)(param_2 + 0x10) & 0x1000) == 0) ||
                 (bVar4 = true, *(uint *)(iVar11 + 9) <= *(uint *)(iVar11 + 0x1d))) {
                bVar4 = false;
              }
              uVar3 = *(undefined4 *)(param_2 + 8);
              uVar12 = (ulonglong)*(uint *)(iVar11 + 0x15) + (ulonglong)*(uint *)(iVar11 + 0x11) +
                       (ulonglong)*(uint *)(iVar11 + 0xd);
              if (iVar1 != 0) {
                fn_82820290(iVar1,uVar10 + 3,auStack_80);
                uVar12 = auStack_80[0] + uVar12;
              }
              if (((ulonglong)*(uint *)(iVar11 + 0x1d) < (ulonglong)*(uint *)(iVar11 + 9)) &&
                 (!bVar4)) {
                uVar12 = ((ulonglong)*(uint *)(iVar11 + 9) - (ulonglong)*(uint *)(iVar11 + 0x1d)) +
                         uVar12 + 0x43 & 0xfffffffc;
              }
              *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar2;
              if ((*(uint *)(param_2 + 0x10) & 2) == 0) {
                if (!bVar4) {
                  uVar5 = (*lbl_8320A5C8)(*(undefined4 *)(param_2 + 0x18),uVar3,iVar2,uVar12);
                }
                else {
                  uVar5 = (*lbl_8320A5CC)();
                }
                uVar9 = fn_82815960(param_1,param_2,uVar5);
              }
              else if (!bVar4) {
                (**(code **)(param_1 + 4))();
              }
              else {
                (**(code **)(param_1 + 8))();
              }
            }
            uVar10 = uVar10 + 1;
            iVar6 = iVar6 + 0x21;
          } while ((uVar10 & 0xffffffff) < (ulonglong)*(byte *)(*(int *)(param_2 + 0x1c) + 0x51));
          return uVar9;
        }
        *(undefined4 *)(param_2 + 0x68) = 1;
        uVar9 = fn_82815960(param_1,param_2,0);
        return uVar9;
      }
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 4;
    }
    uVar9 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
  }
  else {
    uVar9 = (ulonglong)*(uint *)(param_2 + 0xc);
  }
  return uVar9;
}

