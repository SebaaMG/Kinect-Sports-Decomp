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
extern int fn_82ACAFD8();
extern int fn_82AD1978();
extern int fn_82B16898();
extern int fn_82B16D80();
extern int fn_82B19C90();
extern int fn_82B25248();
extern int fn_82B28AC0();
extern int fn_82B82D28();
extern int fn_82B843F0();
extern int fn_82B8BCB0();
extern int fn_82B8D488();
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82B2A568(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar8;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int aiStack_68 [26];
  
  puVar1 = *(uint **)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  bVar4 = false;
  uVar12 = 0;
  if ((*puVar1 & 0xe000000) != 0) {
    do {
      fn_82B82D28(puVar1,uVar12,&uStack_a0,&uStack_98,&iStack_8c,0,param_2,0);
      fn_82B82D28(uVar2,uVar12,&uStack_9c,&uStack_94,&iStack_90,0,param_2,0);
      if (uStack_a0 != uStack_9c) {
        uVar11 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
        uVar7 = uStack_a0;
        uVar5 = uStack_9c;
        if ((*(uint *)(uStack_9c + 8) >> 7 & 0x7f) == uVar11) {
          if ((((((*(uint *)(uStack_a0 + 8) >> 7 & 0x7f) == uVar11) && (iStack_90 == 0)) &&
               (fn_82B82D28(*(undefined4 *)(uStack_9c + 0x2c),uStack_94,&uStack_80,&uStack_7c,
                                  &iStack_78,0,param_2,0), uVar5 = uStack_9c, uVar7 = uStack_a0,
               ((*(uint *)(uStack_80 + 8) ^ *(uint *)(param_2 + 8)) & 0x3f80) != 0)) &&
              ((cVar8 = fn_82B19C90(param_1,param_2,uVar12,0,uStack_80,uStack_7c,iStack_78,
                                        uStack_9c), uVar7 = uStack_a0, cVar8 != '\0' &&
               (cVar8 = fn_82B19C90(param_1,uVar5,uStack_94,0,uStack_a0,uStack_98,iStack_8c,
                                        param_2), cVar8 != '\0')))) &&
             (cVar8 = fn_82B8BCB0(param_1,uVar7,uVar5,0), uVar7 = uStack_a0, uVar5 = uStack_9c
             , cVar8 != '\0')) {
            fn_82B8D488(param_1,uStack_a0,uStack_9c,0);
            fn_82B28AC0(param_1,param_2,puVar1,uVar12,uStack_80,uStack_7c,iStack_78);
            uVar5 = fn_82B843F0(param_1,uStack_9c);
            iVar9 = 0x2c;
            for (uVar11 = 0; uVar11 < (*(uint *)(uStack_9c + 8) >> 0x13 & 7); uVar11 = uVar11 + 1) {
              uVar6 = fn_82AD1978(uVar5,*(undefined4 *)(iVar9 + uStack_9c));
              *(undefined4 *)(iVar9 + uVar5) = uVar6;
              iVar9 = iVar9 + 4;
            }
            uVar11 = uVar5 & 0xfffffffe;
            puVar10 = (uint *)((uStack_9c & 0xfffffffe) + 0x24);
            *(uint *)(uVar11 + 0x24) = *puVar10;
            *(uint *)(*puVar10 & 0xfffffffe) = uVar11;
            *(uint *)(uVar11 + 0x28) = uStack_9c & 0xfffffffe;
            *puVar10 = uVar11 + 0x28;
            fn_82B28AC0(param_1,uVar5,*(undefined4 *)(uVar5 + 0x2c),uStack_94,uStack_a0,uStack_98,
                          iStack_8c);
            fn_82B16898(uVar5,uStack_94);
            fn_82B28AC0(param_1,param_2,uVar2,uVar12,uVar5,uStack_94,iStack_90);
            uVar11 = *(uint *)(param_2 + 0xc) & 0x4444;
            if ((*(uint *)(param_2 + 0xc) & 0xffff) != uVar11) {
              *(short *)(param_2 + 0xe) = (short)uVar11;
            }
            fn_82B16898(param_2,uVar12);
            fn_82B25248(param_1,uStack_9c,*(undefined4 *)(param_1 + 0x28c));
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) & 0xfbffffff;
            fn_82B25248(param_1,uVar5,*(undefined4 *)(param_1 + 0x28c));
            bVar4 = true;
            uStack_98 = uStack_7c;
            uStack_a0 = uStack_80;
            iStack_8c = iStack_78;
            uStack_9c = uVar5;
            uVar7 = uStack_80;
          }
          if (((*(uint *)(uVar7 + 8) ^ *(uint *)(param_2 + 8)) & 0x3f80) != 0) {
            fn_82B28AC0(param_1,param_2,puVar1,uVar12,uVar5,uStack_94,iStack_90);
            fn_82B28AC0(param_1,param_2,uVar2,uVar12,uStack_a0,uStack_98,iStack_8c);
            iVar9 = iStack_90;
            uVar6 = uStack_94;
            uVar7 = uStack_9c;
            uVar5 = uStack_a0;
            bVar4 = true;
            uStack_94 = uStack_98;
            iStack_90 = iStack_8c;
            uStack_98 = uVar6;
            iStack_8c = iVar9;
            uStack_9c = uStack_a0;
            uStack_a0 = uVar7;
          }
        }
        if (((*(uint *)(uVar7 + 8) ^ *(uint *)(param_2 + 8)) & 0x3f80) == 0) {
          if (iStack_8c == 0) {
            fn_82B82D28(*(undefined4 *)(uVar7 + 0x30),uStack_98,&uStack_88,&uStack_74,
                              &iStack_70,0,param_2,0);
            uVar11 = uStack_88;
            uVar5 = uStack_9c;
            uVar7 = uStack_a0;
            if ((((((*(uint *)(uStack_88 + 8) ^ *(uint *)(param_2 + 8)) & 0x3f80) != 0) &&
                 (cVar8 = fn_82B19C90(param_1,param_2,uVar12,1,uStack_88,uStack_74,iStack_70,
                                          uStack_9c), uVar7 = uStack_a0, cVar8 != '\0')) &&
                ((cVar8 = fn_82B19C90(param_1,uStack_a0,uStack_98,1,uVar5,uStack_94,iStack_90,
                                          param_2), cVar8 != '\0' &&
                 (cVar8 = fn_82B16D80(uVar5,uVar11), cVar8 != '\0')))) &&
               (((cVar8 = fn_82ACAFD8(uVar5), cVar8 == '\0' &&
                 (uVar3 = (ulonglong)*(uint *)(*(int *)(uVar5 + 0x1c) + 0x30) & 0x7ffff,
                 (*(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(*(int *)(uVar7 + 0x1c) + 0x28)) &
                 1 << ((uint)uVar3 & 0x1f)) != 0)) ||
                (cVar8 = fn_82B8BCB0(param_1,uVar5,uVar7,0), uVar5 = uStack_9c,
                uVar11 = uStack_88, uVar7 = uStack_a0, cVar8 != '\0')))) {
              cVar8 = fn_82ACAFD8(uVar5);
              if (cVar8 != '\0') {
                fn_82B8D488(param_1,uVar5,uVar7,0);
                uVar11 = uStack_88;
              }
              fn_82B28AC0(param_1,param_2,uVar2,uVar12,uVar11,uStack_74,iStack_70);
              uVar7 = fn_82B843F0(param_1,uStack_a0);
              iVar9 = 0x2c;
              for (uVar11 = 0; uVar11 < (*(uint *)(uStack_a0 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1)
              {
                uVar6 = fn_82AD1978(uVar7,*(undefined4 *)(iVar9 + uStack_a0));
                *(undefined4 *)(iVar9 + uVar7) = uVar6;
                iVar9 = iVar9 + 4;
              }
              uVar11 = uVar7 & 0xfffffffe;
              puVar10 = (uint *)((uStack_a0 & 0xfffffffe) + 0x24);
              *(uint *)(uVar11 + 0x24) = *puVar10;
              *(uint *)(*puVar10 & 0xfffffffe) = uVar11;
              *(uint *)(uVar11 + 0x28) = uStack_a0 & 0xfffffffe;
              *puVar10 = uVar11 + 0x28;
              fn_82B28AC0(param_1,uVar7,*(undefined4 *)(uVar7 + 0x30),uStack_98,uStack_9c,
                            uStack_94,iStack_90);
              fn_82B16898(uVar7,uStack_98);
              fn_82B28AC0(param_1,param_2,puVar1,uVar12,uVar7,uStack_98,iStack_8c);
              uVar11 = *(uint *)(param_2 + 0xc) & 0x4444;
              if ((*(uint *)(param_2 + 0xc) & 0xffff) != uVar11) {
                *(short *)(param_2 + 0xe) = (short)uVar11;
              }
              fn_82B16898(param_2,uVar12);
              fn_82B25248(param_1,uStack_a0,*(undefined4 *)(param_1 + 0x28c));
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & 0xfbffffff;
              fn_82B25248(param_1,uVar7,*(undefined4 *)(param_1 + 0x28c));
              bVar4 = true;
              uStack_9c = uStack_88;
              uStack_94 = uStack_74;
              iStack_90 = iStack_70;
              uStack_a0 = uVar7;
            }
            fn_82B82D28(*(undefined4 *)(uVar7 + 0x2c),uStack_98,&uStack_84,&uStack_6c,
                              aiStack_68,0,param_2,0);
            uVar11 = uStack_84;
            uVar7 = uStack_a0;
            if (((((*(uint *)(uStack_84 + 8) ^ *(uint *)(param_2 + 8)) & 0x3f80) != 0) &&
                (cVar8 = fn_82B19C90(param_1,param_2,uVar12,1,uStack_84,uStack_6c,aiStack_68[0],
                                         uStack_a0), uVar5 = uStack_9c, cVar8 != '\0')) &&
               (((cVar8 = fn_82B19C90(param_1,uVar7,uStack_98,0,uStack_9c,uStack_94,iStack_90,
                                          param_2), cVar8 != '\0' &&
                 (cVar8 = fn_82B16D80(uVar5,uVar11), cVar8 != '\0')) &&
                (((cVar8 = fn_82ACAFD8(uVar5), cVar8 == '\0' &&
                  (uVar3 = (ulonglong)*(uint *)(*(int *)(uVar5 + 0x1c) + 0x30) & 0x7ffff,
                  (*(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(*(int *)(uVar7 + 0x1c) + 0x28))
                  & 1 << ((uint)uVar3 & 0x1f)) != 0)) ||
                 (cVar8 = fn_82B8BCB0(param_1,uVar5,uVar7,0), uVar7 = uStack_a0,
                 uVar5 = uStack_9c, uVar11 = uStack_84, cVar8 != '\0')))))) {
              cVar8 = fn_82ACAFD8(uVar5);
              if (cVar8 != '\0') {
                fn_82B8D488(param_1,uVar5,uVar7,0);
                uVar11 = uStack_84;
              }
              fn_82B28AC0(param_1,param_2,uVar2,uVar12,uVar11,uStack_6c,aiStack_68[0]);
              uVar7 = fn_82B843F0(param_1,uStack_a0);
              iVar9 = 0x2c;
              for (uVar11 = 0; uVar11 < (*(uint *)(uStack_a0 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1)
              {
                uVar6 = fn_82AD1978(uVar7,*(undefined4 *)(iVar9 + uStack_a0));
                *(undefined4 *)(iVar9 + uVar7) = uVar6;
                iVar9 = iVar9 + 4;
              }
              uVar11 = uVar7 & 0xfffffffe;
              puVar10 = (uint *)((uStack_a0 & 0xfffffffe) + 0x24);
              *(uint *)(uVar11 + 0x24) = *puVar10;
              *(uint *)(*puVar10 & 0xfffffffe) = uVar11;
              *(uint *)(uVar11 + 0x28) = uStack_a0 & 0xfffffffe;
              *puVar10 = uVar11 + 0x28;
              fn_82B28AC0(param_1,uVar7,*(undefined4 *)(uVar7 + 0x2c),uStack_98,uStack_9c,
                            uStack_94,iStack_90);
              fn_82B16898(uVar7,uStack_98);
              fn_82B28AC0(param_1,param_2,puVar1,uVar12,uVar7,uStack_98,iStack_8c);
              uVar11 = *(uint *)(param_2 + 0xc) & 0x4444;
              if ((*(uint *)(param_2 + 0xc) & 0xffff) != uVar11) {
                *(short *)(param_2 + 0xe) = (short)uVar11;
              }
              fn_82B16898(param_2,uVar12);
              fn_82B25248(param_1,uStack_a0,*(undefined4 *)(param_1 + 0x28c));
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & 0xfbffffff;
              fn_82B25248(param_1,uVar7,*(undefined4 *)(param_1 + 0x28c));
              uVar11 = uStack_84;
              uVar6 = uStack_6c;
              iVar9 = aiStack_68[0];
              uStack_a0 = uVar7;
              goto LAB_82b2aeb4;
            }
          }
        }
        else {
          cVar8 = fn_82B16D80(uVar7,uVar5);
          if (cVar8 != '\0') {
            fn_82B28AC0(param_1,param_2,puVar1,uVar12,uVar5,uStack_94,iStack_90);
            fn_82B28AC0(param_1,param_2,uVar2,uVar12,uStack_a0,uStack_98,iStack_8c);
            iVar9 = iStack_8c;
            uVar6 = uStack_98;
            uVar11 = uStack_a0;
            uStack_a0 = uStack_9c;
            uStack_98 = uStack_94;
            iStack_8c = iStack_90;
LAB_82b2aeb4:
            bVar4 = true;
            uStack_9c = uVar11;
            uStack_94 = uVar6;
            iStack_90 = iVar9;
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while ((uVar12 & 0xffffffff) < ((ulonglong)(*puVar1 >> 0x19) & 7));
  }
  if (bVar4) {
    uVar2 = *(undefined4 *)(param_1 + 0x28c);
    for (iVar9 = *(int *)(param_2 + 4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 8)) {
      if (*(int *)(iVar9 + 0x10) != 0) {
        fn_82B25248(param_1,*(int *)(iVar9 + 0x10),uVar2);
      }
    }
  }
  return;
}

