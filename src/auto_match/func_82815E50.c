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
extern unsigned int *auStack_70;
extern int fn_828148D8();
extern int fn_82815268();
extern int fn_82815BA8();
extern int fn_82820290();
extern int (*lbl_8320A5D0)();


ulonglong fn_82815E50(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint auStack_70 [28];
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar7 = 0;
  if (param_3 != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x40;
  }
  lVar4 = (ulonglong)*(uint *)(param_2 + 0x6c) - 1;
  *(int *)(param_2 + 0x6c) = (int)lVar4;
  if (lVar4 == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x40;
      fn_828148D8(param_2);
      *(undefined4 *)(param_2 + 0x6c) = 0;
      if (*(char *)(*(int *)(param_2 + 0x1c) + 0x52) != '\0') {
        iVar6 = 0;
        lVar4 = 2;
        do {
          iVar5 = iVar6 + *(int *)(param_2 + 0x1c);
          if (*(uint *)(iVar5 + 0x68) < *(uint *)(iVar5 + 0x58)) {
            *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
          }
          iVar6 = iVar6 + 0x14;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if ((*(int *)(param_2 + 0x6c) == 0) || ((*(uint *)(param_2 + 0x10) & 0x1000) != 0)) {
        *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
        uVar7 = fn_82815BA8(param_1,param_2,0);
      }
      else {
        lVar4 = 0;
        uVar8 = 0;
        do {
          iVar6 = *(int *)(param_2 + 0x1c) + uVar8;
          uVar10 = (ulonglong)*(uint *)(iVar6 + 0x68);
          uVar9 = (ulonglong)*(uint *)(iVar6 + 0x58);
          if (uVar10 < uVar9) {
            uVar3 = (ulonglong)*(uint *)(iVar6 + 0x5c);
            lVar11 = ((uVar3 - uVar10) + (ulonglong)*(uint *)(iVar6 + 0x60) + uVar9 + 0x43 &
                     0xfffffffc) - (ulonglong)*(uint *)(iVar6 + 0x60);
            if (iVar1 != 0) {
              fn_82820290(iVar1,lVar4 + 1,auStack_70);
              lVar11 = (ulonglong)auStack_70[0] + lVar11;
              uVar3 = auStack_70[0] + uVar3;
            }
            if ((*(uint *)(param_2 + 0x10) & 2) == 0) {
              if (lbl_8320A5D0 == (code *)0x0) goto LAB_82816014;
              uVar2 = (*lbl_8320A5D0)(*(undefined4 *)(param_2 + 0x18),lVar11,uVar10,uVar3,uVar9);
            }
            else {
              if (*(code **)(param_1 + 0xc) != (code *)0x0) {
                (**(code **)(param_1 + 0xc))
                          (*(undefined4 *)(param_2 + 0x18),lVar11,uVar10,uVar3,uVar9,
                           0xffffffff82815ba8,param_2);
                goto LAB_82816028;
              }
LAB_82816014:
              uVar2 = 0;
            }
            uVar7 = fn_82815BA8(param_1,param_2,uVar2);
          }
LAB_82816028:
          uVar8 = uVar8 + 0x14;
          lVar4 = lVar4 + 1;
        } while (uVar8 < 0x28);
      }
    }
    else {
      uVar7 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
    }
  }
  else {
    uVar7 = (ulonglong)*(uint *)(param_2 + 0xc);
  }
  return uVar7;
}

