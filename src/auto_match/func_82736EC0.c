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
extern unsigned int *auStack_74;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696BC8();
extern int fn_82735960();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_75;
extern unsigned int uStack_76;
extern unsigned int uStack_77;
extern unsigned int uStack_78;
extern unsigned int uStack_79;
extern unsigned int uStack_7a;
extern unsigned int uStack_7b;
extern unsigned int uStack_7c;
extern unsigned int uStack_7d;
extern unsigned int uStack_7e;
extern unsigned int uStack_7f;
extern unsigned int uStack_80;


void fn_82736EC0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar5;
  char cVar6;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar7;
  int *piVar8;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 auStack_74 [4];
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int aiStack_40 [16];
  
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar5 != 0x1e)) ||
     (cVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x40))(), cVar6 != '\0')) {
    uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x74,0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_82735960(uVar3,*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    uStack_80 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    piVar8 = (int *)(iVar5 + 0x10);
    fn_82681728(&iStack_70,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,0xffffffff82001394);
    iVar2 = *(int *)(iVar5 + 0x10);
    uVar4 = fn_826957D0(param_1,0);
    (**(code **)(iVar2 + 0xc))(piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_70,uVar4,&uStack_80);
    lVar7 = (ulonglong)*(uint *)(iStack_70 + 8) - 1;
    *(int *)(iStack_70 + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(iStack_70);
    }
    if (1 < *(int *)(param_1 + 0x1c)) {
      uStack_7f = 0;
      fn_82681728(&iStack_6c,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,0xffffffff82011754);
      iVar2 = *piVar8;
      uVar4 = fn_826957D0(param_1,1);
      (**(code **)(iVar2 + 0xc))(piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_6c,uVar4,&uStack_7f)
      ;
      lVar7 = (ulonglong)*(uint *)(iStack_6c + 8) - 1;
      *(int *)(iStack_6c + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(iStack_6c);
      }
      if (2 < *(int *)(param_1 + 0x1c)) {
        uStack_7e = 0;
        fn_82681728(&iStack_68,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,0xffffffff821cdae4);
        iVar2 = *piVar8;
        uVar4 = fn_826957D0(param_1,2);
        (**(code **)(iVar2 + 0xc))
                  (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_68,uVar4,&uStack_7e);
        lVar7 = (ulonglong)*(uint *)(iStack_68 + 8) - 1;
        *(int *)(iStack_68 + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8(iStack_68);
        }
        if (3 < *(int *)(param_1 + 0x1c)) {
          uStack_7d = 0;
          fn_82681728(&iStack_64,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,0xffffffff8201178c
                           );
          iVar2 = *piVar8;
          uVar4 = fn_826957D0(param_1,3);
          (**(code **)(iVar2 + 0xc))
                    (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_64,uVar4,&uStack_7d);
          lVar7 = (ulonglong)*(uint *)(iStack_64 + 8) - 1;
          *(int *)(iStack_64 + 8) = (int)lVar7;
          if (lVar7 == 0) {
            fn_826944C8(iStack_64);
          }
          if (4 < *(int *)(param_1 + 0x1c)) {
            uStack_7c = 0;
            fn_82681728(&iStack_60,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                              0xffffffff82011774);
            iVar2 = *piVar8;
            uVar4 = fn_826957D0(param_1,4);
            (**(code **)(iVar2 + 0xc))
                      (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_60,uVar4,&uStack_7c);
            lVar7 = (ulonglong)*(uint *)(iStack_60 + 8) - 1;
            *(int *)(iStack_60 + 8) = (int)lVar7;
            if (lVar7 == 0) {
              fn_826944C8(iStack_60);
            }
            if (5 < *(int *)(param_1 + 0x1c)) {
              uStack_7b = 0;
              fn_82681728(&iStack_5c,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                                0xffffffff8201173c);
              iVar2 = *piVar8;
              uVar4 = fn_826957D0(param_1,5);
              (**(code **)(iVar2 + 0xc))
                        (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_5c,uVar4,&uStack_7b);
              lVar7 = (ulonglong)*(uint *)(iStack_5c + 8) - 1;
              *(int *)(iStack_5c + 8) = (int)lVar7;
              if (lVar7 == 0) {
                fn_826944C8(iStack_5c);
              }
              if (6 < *(int *)(param_1 + 0x1c)) {
                uStack_7a = 0;
                fn_82681728(&iStack_58,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                                  0xffffffff82011738);
                iVar2 = *piVar8;
                uVar4 = fn_826957D0(param_1,6);
                (**(code **)(iVar2 + 0xc))
                          (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_58,uVar4,&uStack_7a);
                lVar7 = (ulonglong)*(uint *)(iStack_58 + 8) - 1;
                *(int *)(iStack_58 + 8) = (int)lVar7;
                if (lVar7 == 0) {
                  fn_826944C8(iStack_58);
                }
                if (7 < *(int *)(param_1 + 0x1c)) {
                  uStack_79 = 0;
                  fn_82681728(&iStack_54,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                                    0xffffffff82011880);
                  iVar2 = *piVar8;
                  uVar4 = fn_826957D0(param_1,7);
                  (**(code **)(iVar2 + 0xc))
                            (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_54,uVar4,&uStack_79);
                  lVar7 = (ulonglong)*(uint *)(iStack_54 + 8) - 1;
                  *(int *)(iStack_54 + 8) = (int)lVar7;
                  if (lVar7 == 0) {
                    fn_826944C8(iStack_54);
                  }
                  if (8 < *(int *)(param_1 + 0x1c)) {
                    uStack_78 = 0;
                    fn_82681728(&iStack_50,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                                      0xffffffff8200feb0);
                    iVar2 = *piVar8;
                    uVar4 = fn_826957D0(param_1,8);
                    (**(code **)(iVar2 + 0xc))
                              (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_50,uVar4,&uStack_78);
                    lVar7 = (ulonglong)*(uint *)(iStack_50 + 8) - 1;
                    *(int *)(iStack_50 + 8) = (int)lVar7;
                    if (lVar7 == 0) {
                      fn_826944C8(iStack_50);
                    }
                    if (9 < *(int *)(param_1 + 0x1c)) {
                      uStack_77 = 0;
                      fn_82681728(&iStack_4c,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                                        0xffffffff82011768);
                      iVar2 = *piVar8;
                      uVar4 = fn_826957D0(param_1,9);
                      (**(code **)(iVar2 + 0xc))
                                (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_4c,uVar4,&uStack_77)
                      ;
                      lVar7 = (ulonglong)*(uint *)(iStack_4c + 8) - 1;
                      *(int *)(iStack_4c + 8) = (int)lVar7;
                      if (lVar7 == 0) {
                        fn_826944C8(iStack_4c);
                      }
                      if (10 < *(int *)(param_1 + 0x1c)) {
                        uStack_76 = 0;
                        fn_82681728(&iStack_48,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                                          0xffffffff8201175c);
                        iVar2 = *piVar8;
                        uVar4 = fn_826957D0(param_1,10);
                        (**(code **)(iVar2 + 0xc))
                                  (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_48,uVar4,
                                   &uStack_76);
                        lVar7 = (ulonglong)*(uint *)(iStack_48 + 8) - 1;
                        *(int *)(iStack_48 + 8) = (int)lVar7;
                        if (lVar7 == 0) {
                          fn_826944C8(iStack_48);
                        }
                        if (0xb < *(int *)(param_1 + 0x1c)) {
                          uStack_75 = 0;
                          fn_82681728(&iStack_44,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                                            0xffffffff8201177c);
                          iVar2 = *piVar8;
                          uVar4 = fn_826957D0(param_1,0xb);
                          (**(code **)(iVar2 + 0xc))
                                    (piVar8,*(undefined4 *)(param_1 + 0x18),&iStack_44,uVar4,
                                     &uStack_75);
                          lVar7 = (ulonglong)*(uint *)(iStack_44 + 8) - 1;
                          *(int *)(iStack_44 + 8) = (int)lVar7;
                          if (lVar7 == 0) {
                            fn_826944C8(iStack_44);
                          }
                          if (0xc < *(int *)(param_1 + 0x1c)) {
                            auStack_74[0] = 0;
                            fn_82681728(aiStack_40,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,
                                              0xffffffff820110e8);
                            iVar1 = *piVar8;
                            uVar4 = fn_826957D0(param_1,0xc);
                            (**(code **)(iVar1 + 0xc))
                                      (piVar8,*(undefined4 *)(param_1 + 0x18),aiStack_40,uVar4,
                                       auStack_74);
                            lVar7 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
                            *(int *)(aiStack_40[0] + 8) = (int)lVar7;
                            if (lVar7 == 0) {
                              fn_826944C8(aiStack_40[0]);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar5);
  if (iVar5 != 0) {
    fn_826824B0(iVar5);
  }
  return;
}

