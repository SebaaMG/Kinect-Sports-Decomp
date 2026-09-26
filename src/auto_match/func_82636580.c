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
extern unsigned int *auStack_70;
extern int fn_82631E78();
extern int fn_82631F80();
extern int fn_82632DE0();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_82636580(int param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int aiStack_80 [4];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x4dbc);
  if (-1 < (int)*(uint *)(param_1 + 0x4dbc)) {
    if (*(int *)(param_1 + 0x4dc0) == 0) {
      uVar2 = 0xffffffff80004005;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x18);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      iVar8 = param_2 + 0x14;
      fn_82631E78(iVar8,auStack_70,0x24);
      if ((*(uint *)(param_1 + 0x4dd4) & 0x3fffffff) != 0) {
        uStack_68 = CONCAT44((((U64)(uStack_68) >> 0) & 0xFFFFFFFF),*(int *)(param_2 + 0x18) - iVar4);
        fn_82631E78(iVar8,*(undefined4 *)(param_1 + 0x4dd0));
      }
      iVar7 = *(int *)(param_1 + 0x4dc8) << 2;
      if (iVar7 != 0) {
        uStack_60 = CONCAT44(*(int *)(param_2 + 0x18) - iVar4,(((U64)(uStack_60) >> 32) & 0xFFFFFFFF));
        aiStack_80[0] = iVar7;
        fn_82631E78(iVar8,aiStack_80,4);
        fn_82631E78(iVar8,*(undefined4 *)(param_1 + 0x4dc4),iVar7);
      }
      puVar6 = (undefined4 *)((int)&uStack_60 + 4);
      iVar7 = param_1 + 0x170;
      lVar5 = 2;
      do {
        if (*(int *)(iVar7 + 0x255c) == 0) {
          *puVar6 = *(undefined4 *)(param_2 + 0x18);
          iVar3 = fn_82631F80(iVar7,param_2);
          if (iVar3 < 0) {
            *(int *)(param_1 + 0x4dbc) = iVar3;
          }
        }
        if (*(int *)(iVar7 + -0xf0) != 0) {
          puVar6[1] = *(undefined4 *)(param_2 + 0x18);
          iVar3 = fn_82632DE0(iVar7 + -0x160,param_2);
          if (iVar3 < 0) {
            *(int *)(param_1 + 0x4dbc) = iVar3;
          }
        }
        lVar5 = lVar5 + -1;
        puVar6 = puVar6 + 2;
        iVar7 = iVar7 + 0x26d0;
      } while (lVar5 != 0);
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      *(int *)(param_2 + 0x18) = iVar4;
      uStack_68 = CONCAT44(*(undefined4 *)(param_2 + 0xc),(((U64)(uStack_68) >> 32) & 0xFFFFFFFF));
      fn_82631E78(iVar8,auStack_70,0x24);
      *(undefined4 *)(param_2 + 0x18) = uVar1;
      iVar4 = *(int *)(param_2 + 0x10);
      if ((iVar4 < 0) || (iVar4 = *(int *)(param_2 + 0x24), iVar4 < 0)) {
        *(int *)(param_1 + 0x4dbc) = iVar4;
      }
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x4dbc);
    }
  }
  return uVar2;
}

