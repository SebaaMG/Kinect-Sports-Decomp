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
extern unsigned int *auStack_50;
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern int fn_825480E0();
extern int fn_8262FBD8();
extern int fn_8263BDD8();
extern int fn_8265CA60();
extern int fn_82837D98();
extern int fn_8284C850();
extern int fn_8284C858();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


void fn_82578430(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [80];
  
  iVar2 = fn_8284C850(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14));
  iVar3 = fn_8284C858(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14));
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14),0,&iStack_60);
  *(int *)(param_1 + 0xa4) = iVar2;
  *(int *)(param_1 + 0xa8) = iVar3;
  *(undefined4 *)(param_1 + 0xac) = 1;
  uVar4 = fn_8265CA60((longlong)iVar3 * (longlong)iVar2);
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  fn_8263BDD8(iStack_60,0,0,0x10,&uStack_5c,auStack_50,auStack_54,auStack_58);
  lVar7 = 0;
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          uVar5 = fn_825480E0(uStack_5c,iVar2,iVar8,lVar7);
          iVar1 = iVar6 + iVar8;
          iVar8 = iVar8 + 1;
          *(undefined1 *)(iVar1 + *(int *)(param_1 + 0xb0)) = uVar5;
        } while (iVar8 < iVar2);
      }
      lVar7 = lVar7 + 1;
      iVar6 = iVar6 + iVar2;
    } while ((int)lVar7 < iVar3);
  }
  fn_8262FBD8(iStack_60,*(uint *)(iStack_60 + 0x20) & 0xfffff000,
                    *(uint *)(iStack_60 + 0x30) & 0xfffff000);
  return;
}

