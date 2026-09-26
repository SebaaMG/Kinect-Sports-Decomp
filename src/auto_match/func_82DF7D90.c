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
extern unsigned int *auStack_3120;
extern unsigned int fStack_3144;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_f0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC050();
extern int fn_82D7BF58();
extern int fn_82D8E938();
extern int fn_82D92F30();
extern int fn_82DAD000();
extern int fn_82DAD288();
extern int fn_82DAE118();
extern int fn_82DAEFD0();
extern int fn_82DB0258();
extern int fn_82DC73A8();
extern int fn_82DC74A8();
extern int fn_82DF6E88();
extern int fn_82DF7968();
extern unsigned int iStack_315c;
extern unsigned int iStack_3160;
extern unsigned int iStack_3178;
extern unsigned int iStack_3188;
extern unsigned int iStack_3198;
extern unsigned int iStack_319c;
extern unsigned int iStack_31a4;
extern unsigned int iStack_31a8;
extern unsigned int iStack_31ac;
extern unsigned int iStack_31b0;
extern unsigned int iStack_31c0;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_311c;
extern unsigned int uStack_312e;
extern unsigned int uStack_3130;
extern unsigned int uStack_3138;
extern unsigned int uStack_3140;
extern unsigned int uStack_3148;
extern unsigned int uStack_314c;
extern unsigned int uStack_3150;
extern unsigned int uStack_3158;
extern unsigned int uStack_3170;
extern unsigned int uStack_3174;
extern unsigned int uStack_317c;
extern unsigned int uStack_3180;
extern unsigned int uStack_3182;
extern unsigned int uStack_3183;
extern unsigned int uStack_3184;
extern unsigned int uStack_318c;
extern unsigned int uStack_3190;
extern unsigned int uStack_31a0;
extern unsigned int uStack_31b8;
extern unsigned int uStack_31bc;


