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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAB9C0();
extern int fn_82FEF600();
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_82FF16A8();
extern int fn_8300F998();
extern int fn_8300FA30();
extern int fn_8300FCF0();
extern int fn_83010868();
extern int fn_8302BD60();
extern int fn_83032D88();
extern int fn_83032FB8();
extern int fn_83032FD0();
extern int fn_83032FF0();
extern int fn_83033018();
extern int fn_83033070();
extern int fn_83033110();
extern int fn_83033360();
extern int fn_830337B0();
extern unsigned int lbl_8201FBB8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;


void fn_83038F08(int *param_1,ulonglong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar4;
  int *piVar5;
  ulonglong uVar3;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  fn_82FEFC98();
  fn_82FEF600(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,0);
  if ((param_1[0x77] == 0) && (lbl_832642E4 != 0)) {
    fn_8300F998(lbl_832642E4,param_1);
  }
  if (param_1[0x77] == 0) goto LAB_8303921c;
  if (((*(byte *)((int)param_1 + 0xd9) & 8) != 0) ||
     ((((*(byte *)((int)param_1 + 0xd9) & 1) != 0 &&
       ((param_1[0x78] >> 0x1c == 1 || (param_1[0x78] >> 0x1c == 2)))) ||
      (piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4), piVar4 == (int *)0x0))))
  goto LAB_8303921c;
  piVar5 = (int *)fn_83033360(0x5011,0,param_1 + 0x62);
  if (piVar5 != (int *)0x0) {
    piVar5[0x27] = param_1[0x4c];
    fn_83032FB8(piVar5,param_1 + 99);
    (**(code **)(*piVar5 + 0x14))(piVar5,piVar4[3]);
    fn_83032FD0(piVar5,param_1[0x75]);
    uVar3 = fn_82FA5060(lbl_831BC768,0x38);
    if (((uVar3 & 0xffffffff) != 0) &&
       (puVar6 = (undefined4 *)fn_8300FA30(uVar3,param_1[0x1c]), puVar6 != (undefined4 *)0x0)) {
      iVar7 = fn_83033070(piVar5,param_1[0x16],*(byte *)(param_1 + 0x18) >> 7,puVar6);
      if ((iVar7 == 1) &&
         (iVar7 = fn_83033110(piVar5,param_1[0x17],*(byte *)(param_1 + 0x18) >> 6 & 1,puVar6),
         iVar7 == 1)) {
        fn_830337B0(piVar5,param_1 + 0x5f);
        if (((*(byte *)((int)param_1 + 0xd9) & 4) == 0) && ((param_2 & 0xff) == 0)) {
          if (param_1[0x78] >> 0x1c == 3) {
            uVar8 = (uint)((float)param_1[0x76] * lbl_8201FBB8);
            goto LAB_83039138;
          }
          if (param_1[0x78] >> 0x1c == 4) {
            fn_83033018(piVar5,param_1[0x19]);
          }
        }
        else {
          fn_83032FF0(piVar5,*(byte *)(param_1 + 0x79) >> 7);
          uVar8 = (uint)((float)param_1[0x76] * lbl_8201FBB8);
          if (((param_1[0x78] & 0xf0000000U) != 0x30000000) || (uVar8 < 0x2800)) {
            uVar8 = 0x2800;
          }
LAB_83039138:
          fn_8302BD60(piVar5,uVar8,0,0);
        }
        puVar6[2] = piVar5;
        *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(param_1 + 0x12);
        *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(param_1 + 0x14);
        fn_8300FCF0(lbl_832642E4,puVar6);
        if ((((float)param_1[0x76] != lbl_821AAD20) && (param_1[0x4c] != 0)) && (param_1[0x17] == 0)
           ) {
          fn_83010868(lbl_832642E4,puVar6);
        }
      }
      else {
        uVar2 = lbl_831BC768;
        (**(code **)*puVar6)(puVar6,0);
        fn_82FA5190(uVar2,puVar6);
      }
    }
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if ((*(byte *)((int)param_1 + 0xd9) & 0x20) != 0) {
    *(byte *)((int)param_1 + 0xd9) = *(byte *)((int)param_1 + 0xd9) | 0x10;
  }
  (**(code **)(*piVar4 + 8))(piVar4);
LAB_8303921c:
  iVar7 = param_1[0x62];
  param_1[0x62] = 0;
  if (iVar7 != 0) {
    fn_83032D88();
  }
  bVar1 = *(byte *)((int)param_1 + 0xd9);
  if (((bVar1 & 0x20) != 0) && ((bVar1 & 0x10) != 0)) {
    *(byte *)((int)param_1 + 0xd9) = bVar1 & 0xdf;
  }
  fn_82FEFCC8(param_1);
  fn_82FF16A8(param_1,param_2);
  return;
}

