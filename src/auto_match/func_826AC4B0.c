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
extern unsigned int *auStack_80;
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_827120C8();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_88;


void fn_826AC4B0(int param_1)

{
  undefined4 uVar1;
  int iVar4;
  longlong lVar2;
  undefined8 uVar3;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ushort uStack_48;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x40))();
    lVar2 = (**(code **)(*(int *)(iVar4 + 8) + 0xc))((int *)(iVar4 + 8),0x1b);
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      iVar4 = fn_82696958(uVar3,uVar1);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
        piVar7 = (int *)(iVar4 + 0x10);
        uStack_48 = 0;
        auStack_80[0] = 0;
        fn_82681728(&iStack_b0,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff82006688);
        cVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_b0,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_b0 + 8) - 1;
        *(int *)(iStack_b0 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_b0);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 1;
          uStack_70 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_ac,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820065d4);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_ac,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_ac + 8) - 1;
        *(int *)(iStack_ac + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_ac);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 2;
          uStack_6c = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_a8,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff8200744c);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_a8,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_a8 + 8) - 1;
        *(int *)(iStack_a8 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_a8);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 4;
          uStack_68 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_a4,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff82007438);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_a4,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_a4 + 8) - 1;
        *(int *)(iStack_a4 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_a4);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 8;
          uStack_64 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_a0,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff8200741c);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_a0,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_a0 + 8) - 1;
        *(int *)(iStack_a0 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_a0);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 0x10;
          uStack_60 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_9c,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073fc);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_9c,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_9c + 8) - 1;
        *(int *)(iStack_9c + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_9c);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 0x20;
          uStack_5c = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_98,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073f0);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_98,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_98 + 8) - 1;
        *(int *)(iStack_98 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_98);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 0x40;
          uStack_50 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_94,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073d8);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_94,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_94 + 8) - 1;
        *(int *)(iStack_94 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_94);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 0x80;
          uStack_58 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_90,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073b8);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_90,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_90 + 8) - 1;
        *(int *)(iStack_90 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_90);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 0x100;
          uStack_54 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_8c,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073a0);
        cVar5 = (**(code **)(*piVar7 + 0x10))
                          (piVar7,*(undefined4 *)(param_1 + 0x18),&iStack_8c,auStack_80);
        lVar6 = (ulonglong)*(uint *)(iStack_8c + 8) - 1;
        *(int *)(iStack_8c + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_8c);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18)),
           ((ulonglong)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(longlong)uStack_88;
          uStack_48 = uStack_48 | 0x200;
          uStack_4c = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_827120C8(lVar2,&uStack_70);
        fn_82696330(auStack_80);
        fn_826824B0(iVar4);
      }
      fn_8267C4F0(lVar2);
    }
  }
  return;
}

