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
extern int fn_82814A08();
extern int fn_82815268();
extern int fn_82815798();
extern int fn_82820290();
extern int (*lbl_8320A5D0)();


ulonglong fn_82815960(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint auStack_70 [28];
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar7 = 0;
  if (param_3 != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x100;
  }
  lVar5 = (ulonglong)*(uint *)(param_2 + 0x68) - 1;
  *(int *)(param_2 + 0x68) = (int)lVar5;
  if (lVar5 == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200;
      fn_82814A08(param_2);
      *(undefined4 *)(param_2 + 0x68) = 0;
      iVar2 = *(int *)(param_2 + 0x1c);
      if ((*(char *)(iVar2 + 0x52) != '\0') && (*(char *)(iVar2 + 0x51) != '\0')) {
        uVar6 = 0;
        do {
          iVar4 = uVar6 * 0x21 + *(int *)(param_2 + 0x30);
          if (*(uint *)(iVar4 + 0x1d) < *(uint *)(iVar4 + 9)) {
            *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < *(byte *)(iVar2 + 0x51));
      }
      if ((*(int *)(param_2 + 0x68) == 0) || ((*(uint *)(param_2 + 0x10) & 0x1000) != 0)) {
        *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
        uVar7 = fn_82815798(param_1,param_2,0);
      }
      else if (*(char *)(iVar2 + 0x51) != '\0') {
        uVar6 = 0;
        do {
          iVar4 = uVar6 * 0x21 + *(int *)(param_2 + 0x30);
          uVar9 = (ulonglong)*(uint *)(iVar4 + 0x1d);
          uVar8 = (ulonglong)*(uint *)(iVar4 + 9);
          if (uVar9 < uVar8) {
            lVar5 = (ulonglong)*(uint *)(iVar4 + 0xd) + (ulonglong)*(uint *)(iVar4 + 0x11);
            lVar10 = ((*(uint *)(iVar4 + 0xd) - uVar9) + (ulonglong)*(uint *)(iVar4 + 0x11) +
                      (ulonglong)*(uint *)(iVar4 + 0x15) + uVar8 + 0x43 & 0xfffffffc) -
                     (ulonglong)*(uint *)(iVar4 + 0x15);
            if (iVar1 != 0) {
              fn_82820290(iVar1,uVar6 + 3,auStack_70);
              lVar10 = (ulonglong)auStack_70[0] + lVar10;
              lVar5 = (ulonglong)auStack_70[0] + lVar5;
            }
            if ((*(uint *)(param_2 + 0x10) & 2) == 0) {
              if (lbl_8320A5D0 == (code *)0x0) goto LAB_82815b50;
              uVar3 = (*lbl_8320A5D0)(*(undefined4 *)(param_2 + 0x18),lVar10,uVar9,lVar5,uVar8);
            }
            else {
              if (*(code **)(param_1 + 0xc) != (code *)0x0) {
                (**(code **)(param_1 + 0xc))
                          (*(undefined4 *)(param_2 + 0x18),lVar10,uVar9,lVar5,uVar8,
                           0xffffffff82815798,param_2);
                goto LAB_82815b64;
              }
LAB_82815b50:
              uVar3 = 0;
            }
            uVar7 = fn_82815798(param_1,param_2,uVar3);
          }
LAB_82815b64:
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < *(byte *)(iVar2 + 0x51));
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

