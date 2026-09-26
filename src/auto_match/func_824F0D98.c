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
extern unsigned int *auStack_64;
extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern unsigned int *auStack_74;
extern unsigned int *auStack_78;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern unsigned int fStack_4c;
extern unsigned int fStack_58;
extern int fn_824F1388();
extern int fn_82520158();
extern int fn_82532F98();
extern int fn_82554260();
extern int fn_82554860();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern int fn_827F5708();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_824F0D98(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar3;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    fVar2 = *(float *)(param_2 + 0x58);
    *(float *)(param_2 + 0x58) = (float)param_1;
    dVar8 = (double)(float)(param_1 - (double)fVar2);
    iVar4 = (**(code **)(**(int **)(param_2 + 8) + 0x14))();
    fVar2 = lbl_821CC160;
    if (iVar4 == 0) {
      (**(code **)(**(int **)(param_2 + 8) + 0xc))();
    }
    else if (*(int *)(param_2 + 0x50) == 0) {
      uVar5 = (**(code **)(**(int **)(param_2 + 8) + 0x4c))();
      *(undefined4 *)(param_2 + 0x50) = uVar5;
      uVar3 = fn_827F04B0(0x1a0);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_82554260(uVar3,*(undefined4 *)(param_2 + 0x50),8);
      }
      *(undefined4 *)(param_2 + 0x54) = uVar5;
      dVar8 = (double)lbl_821CC160;
      fn_827F2DD0(dVar8,*(undefined4 *)(param_2 + 0x50));
      fn_82520158(0xffffffff821c1940,auStack_80,0);
      fn_82520158(0xffffffff821c1958,auStack_7c,0);
      fn_82520158(0xffffffff821c1974,auStack_78,0);
      fn_82520158(0xffffffff821c1990,auStack_74,0);
      fn_82520158(0xffffffff821c19b0,auStack_70,0);
      fn_82520158(0xffffffff821c19d0,auStack_6c,0);
      fn_82520158(0xffffffff821c19f0,auStack_68,0);
      fn_82520158(0xffffffff821c1a10,auStack_64,0);
      fStack_58 = (float)dVar8;
      fStack_4c = (float)dVar8;
      uStack_48 = 0;
      uStack_3c = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_60 = 0x4d697850;
      uStack_5c = lbl_821CA460;
      uStack_54 = 0x20;
      uStack_50 = lbl_821917C0;
      uStack_44 = 0x40;
      uStack_40 = lbl_821917C0;
      uStack_38 = 0;
      uStack_34 = 0;
      fn_82554860(*(undefined4 *)(param_2 + 0x54),0,auStack_80,&uStack_60);
      fn_82554860(*(undefined4 *)(param_2 + 0x54),1,auStack_7c,&uStack_60);
      fn_82554860(*(undefined4 *)(param_2 + 0x54),2,auStack_78,&uStack_60);
      fn_82554860(*(undefined4 *)(param_2 + 0x54),3,auStack_74,&uStack_60);
      fn_82554860(*(undefined4 *)(param_2 + 0x54),4,auStack_70,&uStack_60);
      fn_82554860(*(undefined4 *)(param_2 + 0x54),5,auStack_6c,&uStack_60);
      fn_82554860(*(undefined4 *)(param_2 + 0x54),6,auStack_68,&uStack_60);
      fn_82554860(*(undefined4 *)(param_2 + 0x54),7,auStack_64,&uStack_60);
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 4) + 0x118) = 1;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 8) + 0x118) = 1;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0xc) + 0x118) = 1;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0x10) + 0x118) = 1;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0x14) + 0x118) = 1;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0x18) + 0x118) = 1;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0x1c) + 0x118) = 1;
      fn_827F5708(dVar8,**(undefined4 **)(*(int *)(param_2 + 0x54) + 0x198));
      fn_827F5708(dVar8,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 4));
      fn_827F5708(dVar8,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 8));
      fn_827F5708(dVar8,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 0xc));
      fn_827F5708(dVar8,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 0x10));
      fn_827F5708(dVar8,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 0x14));
      fn_827F5708(dVar8,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 0x18));
      *(float *)(param_2 + 0x5c) = (float)dVar8;
      *(undefined1 *)(param_2 + 0xb0) = 0;
      *(float *)(param_2 + 0x60) = (float)dVar8;
      *(undefined1 *)(param_2 + 0xb1) = 0;
      *(float *)(param_2 + 100) = (float)dVar8;
      *(undefined1 *)(param_2 + 0xb2) = 0;
      *(float *)(param_2 + 0x68) = (float)dVar8;
      *(undefined1 *)(param_2 + 0xb3) = 0;
      *(float *)(param_2 + 0x6c) = (float)dVar8;
      *(undefined1 *)(param_2 + 0xb4) = 0;
      *(float *)(param_2 + 0x70) = (float)dVar8;
      *(undefined1 *)(param_2 + 0xb5) = 0;
      *(float *)(param_2 + 0x74) = (float)dVar8;
      *(undefined1 *)(param_2 + 0xb6) = 0;
      *(float *)(param_2 + 0x78) = (float)dVar8;
      *(float *)(param_2 + 0x7c) = (float)dVar8;
      *(float *)(param_2 + 0x80) = (float)dVar8;
      *(float *)(param_2 + 0x84) = (float)dVar8;
      *(float *)(param_2 + 0x88) = (float)dVar8;
      *(float *)(param_2 + 0x8c) = (float)dVar8;
      *(float *)(param_2 + 0x90) = (float)dVar8;
      *(float *)(param_2 + 0x94) = (float)dVar8;
      *(float *)(param_2 + 0x98) = (float)dVar8;
      *(float *)(param_2 + 0x9c) = (float)dVar8;
      *(float *)(param_2 + 0xa0) = (float)dVar8;
      *(float *)(param_2 + 0xa4) = (float)dVar8;
      *(float *)(param_2 + 0xa8) = (float)dVar8;
      *(float *)(param_2 + 0xac) = (float)dVar8;
    }
    else {
      uVar3 = 0;
      dVar7 = (double)lbl_821CC160;
      if ((dVar7 < (double)*(float *)(param_2 + 0xbc)) &&
         (fVar1 = (float)((double)*(float *)(param_2 + 0xbc) - dVar8),
         *(float *)(param_2 + 0xbc) = fVar1, (double)fVar1 <= dVar7)) {
        *(float *)(param_2 + 0xbc) = fVar2;
        *(undefined4 *)(param_2 + 0xb8) = 0;
      }
      do {
        fn_824F1388(dVar8,param_2,uVar3);
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < 7);
      fn_827EF828(dVar8,*(undefined4 *)(param_2 + 0x50));
      fn_827EFFE8(*(undefined4 *)(param_2 + 0x50));
      iVar4 = (*(int **)(param_2 + 8))[0x20];
      iVar6 = (**(code **)(**(int **)(param_2 + 8) + 0xac))();
      if (iVar6 != 0) {
        fn_827F0180(*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(iVar4 + 4),1,0,0);
        (**(code **)(**(int **)(*(int *)(param_2 + 8) + 0x1b4) + 0x18))();
        fn_82532F98(iVar4,0xffffffff82190260);
      }
    }
  }
  return;
}