undefined8
fn_82DF7D90(int param_1,int param_2,int param_3,int param_4,undefined8 param_5,int param_6)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  int iVar7;
  int iVar8;
  undefined8 uVar6;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar12;
  undefined4 *puVar13;
  ulonglong uVar11;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  int iStack_31c0;
  uint uStack_31bc;
  uint uStack_31b8;
  int iStack_31b0;
  int iStack_31ac;
  int iStack_31a8;
  int iStack_31a4;
  undefined4 uStack_31a0;
  int iStack_319c;
  int iStack_3198;
  int *piStack_3194;
  undefined4 uStack_3190;
  undefined4 uStack_318c;
  int iStack_3188;
  undefined1 uStack_3184;
  undefined1 uStack_3183;
  undefined1 uStack_3182;
  undefined4 uStack_3180;
  undefined4 uStack_317c;
  int iStack_3178;
  undefined4 uStack_3174;
  undefined4 uStack_3170;
  int iStack_3160;
  int iStack_315c;
  undefined4 uStack_3158;
  undefined4 uStack_3150;
  undefined4 uStack_314c;
  undefined4 uStack_3148;
  float fStack_3144;
  undefined4 uStack_3140;
  int *piStack_313c;
  undefined4 uStack_3138;
  undefined1 *puStack_3134;
  undefined2 uStack_3130;
  undefined2 uStack_312e;
  undefined1 auStack_3120 [4];
  undefined4 uStack_311c;
  float fStack_f0;
  float fStack_d0;
  float fStack_cc;
  
  uVar10 = (ulonglong)*(uint *)(param_3 + 0xcc);
  piVar5 = *(int **)(param_6 + 8);
  uVar11 = uVar10;
  if (((uVar10 != *(uint *)(param_4 + 0xcc)) &&
      (uVar11 = (ulonglong)*(uint *)(param_4 + 0xcc), *(char *)(param_3 + 0xe8) != '\x05')) &&
     (uVar11 = uVar10, *(char *)(param_4 + 0xe8) != '\x05')) {
    uVar11 = fn_82DB0258(param_6);
  }
  iVar7 = fn_82DF6E88(*(undefined1 *)(param_2 + 0x19),param_5,piVar5,uVar11,param_6);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_6 + 0x10);
    if (*(char *)(iVar7 + 0x18) == '\x01') {
      iVar7 = *(char *)(iVar7 + 0x10) + iVar7;
    }
    else {
      iVar7 = 0;
    }
    if (param_3 != iVar7) {
      uVar9 = *(undefined4 *)(param_6 + 0x10);
      *(undefined4 *)(param_6 + 0x10) = *(undefined4 *)(param_6 + 0x14);
      *(undefined4 *)(param_6 + 0x14) = uVar9;
      uVar2 = *(undefined2 *)(param_6 + 4);
      *(undefined2 *)(param_6 + 4) = *(undefined2 *)(param_6 + 6);
      *(undefined2 *)(param_6 + 6) = uVar2;
      iVar7 = piVar5[0x16];
      piVar5[0x16] = piVar5[0x17];
      piVar5[0x17] = iVar7;
      if (piVar5[0x1d] != 0) {
        iVar7 = piVar5[0x1d];
        uVar9 = *(undefined4 *)(iVar7 + 4);
        *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 8) = uVar9;
        *(bool *)(piVar5[0x1d] + 0x1a) = *(char *)(piVar5[0x1d] + 0x1a) == '\0';
      }
    }
    iVar7 = fn_82DF7968(param_2,*(undefined1 *)(param_2 + 0x19),param_2 + 0xf4,param_5,param_6);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_2 + 0x6c);
      iVar8 = fn_82CE5410();
      if ((int)(piVar5[10] & 0x3fffffffU) < iVar7) {
        iVar14 = (piVar5[10] & 0x3fffffffU) << 1;
        if (iVar14 <= iVar7) {
          iVar14 = iVar7;
        }
        fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),piVar5 + 8,iVar14,1);
      }
      piVar5[9] = iVar7;
      iVar7 = 0;
      if (0 < piVar5[9]) {
        do {
          *(undefined1 *)(piVar5[8] + iVar7) = *(undefined1 *)(*(int *)(param_2 + 0x68) + iVar7);
          iVar7 = iVar7 + 1;
        } while (iVar7 < piVar5[9]);
      }
      if (*(short *)(piVar5[0xf] + 4) == 0) {
        iVar7 = *(int *)(param_6 + 0x10);
        if (*(char *)(iVar7 + 0x18) == '\x01') {
          iVar7 = *(char *)(iVar7 + 0x10) + iVar7;
        }
        else {
          iVar7 = 0;
        }
        iVar7 = *(int *)(iVar7 + 8);
        *(undefined1 *)(iVar7 + 0x9c) = 1;
        *(int *)(iVar7 + 0x94) = *(int *)(iVar7 + 0x94) + -1;
        fn_82D8E938(iVar7,piVar5 + 0x11,1);
        *(undefined1 *)(iVar7 + 0x9c) = 0;
        *(int *)(iVar7 + 0x94) = *(int *)(iVar7 + 0x94) + 1;
      }
      uVar3 = *(ushort *)(piVar5[0xf] + 4);
      uVar12 = (uint)uVar3;
      iVar8 = uVar12 + 2;
      iVar14 = ((int)(uint)uVar3 >> 1) * 0x70 + ((uVar12 & 1) + (uVar12 & 1) * 2) * 0x10;
      iVar7 = uVar12 + 3;
      iVar15 = iVar14 + 0x80;
      if (1 < uVar3) {
        iVar15 = iVar14 + 0xa0;
        iVar8 = uVar12 + 3;
        iVar7 = uVar12 + 4;
      }
      iVar14 = piVar5[0x1d];
      if (iVar14 != 0) {
        iVar14 = *(int *)(*(int *)((*(byte *)(iVar14 + 0x1a) + 1) * 4 + iVar14) + 0xcc);
        *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) - iVar8;
        *(int *)(iVar14 + 0x14) = *(int *)(iVar14 + 0x14) - iVar7;
        *(int *)(iVar14 + 0xc) = *(int *)(iVar14 + 0xc) - iVar15;
        iVar14 = piVar5[0x1d];
        *(short *)(iVar14 + 0x18) = *(short *)(iVar14 + 0x18) - (short)iVar7;
        *(short *)(iVar14 + 0x14) = *(short *)(iVar14 + 0x14) - (short)iVar15;
        *(short *)(iVar14 + 0x16) = *(short *)(iVar14 + 0x16) - (short)iVar8;
      }
      iVar7 = piVar5[0xf];
      uVar6 = fn_82DC73A8(*(undefined2 *)(iVar7 + 2));
      iVar8 = fn_82CE5410();
      (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),iVar7,uVar6);
      uVar3 = *(ushort *)(param_2 + 0x24);
      iVar7 = fn_82DC74A8((ulonglong)uVar3,*(undefined1 *)(param_2 + 0x28),
                                *(undefined1 *)(param_2 + 0x29),*(undefined2 *)(param_2 + 0x2c));
      piVar5[0xf] = iVar7;
      *(ushort *)(iVar7 + 4) = uVar3;
      iVar7 = piVar5[0xf];
      *(undefined8 *)(iVar7 + 0x10) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(iVar7 + 0x18) = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(iVar7 + 0x20) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(iVar7 + 0x28) = *(undefined8 *)(param_2 + 0x48);
      *(int *)(piVar5[0x1d] + 0xc) = piVar5[0xf];
      *(undefined2 *)(piVar5[0x1d] + 0x10) = *(undefined2 *)(piVar5[0xf] + 2);
      uVar4 = *(ushort *)(piVar5[0xf] + 4);
      iStack_31a8 = uVar4 + 2;
      iStack_31b0 = ((int)(uint)uVar4 >> 1) * 0x70 + ((uVar4 & 1) + (uVar4 & 1) * 2) * 0x10;
      iStack_31a4 = uVar4 + 3;
      iStack_31ac = iStack_31b0 + 0x80;
      iStack_31b0 = iStack_31b0 + 0xa0;
      if (1 < uVar4) {
        iStack_31a8 = uVar4 + 3;
        iStack_31a4 = uVar4 + 4;
        iStack_31ac = iStack_31b0;
      }
      fn_82D92F30(*(undefined4 *)
                    (*(int *)((*(byte *)(piVar5[0x1d] + 0x1a) + 1) * 4 + piVar5[0x1d]) + 0xcc),
                   piVar5 + 0x11,&iStack_31b0);
      iVar7 = piVar5[0xf];
      fn_82CFC050((uint)*(ushort *)(iVar7 + 6) * 0x20 + iVar7 + 0x30,
                   *(undefined4 *)(param_2 + 0x50),
                   (longlong)(int)(uint)*(byte *)(iVar7 + 10) * (longlong)(int)(uint)uVar3);
      fn_82CFC050((ulonglong)(uint)piVar5[0xf] + 0x30,*(undefined4 *)(param_2 + 0x5c),
                   (ulonglong)uVar3 << 5);
      if (*(char *)(param_1 + 1) != '\0') {
        iVar7 = piVar5[0xf];
        iVar8 = 0;
        bVar1 = *(byte *)(iVar7 + 10);
        if (*(short *)(iVar7 + 4) != 0) {
          puVar13 = (undefined4 *)
                    ((((uint)*(ushort *)(iVar7 + 6) * 0x20 + iVar7) - (uint)bVar1) + 0x38);
          do {
            puVar13 = (undefined4 *)((int)puVar13 + (uint)bVar1);
            *puVar13 = 0;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(uint)*(ushort *)(piVar5[0xf] + 4));
        }
      }
      iStack_31c0 = 0;
      uStack_31bc = 0;
      uStack_31b8 = 0x80000000;
      (**(code **)(*piVar5 + 0x30))(piVar5,&iStack_31c0);
      uVar11 = (ulonglong)uStack_31bc;
      if ((*(char *)(param_1 + 8) != '\0') && (iVar7 = 0, 0 < (int)uStack_31bc)) {
        iVar8 = 0;
        dVar17 = (double)lbl_821AAD20;
        dVar16 = (double)lbl_82134508;
        do {
          iVar15 = 0;
          iVar14 = 0;
          uVar2 = *(undefined2 *)(iVar8 + iStack_31c0);
          fStack_f0 = (float)dVar16;
          fStack_d0 = (float)dVar17;
          uStack_311c = 0;
          fStack_cc = (float)dVar17;
          if (*(char *)(param_1 + 10) != '\0') {
            iVar15 = param_3 + 0x10;
            iVar14 = param_4 + 0x10;
          }
          uVar9 = (**(code **)(*piVar5 + 0x28))(piVar5,uVar2);
          uStack_3150 = (**(code **)(*piVar5 + 0x2c))(piVar5,uVar2);
          puStack_3134 = auStack_3120;
          uStack_3158 = 1;
          uStack_314c = 0;
          fStack_3144 = (float)dVar17;
          uStack_3140 = 0;
          uStack_3138 = (undefined4)param_5;
          if (piVar5[2] == 0) {
            uStack_312e = *(undefined2 *)((int)piVar5 + 0x12);
          }
          else {
            uStack_312e = 0;
          }
          iStack_3160 = iVar15;
          iStack_315c = iVar14;
          uStack_3148 = uVar9;
          piStack_313c = piVar5;
          uStack_3130 = uVar2;
          fn_82DAEFD0(*(undefined4 *)(param_3 + 8),&iStack_3160);
          if (*(short *)(param_3 + 0x204) != 0) {
            fn_82DAD288(param_3,&iStack_3160);
          }
          if (*(short *)(param_4 + 0x204) != 0) {
            fn_82DAD288(param_4,&iStack_3160);
          }
          uVar11 = (ulonglong)uStack_31bc;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 2;
        } while (iVar7 < (int)uStack_31bc);
      }
      if ((*(char *)(param_1 + 9) != '\0') && (0 < (int)uVar11)) {
        iVar7 = 0;
        do {
          uVar2 = *(undefined2 *)(iVar7 + iStack_31c0);
          iVar8 = (**(code **)(*piVar5 + 0x28))(piVar5,uVar2);
          if ((*(byte *)(iVar8 + 0xf) & 1) == 0) {
            iVar8 = (**(code **)(*piVar5 + 0x28))(piVar5,uVar2);
            uStack_318c = (**(code **)(*piVar5 + 0x2c))(piVar5,uVar2);
            iStack_3178 = iVar8 + 0x14;
            uStack_31a0 = 2;
            uStack_3190 = 4;
            uStack_3184 = 0;
            uStack_3183 = 0;
            uStack_3182 = 0;
            uStack_3180 = 0;
            uStack_317c = 0;
            uStack_3174 = 0;
            uStack_3170 = 0;
            iStack_319c = param_3;
            iStack_3198 = param_4;
            piStack_3194 = piVar5;
            iStack_3188 = iVar8;
            fn_82DAE118(*(undefined4 *)(param_3 + 8),&uStack_31a0);
            uStack_31a0 = 0;
            if (*(short *)(param_3 + 0x204) != 0) {
              fn_82DAD000(param_3,&uStack_31a0);
            }
            uStack_31a0 = 1;
            if (*(short *)(param_4 + 0x204) != 0) {
              fn_82DAD000(param_4,&uStack_31a0);
            }
          }
          uVar11 = uVar11 - 1;
          iVar7 = iVar7 + 2;
        } while (uVar11 != 0);
      }
      fn_82D7BF58(param_6,param_5);
      iVar7 = fn_82CE5410();
      uStack_31bc = 0;
      if ((uStack_31b8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                  (*(int **)(iVar7 + 0x10),iStack_31c0,uStack_31b8 & 0x3fffffff,2);
      }
      return 0;
    }
  }
  return 1;
}

