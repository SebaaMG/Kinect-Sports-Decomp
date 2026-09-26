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
extern unsigned int *auStack_74;
extern unsigned int *auStack_78;
extern int fn_825480E0();
extern int fn_8262FBD8();
extern int fn_8263BDD8();
extern int fn_8265CA60();
extern int fn_82837D98();
extern int fn_8284C850();
extern int fn_8284C858();
extern int fn_8284C860();
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


void fn_82578668(int param_1)

{
  undefined1 extraout_var;
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [112];
  
  uVar1 = fn_8284C850(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14));
  iVar2 = fn_8284C858(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14));
  uVar3 = fn_8284C860(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14));
  uVar3 = uVar3 & 0xff;
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14),0,&iStack_80);
  iVar8 = (int)uVar1;
  *(int *)(param_1 + 0x84) = iVar8;
  *(int *)(param_1 + 0x88) = iVar2;
  *(uint *)(param_1 + 0x8c) = uVar3;
  uVar4 = fn_8265CA60((longlong)(int)(uVar3 * iVar2) * (longlong)iVar8);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  lVar6 = 0;
  if (uVar3 != 0) {
    iVar5 = 0;
    do {
      fn_8263BDD8(iStack_80,lVar6,0,0x10,&uStack_7c,auStack_70,auStack_74,auStack_78);
      lVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar9 = 0;
          if (0 < iVar8) {
            do {
              fn_825480E0(uStack_7c,uVar1,iVar9,lVar7);
              *(undefined1 *)((iVar5 + (int)lVar7) * iVar8 + *(int *)(param_1 + 0x90) + iVar9) =
                   extraout_var;
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar8);
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < iVar2);
      }
      fn_8262FBD8(iStack_80,*(uint *)(iStack_80 + 0x20) & 0xfffff000,
                        *(uint *)(iStack_80 + 0x30) & 0xfffff000);
      lVar6 = lVar6 + 1;
      iVar5 = iVar5 + iVar2;
    } while ((int)lVar6 < (int)uVar3);
  }
  return;
}

