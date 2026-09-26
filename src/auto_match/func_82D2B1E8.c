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
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern unsigned int iStack_58;
extern unsigned int iStack_68;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8 fn_82D2B1E8(int param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar8;
  int iVar9;
  undefined8 uVar7;
  bool bVar11;
  longlong lVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uStack_70;
  uint uStack_6c;
  int iStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  
  uStack_70 = 0;
  uStack_6c = 0;
  iStack_68 = -1;
  iVar8 = fn_82CE5410();
  fn_82CEAB00(&uStack_70,*(undefined4 *)(iVar8 + 0x10),0);
  uStack_60 = 0;
  uStack_5c = 0;
  iStack_58 = -1;
  iVar8 = fn_82CE5410();
  fn_82CEAB00(&uStack_60,*(undefined4 *)(iVar8 + 0x10),0);
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      if ((param_2 == '\0') || ((uStack_6c & 0x7fffffff) == *(uint *)(param_1 + 0x18))) {
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar8 + 0x10));
        fn_82BA02A8(&uStack_60);
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar8 + 0x10));
        fn_82BA02A8(&uStack_70);
        uVar7 = 0;
      }
      else {
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar8 + 0x10));
        fn_82BA02A8(&uStack_60);
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar8 + 0x10));
        fn_82BA02A8(&uStack_70);
        uVar7 = 1;
      }
      return uVar7;
    }
    uVar12 = 0;
    do {
      uVar3 = *(uint *)((int)((uVar12 + 5 & 0xffffffff) << 2) + (int)puVar1);
      iVar8 = (int)((uVar12 + 2 & 0x3fffffff) << 2);
      uVar5 = uVar3 & 3;
      puVar6 = (undefined4 *)(uVar3 & 0xfffffffc);
      iVar9 = fn_82CEA220(&uStack_70,*(undefined4 *)(iVar8 + (int)puVar1));
      if (iStack_68 < iVar9) {
        bVar11 = false;
        puVar4 = *(undefined4 **)(iVar8 + (int)puVar1);
        for (puVar2 = *(undefined4 **)(param_1 + 0x14); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          if (puVar4 == puVar2) {
            bVar11 = true;
            break;
          }
        }
        if (!bVar11) {
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar8 + 0x10));
          fn_82BA02A8(&uStack_60);
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar8 + 0x10));
          fn_82BA02A8(&uStack_70);
          return 2;
        }
        iVar9 = fn_82CE5410();
        fn_82CEA160(&uStack_70,*(undefined4 *)(iVar9 + 0x10),puVar4,puVar4);
      }
      uVar13 = uVar12 + 1;
      if (*(int *)(iVar8 + (int)puVar1) ==
          *(int *)((int)(((-(ulonglong)(uVar12 != 2) & uVar13) + 2 & 0xffffffff) << 2) + (int)puVar1
                  )) {
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar8 + 0x10));
        fn_82BA02A8(&uStack_60);
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar8 + 0x10));
        fn_82BA02A8(&uStack_70);
        return 7;
      }
      if ((uVar3 & 0xfffffffc) != 0) {
        if (puVar1 == puVar6) {
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar8 + 0x10));
          fn_82BA02A8(&uStack_60);
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar8 + 0x10));
          fn_82BA02A8(&uStack_70);
          return 6;
        }
        iVar9 = fn_82CEA220(&uStack_60,puVar6);
        if (iStack_58 < iVar9) {
          bVar11 = false;
          for (puVar2 = *(undefined4 **)(param_1 + 0x2c); puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)*puVar2) {
            if (puVar2 == puVar6) {
              bVar11 = true;
              break;
            }
          }
          if (!bVar11) {
            iVar8 = fn_82CE5410();
            fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar8 + 0x10));
            fn_82BA02A8(&uStack_60);
            iVar8 = fn_82CE5410();
            fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar8 + 0x10));
            fn_82BA02A8(&uStack_70);
            return 3;
          }
          iVar9 = fn_82CE5410();
          fn_82CEA160(&uStack_60,*(undefined4 *)(iVar9 + 0x10),puVar6,puVar6);
        }
        if ((*(int *)(iVar8 + (int)puVar1) != puVar6[(-(uint)(uVar5 != 2) & uVar5 + 1) + 2]) ||
           (puVar6[uVar5 + 2] !=
            *(int *)((int)(((-(ulonglong)(uVar12 != 2) & uVar13) + 2 & 0xffffffff) << 2) +
                    (int)puVar1))) {
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar8 + 0x10));
          fn_82BA02A8(&uStack_60);
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar8 + 0x10));
          fn_82BA02A8(&uStack_70);
          return 5;
        }
        lVar10 = 2;
        if ((uVar12 & 0xffffffff) != 0) {
          lVar10 = uVar12 - 1;
        }
        iVar8 = 2;
        if ((uVar3 & 3) != 0) {
          iVar8 = uVar5 - 1;
        }
        if (*(int *)((int)((lVar10 + 2U & 0xffffffff) << 2) + (int)puVar1) == puVar6[iVar8 + 2]) {
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar8 + 0x10));
          fn_82BA02A8(&uStack_60);
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar8 + 0x10));
          fn_82BA02A8(&uStack_70);
          return 4;
        }
      }
      uVar12 = uVar13;
    } while ((int)uVar13 < 3);
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

