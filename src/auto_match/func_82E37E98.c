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
extern int fn_82C2C0F0();
extern int fn_82C2C240();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;


void fn_82E37E98(void)

{
  int iVar1;
  int *piVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  
  piVar3 = (int *)fn_82F6A548();
  iVar5 = *piVar3;
  lVar6 = (longlong)(int)(*(int *)(iVar5 + 0x58) * (uint)*(ushort *)(iVar5 + 0x22)) *
          (longlong)*(int *)(iVar5 + 0x100);
  uVar2 = fn_82C2C240(iVar5);
  if ((-1 < (int)uVar2) && (uVar2 = fn_82C2C0F0(iVar5,piVar3[0x4237]), -1 < (int)uVar2)) {
    piVar3[0x1dd1] = piVar3[0x1dd2];
    piVar3[0x1d7c] = lbl_82002AE0;
    piVar3[0x422a] = 0;
    piVar3[0x422b] = 0;
    piVar3[0x422c] = 0;
    piVar3[0x422d] = 0;
    piVar3[0x422e] = 0;
    piVar3[0x422f] = 0;
    piVar3[0x42cc] = 0;
    piVar3[0x42cd] = 0;
    piVar3[0x42ce] = 0;
    piVar3[0x42cf] = 0;
    if ((ulonglong)*(ushort *)(piVar3 + 0x4234) == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(piVar3[0x1db3],0,lVar6);
    }
    piVar7 = piVar3 + 0x4235;
    *(undefined4 *)(*piVar7 + 0x1c4) = 0;
    *(undefined2 *)(*piVar7 + 0x1c8) = 0;
    *(longlong *)(*piVar7 + 0x1e8) = (longlong)-*(int *)(iVar5 + 0x100);
    *(undefined4 *)(*piVar7 + 0x204) = 0;
    *(undefined4 *)(*piVar7 + 0x208) = 0;
    *(undefined4 *)(*piVar7 + 0x20c) = 0;
    *(undefined4 *)(*piVar7 + 0x210) = 0;
    uVar2 = fn_82C2C0F0(iVar5,*(undefined4 *)(*piVar7 + 0x214));
    if (-1 < (int)uVar2) {
      iVar5 = 0;
      if (0 < piVar3[0x4236]) {
        iVar4 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar1 = *(int *)(*piVar7 + 0x10) + iVar4;
          iVar4 = iVar4 + 0x40;
          *(undefined4 *)(iVar1 + 0x30) = 0;
        } while (iVar5 < piVar3[0x4236]);
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(*piVar7 + 500),0,lVar6);
    }
  }
  fn_82F6A594(uVar2);
  return;
}

