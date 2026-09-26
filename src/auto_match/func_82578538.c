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
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


void fn_82578538(int param_1)

{
  undefined1 extraout_var;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [112];
  
  iVar1 = fn_8284C850(*(undefined4 *)(*(int *)(param_1 + 100) + 0x14));
  iVar1 = iVar1 >> 3;
  iVar2 = fn_8284C858(*(undefined4 *)(*(int *)(param_1 + 100) + 0x14));
  iVar2 = iVar2 >> 3;
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 100) + 0x14),0,&iStack_80);
  *(int *)(param_1 + 0x94) = iVar1;
  *(int *)(param_1 + 0x98) = iVar2;
  *(undefined4 *)(param_1 + 0x9c) = 0xc;
  uVar3 = fn_8265CA60((longlong)iVar2 * (longlong)iVar1 * 0xc);
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  lVar5 = 0;
  iVar4 = 0;
  do {
    fn_8263BDD8(iStack_80,lVar5,3,0x10,&uStack_7c,auStack_70,auStack_74,auStack_78);
    lVar6 = 0;
    if (0 < iVar2) {
      do {
        iVar7 = 0;
        if (0 < iVar1) {
          do {
            fn_825480E0(uStack_7c,iVar1,iVar7,lVar6);
            *(undefined1 *)(*(int *)(param_1 + 0xa0) + (iVar4 + (int)lVar6) * iVar1 + iVar7) =
                 extraout_var;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar1);
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar2);
    }
    fn_8262FBD8(iStack_80,*(uint *)(iStack_80 + 0x20) & 0xfffff000,
                      *(uint *)(iStack_80 + 0x30) & 0xfffff000);
    lVar5 = lVar5 + 1;
    iVar4 = iVar4 + iVar2;
  } while ((int)lVar5 < 0xc);
  return;
}

