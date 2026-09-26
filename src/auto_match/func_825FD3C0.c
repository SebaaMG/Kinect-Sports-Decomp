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
extern unsigned int *auStack_140;
extern unsigned int *auStack_190;
extern int fn_822315A0();
extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_8261BF58();
extern int fn_8261C010();
extern int fn_8261C080();
extern int fn_8261C118();
extern int fn_8261C1B8();
extern int fn_8261C270();
extern int fn_8261C390();
extern int fn_8261C400();
extern int fn_8261C4D8();
extern int fn_82A264E0();
extern int fn_82A264E8();
extern int fn_82F64020();
extern int iRam83281150;
extern unsigned int uStack_180;


undefined4 fn_825FD3C0(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_190 [16];
  ulonglong uStack_180;
  undefined1 auStack_140 [320];
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x68) == 0) goto LAB_825fd6f0;
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 == 0) {
    if (iRam83281150 == 0) {
      uVar7 = 1;
      iRam83281150 = 1;
LAB_825fd6ec:
      *(undefined4 *)(param_1 + 100) = uVar7;
      goto LAB_825fd6f0;
    }
  }
  else {
    if (uVar1 == 1) {
      iVar5 = (**(code **)(*(int *)(param_1 + 0x34) + 0x1c))
                        (*(undefined4 *)(param_1 + 0x30),param_1 + 0x58,
                         (undefined4 *)(param_1 + 0x5c));
      if (iVar5 == 0) {
        uVar7 = 0x65b;
      }
      else {
        fn_82A264E0(*(undefined4 *)(iVar4 + 0x68),auStack_190);
        uVar3 = fn_82A264E8(*(undefined4 *)(param_1 + 0x5c),0);
        if (uVar3 <= uStack_180) {
          iVar4 = *(int *)(param_1 + 0x54);
          fn_8261BF58(param_1 + 0x3c,*(undefined4 *)(iVar4 + 0x19c),iVar4 + 0x170,iVar4 + 0x68
                           );
          fn_8261C118(*(undefined4 *)(param_1 + 0x3c),0x12);
          uVar7 = 2;
          goto LAB_825fd6ec;
        }
        uVar7 = 0x70;
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x60) = uVar7;
      *(undefined4 *)(param_1 + 100) = 8;
      goto LAB_825fd6f0;
    }
    if (uVar1 < 3) {
      fn_8261C010(*(undefined4 *)(param_1 + 0x3c));
      if (*(int *)(*(int *)(param_1 + 0x3c) + 0x238) == 0) {
        if (*(int *)(*(int *)(param_1 + 0x3c) + 600) == 0) {
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0x54) + 0x34);
          if (0xf < *(uint *)(*(int *)(param_1 + 0x54) + 0x48)) {
            puVar6 = (undefined4 *)*puVar6;
          }
          fn_82F64020(auStack_140,0x104,0xffffffff821c4da8,puVar6);
          fn_8261C1B8(param_1 + 0x48,*(undefined4 *)(param_1 + 0x3c),auStack_140);
          fn_8261C400(*(undefined4 *)(param_1 + 0x48),0x50000000,2,2);
          uVar7 = 4;
        }
        else {
          fn_82522ED8();
          uVar7 = 8;
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 600);
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(undefined4 *)(param_1 + 0x60) = uVar2;
        }
        goto LAB_825fd6ec;
      }
    }
    else if (uVar1 == 4) {
      fn_8261C270(*(undefined4 *)(param_1 + 0x48));
      iVar4 = *(int *)(param_1 + 0x48);
      if (*(int *)(iVar4 + 0x308) == 0) {
        if (*(int *)(iVar4 + 800) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82522D98(8);
        }
        *(int *)(param_1 + 0x60) = *(int *)(iVar4 + 800);
LAB_825fd48c:
        fn_82522ED8(iVar4);
        fn_8261C080(*(undefined4 *)(param_1 + 0x3c));
        uVar7 = 7;
        goto LAB_825fd6ec;
      }
    }
    else {
      if (uVar1 != 5) {
        if (uVar1 == 6) {
          fn_8261C270(*(undefined4 *)(param_1 + 0x48));
          if (*(int *)(*(int *)(param_1 + 0x48) + 0x308) != 0) goto LAB_825fd6cc;
          iVar4 = *(int *)(*(int *)(param_1 + 0x48) + 800);
          if (iVar4 != 0) {
            *(int *)(param_1 + 0x60) = iVar4;
            fn_82522ED8(*(undefined4 *)(param_1 + 0x6c));
            iVar4 = *(int *)(param_1 + 0x48);
            goto LAB_825fd484;
          }
          fn_82522ED8(*(undefined4 *)(param_1 + 0x6c));
          fn_8261C4D8(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x58),
                          *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x4c));
          *(undefined4 *)(param_1 + 100) = 5;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x4c);
        }
        else if (uVar1 == 7) {
          fn_8261C010(*(undefined4 *)(param_1 + 0x3c));
          if (*(int *)(*(int *)(param_1 + 0x3c) + 0x238) == 0) {
            fn_82522ED8();
            uVar7 = 8;
            *(undefined4 *)(param_1 + 0x68) = 0;
            goto LAB_825fd6ec;
          }
          goto LAB_825fd6cc;
        }
LAB_825fd6f0:
        if ((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x58) != 0)) {
          fn_82522ED8();
          *(undefined4 *)(param_1 + 0x58) = 0;
        }
        iVar4 = *(int *)(param_3 + 4);
        if (*(int *)(param_1 + 100) == 8) {
          uVar7 = *(undefined4 *)(param_1 + 0x60);
          iRam83281150 = 0;
          if (iVar4 == 0) {
            iRam83281150 = 0;
            return uVar7;
          }
          fn_822315A0();
          return uVar7;
        }
        goto LAB_825fd6d0;
      }
      fn_8261C270(*(undefined4 *)(param_1 + 0x48));
      iVar4 = *(int *)(param_1 + 0x48);
      if (*(int *)(iVar4 + 0x308) == 0) {
        if (*(int *)(iVar4 + 800) == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        else {
          *(int *)(param_1 + 0x60) = *(int *)(iVar4 + 800);
        }
LAB_825fd484:
        fn_8261C390(iVar4);
        iVar4 = *(int *)(param_1 + 0x48);
        goto LAB_825fd48c;
      }
    }
  }
LAB_825fd6cc:
  iVar4 = *(int *)(param_3 + 4);
LAB_825fd6d0:
  if (iVar4 != 0) {
    fn_822315A0();
  }
  return 0x3e5;
}

