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
extern int fn_82A2C6F8();
extern int fn_82A2CE70();
extern int fn_82A2D260();
extern int fn_82A2DC18();
extern int fn_82A2E260();
extern int fn_82A2E6A8();
extern int fn_82A2FA30();
extern unsigned int iStack_68;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8
fn_82A2FA90(int param_1,undefined8 param_2,longlong param_3,ulonglong param_4,longlong param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uStack_70;
  uint uStack_6c;
  int iStack_68;
  uint uStack_64;
  byte abStack_60 [96];
  
  do {
    uVar1 = fn_82A2E6A8(param_1,param_2,param_5,&uStack_64,&uStack_70,&iStack_68);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar8 = (ulonglong)uStack_64;
    if ((iStack_68 != 0) || (iVar2 = fn_82A2C6F8(param_1,uVar8), iVar2 == 0)) {
      fn_82A2FA30(param_1,uVar8,*(undefined4 *)(param_1 + 0x8c));
    }
    uVar5 = (0xaa - uVar8 % 0xaa & 0xfffff) << 0xc;
    uVar10 = (ulonglong)uStack_70;
    if (uVar5 < uStack_70) {
      uVar10 = uVar5;
    }
    if ((param_4 & 0xffffffff) < uVar10) {
      uVar10 = param_4;
    }
    if (0x10000 < (uVar10 & 0xffffffff)) {
      uVar10 = 0x10000;
    }
    if ((*(char *)(param_1 + 0xce) != '\0') &&
       (uVar1 = fn_82A2E260(param_1,uVar8,((uVar10 & 0xffffffff) >> 0xc) + uVar8 + -1),
       (int)uVar1 < 0)) {
      return uVar1;
    }
    uVar1 = fn_82A2DC18(param_1,uVar8,0,&uStack_6c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_82A2CE70(param_1,param_3,uVar10,
                            ((*(uint *)(param_1 + 0xac) + uVar8) * 0x1000 & 0xffffffff000) +
                            *(longlong *)(param_1 + 0x20));
    uVar7 = uStack_6c;
    if ((int)uVar1 < 0) {
      uStack_6c = uStack_6c - *(int *)(param_1 + 0x34);
      iVar2 = (((int)uStack_6c >> 0xc) + (uint)((int)uStack_6c < 0 && (uStack_6c & 0xfff) != 0)) * 8
              + *(int *)(param_1 + 0x30);
      *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
      return uVar1;
    }
    param_4 = param_4 - uVar10;
    param_5 = uVar10 + param_5;
    lVar9 = (uVar8 % 0xaa) * 0x18 + (ulonglong)uStack_6c;
    do {
      XeCryptSha(param_3,0x1000,0,0,0,0,abStack_60,0x14);
      pbVar4 = abStack_60;
      lVar6 = lVar9;
      do {
        lVar3 = (ulonglong)*(byte *)lVar6 - (ulonglong)*pbVar4;
        if (lVar3 != 0) break;
        lVar6 = lVar6 + 1;
        pbVar4 = pbVar4 + 1;
      } while ((int)lVar6 != (int)lVar9 + 0x14);
      if ((int)lVar3 != 0) {
        uVar7 = uVar7 - *(int *)(param_1 + 0x34);
        iVar2 = (((int)uVar7 >> 0xc) + (uint)((int)uVar7 < 0 && (uVar7 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
        fn_82A2D260(param_1,0xffffffffc0000032);
        return 0xffffffffc0000032;
      }
      uVar10 = uVar10 - 0x1000;
      lVar9 = lVar9 + 0x18;
      uStack_70 = (uint)uVar10;
      param_3 = param_3 + 0x1000;
    } while (uVar10 != 0);
    uVar7 = uVar7 - *(int *)(param_1 + 0x34);
    iVar2 = (((int)uVar7 >> 0xc) + (uint)((int)uVar7 < 0 && (uVar7 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
  } while( true );
}

