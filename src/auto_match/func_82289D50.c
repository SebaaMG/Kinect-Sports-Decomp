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
extern int fn_8225C590();
extern int fn_8225DA18();
extern int fn_82286080();
extern int fn_82289258();
extern int fn_823AB470();
extern int fn_82512508();
extern int fn_828EA610();


void fn_82289D50(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar9;
  int iVar8;
  longlong lVar7;
  undefined4 uVar10;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) == 0) {
    uVar10 = 8;
LAB_82289eb4:
    *(undefined4 *)(iVar1 + 0x604) = uVar10;
  }
  else {
    if (*(int *)(param_1 + 4) != 1) {
      return;
    }
    uVar5 = fn_8225C590();
    bVar3 = false;
    bVar4 = false;
    if (*(int *)(iVar1 + 0x6a8) == 0) {
      uVar6 = fn_8225DA18(uVar5,*(undefined4 *)(iVar1 + 0x6ac));
      cVar9 = fn_82512508();
      if ((cVar9 != '\0') && (cVar9 = fn_828EA610(uVar6), cVar9 == '\0')) {
        bVar3 = true;
        if ((uVar6 & 0xffffffff) == 0) {
LAB_82289dd4:
          bVar2 = false;
        }
        else {
          iVar8 = fn_823AB470(uVar6);
          bVar2 = true;
          if (iVar8 != 2) goto LAB_82289dd4;
        }
        if (bVar2) {
          bVar4 = true;
        }
      }
    }
    iVar8 = 0;
    if ((*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18b8) == 1) && (*(int *)(iVar1 + 0x6e8) == 0)) {
      fn_8225DA18(uVar5,*(undefined4 *)(iVar1 + 0x6ec));
      lVar7 = fn_82286080();
      iVar8 = (int)(lVar7 + -1) - ((int)lVar7 + -2 + (uint)(lVar7 + -1 == 0));
    }
    if (bVar3) {
      if (bVar4) {
        if ((*(int *)(iVar1 + 0x6e8) == 4) || (*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18c0) != 3)) {
          if (iVar8 == 0) {
            uVar10 = 9;
          }
          else {
            uVar10 = 0xd;
          }
        }
        else {
          uVar10 = 0xc;
        }
        goto LAB_82289eb4;
      }
      uVar5 = 0xffffffff821a9654;
    }
    else {
      uVar5 = 0xffffffff821a95fc;
    }
    fn_82289258(iVar1,0xffffffff821a9610,uVar5,0xffffffff82196344,0xffffffff82196582,
                  0xffffffff8228ada0,0);
  }
  return;
}

