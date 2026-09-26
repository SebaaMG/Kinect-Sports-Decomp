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
extern int fn_8265C940();
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_82963D50();
extern int fn_82963FA8();
extern int fn_82964128();
extern int fn_82BA02A8();


longlong fn_829A3A78(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  uVar1 = fn_8265C940(*(int *)(param_1 + 0xc) << 2,0x24810000);
  *(undefined4 *)(param_1 + 0x2b8) = uVar1;
  iVar2 = fn_8265C940(*(int *)(param_1 + 8) << 2,0x24810000);
  *(int *)(param_1 + 700) = iVar2;
  if ((*(int *)(param_1 + 0x2b8) == 0) || (iVar2 == 0)) {
LAB_829a3bc4:
    lVar5 = -0x7ff8fff2;
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        iVar3 = fn_82963998(0x74);
        if (iVar3 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = fn_829632A0();
        }
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2b8)) = uVar1;
        if (*(int *)(iVar2 + *(int *)(param_1 + 0x2b8)) == 0) goto LAB_829a3bc4;
        lVar5 = fn_82963D50(*(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2b8)),
                                  *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
        if (lVar5 < 0) {
          return lVar5;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar2 = 0;
      do {
        iVar3 = fn_82964128(0x80);
        if (iVar3 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = fn_82BA02A8();
        }
        *(undefined4 *)(*(int *)(param_1 + 700) + iVar2) = uVar1;
        if (*(int *)(*(int *)(param_1 + 700) + iVar2) == 0) goto LAB_829a3bc4;
        lVar5 = fn_82963FA8(*(undefined4 *)(*(int *)(param_1 + 700) + iVar2),
                             *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2));
        if (lVar5 < 0) {
          return lVar5;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 8);
  }
  return lVar5;
}

