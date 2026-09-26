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
extern unsigned int *auStack_a8;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEC150();
extern int fn_82FEC160();
extern int fn_830137C8();
extern int fn_83015570();
extern int fn_83025208();
extern int fn_83025248();
extern int fn_830252F0();
extern int fn_83025300();
extern int fn_830253C8();
extern int fn_8303B290();
extern int fn_8303B2E8();
extern unsigned int iStack_a0;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_83264300;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_830245B0(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined1 auStack_a8 [5];
  char cStack_a3;
  int iStack_a0;
  int *apiStack_9c [2];
  char cStack_94;
  
  *(int *)(param_1 + 0x16c) = (int)param_2;
  uVar13 = 1;
  uVar10 = 0;
  iVar11 = param_1 + 0x70;
  piVar12 = (int *)(param_1 + 0x24);
  do {
    piVar14 = piVar12 + -2;
    fn_83025208(iVar11,uVar10,&iStack_a0);
    if (iStack_a0 != piVar12[-2]) {
      piVar1 = (int *)*piVar12;
      bVar3 = iStack_a0 == -2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
        *piVar12 = 0;
        uVar4 = lbl_831BC770;
        puVar2 = (undefined4 *)piVar12[1];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          fn_82FA5190(uVar4,puVar2);
          piVar12[1] = 0;
        }
      }
      *piVar14 = -1;
      if (piVar12[-1] != 0) {
        fn_830252F0(iVar11);
        fn_82FEC150();
        (**(code **)(*(int *)piVar12[-1] + 0x10))((int *)piVar12[-1],0xffffffff831bc7fc);
        piVar12[-1] = 0;
        fn_82FEC160();
      }
      if (iStack_a0 != -1) {
        if ((bVar3) &&
           (uVar13 = fn_83015570(lbl_83264300,param_2,&iStack_a0,apiStack_9c), (int)uVar13 != 1)
           ) {
          return uVar13;
        }
        uVar13 = fn_830137C8(0xffffffff831bc7fc,iStack_a0,piVar12);
        if ((int)uVar13 != 1) {
          return uVar13;
        }
        uVar5 = (**(code **)(*apiStack_9c[0] + 8))(apiStack_9c[0],0xffffffff831bc7fc);
        piVar12[-1] = (int)uVar5;
        if ((uVar5 & 0xffffffff) == 0) {
          uVar13 = 2;
        }
        else {
          if (bVar3) {
            uVar13 = fn_830253C8(iVar11,uVar5,param_2);
          }
          else {
            uVar13 = fn_83025300(iVar11,uVar5,uVar10);
          }
          if ((int)uVar13 == 1) {
            uVar8 = 0;
            for (uVar9 = *(uint *)(param_1 + 0x84); uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
              uVar8 = uVar8 + 1;
            }
            uStack_b0 = 48000;
            uStack_ac = (uVar8 & 7) << 5 | *(uint *)(param_1 + 0x84) << 0xe | 0x2003;
            *piVar14 = iStack_a0;
            uVar5 = fn_82FA5060(lbl_831BC770,0x10);
            if ((uVar5 & 0xffffffff) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = fn_8303B290(uVar5,param_1);
            }
            uVar13 = 2;
            piVar12[1] = (int)uVar5;
            if ((uVar5 & 0xffffffff) != 0) {
              *(byte *)(piVar12 + 2) = cStack_94 << 7 | *(byte *)(piVar12 + 2) & 0x7f;
              fn_8303B2E8(uVar5,bVar3);
              uVar13 = (**(code **)(*(int *)*piVar12 + 0xc))((int *)*piVar12,auStack_a8);
              if (cStack_a3 == '\0') {
                if ((int)uVar13 == 1) {
                  lVar7 = (ulonglong)(uint)piVar12[1] + 4;
                  if ((ulonglong)(uint)piVar12[1] == 0) {
                    lVar7 = 0;
                  }
                  uVar13 = (**(code **)(*(int *)*piVar12 + 0x14))
                                     ((int *)*piVar12,0xffffffff831bc7fc,lVar7,piVar12[-1],
                                      &uStack_b0);
                  if (((int)uVar13 == 1) &&
                     (uVar13 = (**(code **)(*(int *)*piVar12 + 8))(), (int)uVar13 == 1))
                  goto LAB_83024930;
                }
              }
              else {
                uVar13 = 2;
              }
            }
          }
        }
        piVar1 = (int *)*piVar12;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
          *piVar12 = 0;
        }
        uVar4 = lbl_831BC770;
        puVar2 = (undefined4 *)piVar12[1];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          fn_82FA5190(uVar4,puVar2);
          piVar12[1] = 0;
        }
        *piVar14 = -1;
        if (piVar12[-1] != 0) {
          fn_830252F0(iVar11);
          fn_82FEC150();
          (**(code **)(*(int *)piVar12[-1] + 0x10))((int *)piVar12[-1],0xffffffff831bc7fc);
          piVar12[-1] = 0;
          fn_82FEC160();
        }
      }
    }
LAB_83024930:
    uVar10 = uVar10 + 1;
    piVar12 = piVar12 + 5;
    if (3 < (uVar10 & 0xffffffff)) {
      cVar6 = fn_83025248(iVar11);
      *(byte *)(param_1 + 0x6c) = cVar6 << 7 | *(byte *)(param_1 + 0x6c) & 0x7f;
      return uVar13;
    }
  } while( true );
}

