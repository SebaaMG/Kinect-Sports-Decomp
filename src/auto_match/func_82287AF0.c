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
extern int fn_8225D388();
extern int fn_8225D8B8();
extern int fn_82287D08();
extern int fn_82287DA8();
extern int fn_82288040();
extern int fn_82288228();
extern int fn_823AB478();


void fn_82287AF0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x11f0) + 0x18bc);
  fn_82288228(param_1,0,0);
  uVar7 = 1;
  if (uVar1 == 0) {
    uVar7 = 1;
    cVar4 = (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) + '\x01';
  }
  else {
    if (uVar1 != 1) {
      if (uVar1 < 3) {
        uVar7 = 2;
        lVar5 = 1;
        iVar2 = 0x420;
        do {
          iVar6 = *(int *)(iVar2 + *(int *)(param_1 + 0x11f0) + 0x838);
          if ((iVar6 == 0) || (iVar6 == 1)) goto LAB_82287bc8;
          iVar2 = iVar2 + 0x420;
          lVar5 = lVar5 + 1;
        } while (iVar2 < 0x1080);
        lVar5 = -1;
LAB_82287bc8:
        if ((int)lVar5 == -1) {
          fn_82287DA8(param_1,(*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) + '\x01');
        }
        else {
          fn_82288228(param_1,lVar5);
        }
      }
      else if (uVar1 == 3) {
        uVar7 = 1;
      }
      else {
        if (uVar1 < 5) {
          uVar3 = 1;
          uVar7 = 2;
        }
        else if (uVar1 == 5) {
          uVar3 = 2;
          uVar7 = 3;
        }
        else {
          if (6 < uVar1) goto LAB_82287c84;
          uVar3 = 3;
          uVar7 = 4;
        }
        fn_82287D08(param_1,uVar3);
      }
      goto LAB_82287c84;
    }
    uVar7 = 2;
    lVar5 = 1;
    iVar2 = 0x420;
    do {
      iVar6 = *(int *)(iVar2 + *(int *)(param_1 + 0x11f0) + 0x838);
      if ((iVar6 == 0) || (iVar6 == 1)) goto LAB_82287c28;
      iVar2 = iVar2 + 0x420;
      lVar5 = lVar5 + 1;
    } while (iVar2 < 0x1080);
    lVar5 = -1;
LAB_82287c28:
    if ((int)lVar5 == -1) {
      fn_82287DA8(param_1,1);
    }
    else {
      fn_82288228(param_1,lVar5,1);
    }
    fn_82288040(param_1,2);
    cVar4 = '\x03';
  }
  fn_82288040(param_1,cVar4);
LAB_82287c84:
  iVar2 = fn_8225C590();
  iVar6 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10);
  while ((int)uVar7 < iVar6 >> 2) {
    if (uVar7 < (uint)(iVar6 >> 2)) {
      iVar6 = *(int *)(uVar7 * 4 + *(int *)(iVar2 + 0x10));
    }
    else {
      iVar6 = 0;
    }
    fn_8225D8B8(iVar2,iVar6);
    if (*(char *)(iVar6 + 0xd8) != '\0') {
      uVar3 = fn_823AB478(iVar6);
      fn_8225D388(iVar2,uVar3);
    }
    iVar6 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10);
  }
  return;
}

