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
extern int fn_82ABDA10();
extern int fn_82ABDD90();
extern int fn_82ABE0E8();
extern int fn_82ABE6D0();
extern int fn_82AD11D0();
extern int fn_82AE9340();


undefined8
fn_82AD2CF0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined1 *param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar8;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = 0;
  iVar10 = 0;
  for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff;
    if (((1 << ((uint)uVar3 & 0x1f) &
         *(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28))) != 0) &&
       ((param_3 == 0 ||
        (uVar3 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff,
        (1 << ((uint)uVar3 & 0x1f) & *(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28))
        ) == 0)))) {
      if ((*(uint *)(uVar1 + 0x30) & 0x2000000) != 0) {
        return 0;
      }
      if ((*(uint *)(uVar1 + 0x1c) & 1) == 0) {
        uVar13 = -(uint)((*(uint *)(uVar1 + 0x1c) & 1) == 0) & *(uint *)(uVar1 + 0x1c);
        iVar6 = uVar1 + 0x18;
      }
      else {
        uVar13 = -(uint)((*(uint *)(uVar1 + 0x24) & 1) == 0) & *(uint *)(uVar1 + 0x24);
        iVar6 = uVar1 + 0x20;
      }
      while (uVar13 != 0) {
        do {
          cVar8 = fn_82ABDA10(uVar13);
          if (cVar8 != '\0') {
            return 0;
          }
          uVar2 = *(uint *)(uVar13 + 8);
          if ((uVar2 >> 0x19 & 1) != 0) {
            return 0;
          }
          cVar8 = fn_82AD11D0(uVar13);
          if (cVar8 == '\0') {
            return 0;
          }
          uVar2 = uVar2 >> 7 & 0x7f;
          if ((uVar2 == 0) || (bVar4 = true, 0x66 < uVar2)) {
            bVar4 = false;
          }
          if ((bVar4) || (uVar2 == 0x69)) {
            uVar11 = uVar12 + 1;
            if (((*(uint *)(param_1 + 0x28) & 0x80000) != 0) &&
               ((uVar5 = *(uint *)((uVar13 & 0xfffffffe) + 0x24), (uVar5 & 1) == 0 &&
                (uVar5 = uVar5 & 0xfffffffe, uVar5 != 0x28)))) {
              if ((uVar2 < 0x20) || (bVar4 = true, 0x52 < uVar2)) {
                bVar4 = false;
              }
              if (bVar4) {
                uVar5 = *(uint *)(uVar5 - 0x20) >> 7 & 0x7f;
                if ((uVar5 == 0) || (bVar4 = true, 0x1f < uVar5)) {
                  bVar4 = false;
                }
                if ((bVar4) && (uVar5 = fn_82ABE6D0(), uVar13 == uVar5)) {
                  uVar11 = uVar12;
                }
              }
            }
            uVar12 = uVar11;
            if ((uVar2 < 0x60) || (bVar4 = true, 0x66 < uVar2)) {
              bVar4 = false;
            }
            if ((bVar4) || (cVar8 = fn_82AE9340(uVar13), cVar8 != '\0')) {
              iVar10 = iVar10 + 1;
            }
          }
          uVar13 = *(uint *)((uVar13 & 0xfffffffe) + 0x28);
        } while (((uVar13 & 1) == 0) && (uVar13 != 0));
        if ((iVar6 == uVar1 + 0x20) ||
           (uVar13 = *(uint *)(uVar1 + 0x24), iVar6 = uVar1 + 0x20, (uVar13 & 1) != 0)) break;
      }
    }
  }
  iVar6 = fn_82ABE0E8(param_4,param_1);
  if (iVar6 != 1) {
    if (iVar6 == 3) {
      uVar9 = 0;
LAB_82ad3070:
      *param_6 = uVar9;
      return 1;
    }
    if (iVar6 == 4) {
LAB_82ad3060:
      *param_6 = 1;
      return 1;
    }
    if ((iVar6 < 8) || (9 < iVar6)) {
      uVar1 = *(uint *)(param_5 + 8) >> 7 & 0x7f;
      if ((uVar1 == 0) || (bVar4 = true, 0x1f < uVar1)) {
        bVar4 = false;
      }
      if (bVar4) {
        iVar6 = *(int *)(param_5 + 0x30);
      }
      else {
        iVar6 = *(int *)(param_5 + 0x2c);
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if ((*(uint *)(iVar6 + 8) & 0x3f80) == 0x3e00) {
        uVar1 = *(uint *)(iVar6 + 8);
        iVar7 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        if ((*(uint *)((*(uint *)(iVar7 + iVar6 + -8) & 0x7fff) * 0x28 + *(int *)(param_1 + 0xc) + 4
                      ) & 0x70) == 0) goto LAB_82ad3060;
      }
      if (((*(uint *)(*(int *)(param_4 + 0x1c) + 0x30) >> 0x1a & 1) != 0) ||
         (((*(uint *)(param_1 + 0x28) & 0x80000) != 0 && (uVar12 < 0xd)))) {
        if ((iVar10 == 0) && (((*(uint *)(param_1 + 0x28) & 0x80000) == 0 || (uVar12 < 2)))) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        goto LAB_82ad3070;
      }
    }
  }
  return 0;
}

