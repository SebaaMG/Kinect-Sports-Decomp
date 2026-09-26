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
extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEAC28();
extern int fn_82CEAD00();
extern int fn_82CEAE80();
extern int fn_82CEAF10();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEB1A8();
extern int fn_82CEB1B0();
extern int fn_82CFD5A8();
extern int fn_82DB9F80();
extern int fn_82E19DD8();
extern int fn_82E19FD8();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int uStack_60;


void fn_82E1A150(ulonglong param_1,byte *param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar5;
  int iVar6;
  undefined8 uVar3;
  int iVar7;
  ulonglong uVar4;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 auStack_70 [2];
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  
  iVar5 = fn_82CE5410();
  fn_82CEA160(param_3,*(undefined4 *)(iVar5 + 0x10),param_1,0);
  if ((int)param_4 != 0) {
    iVar5 = fn_82CEAE80(param_1);
    lVar12 = 0;
    if (0 < iVar5) {
      do {
        iVar6 = fn_82CEAF10(param_1,lVar12);
        if (*(int *)(iVar6 + 4) != 0) {
          uVar3 = fn_82CFD5A8();
          iVar7 = fn_82CEA220(param_3,uVar3);
          if (*(int *)(param_3 + 8) < iVar7) {
            uVar3 = fn_82CFD5A8(iVar6);
            fn_82E1A150(uVar3,param_2,param_3,param_4);
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < iVar5);
    }
  }
  iStack_68 = 0;
  iStack_64 = 0;
  uStack_60 = 0x80000000;
  for (; (param_1 & 0xffffffff) != 0; param_1 = fn_82CEAC28(param_1)) {
    auStack_70[0] = (undefined4)param_1;
    iVar5 = fn_82CE5410();
    fn_82DB9F80(&iStack_68,*(undefined4 *)(iVar5 + 0xc),0,0,auStack_70,1);
  }
  uVar14 = 0;
  bVar1 = *param_2;
  uVar10 = (ulonglong)bVar1;
  uVar11 = 1;
  iVar5 = 0;
  if (0 < iStack_64) {
    iVar6 = 0;
    do {
      iVar8 = 0;
      uVar2 = *(undefined4 *)(iVar6 + iStack_68);
      iVar7 = fn_82CEAD00(uVar2);
      if (0 < iVar7) {
        do {
          trapWord(6,uVar10,0);
          lVar12 = uVar14 - (longlong)((int)uVar14 / (int)(uint)bVar1) * (longlong)(int)(uint)bVar1;
          trapWord(5,uVar10 & ~(((uVar14 & 0x7fffffff) << 1 | (uVar14 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          if (lVar12 != 0) {
            uVar14 = (uVar10 - lVar12) + uVar14;
          }
          uVar14 = uVar10 + uVar14;
          if ((int)uVar11 < (int)(uint)bVar1) {
            uVar11 = uVar10;
          }
          iVar8 = iVar8 + 1;
          iVar7 = fn_82CEAD00(uVar2);
        } while (iVar8 < iVar7);
      }
      lVar12 = 0;
      iVar7 = fn_82CEAF18(uVar2);
      if (0 < iVar7) {
        do {
          iVar7 = fn_82CEAF20(uVar2,lVar12);
          if ((((int)uVar14 == 0) && (iVar6 != 0)) && (param_2[3] == 0)) {
            uVar14 = 1;
          }
          uVar4 = fn_82E19FD8(iVar7,*(undefined1 *)(iVar7 + 0xc),*param_2);
          iVar8 = (int)uVar4;
          if ((int)uVar11 < iVar8) {
            uVar11 = uVar4;
          }
          trapWord(6,uVar4,0);
          lVar9 = uVar14 - (longlong)((int)uVar14 / iVar8) * (longlong)iVar8;
          trapWord(5,uVar4 & ~(((uVar14 & 0x7fffffff) << 1 | (uVar14 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          if (lVar9 != 0) {
            uVar14 = (uVar4 - lVar9) + uVar14;
          }
          if ((uint)*(ushort *)(iVar7 + 0x12) != (uint)uVar14) {
            *(short *)(iVar7 + 0x12) = (short)uVar14;
          }
          lVar9 = fn_82E19DD8(iVar7,param_2,*(undefined1 *)(iVar7 + 0xc));
          uVar14 = lVar9 + uVar14;
          lVar12 = lVar12 + 1;
          iVar7 = fn_82CEAF18(uVar2);
        } while ((int)lVar12 < iVar7);
      }
      trapWord(6,uVar11,0);
      lVar12 = uVar14 - (longlong)((int)uVar14 / (int)uVar11) * (longlong)(int)uVar11;
      trapWord(5,uVar11 & ~(((uVar14 & 0x7fffffff) << 1 | (uVar14 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      uVar4 = uVar14;
      if (lVar12 != 0) {
        uVar4 = (uVar11 - lVar12) + uVar14;
      }
      uVar13 = uVar4;
      if ((int)uVar4 == 0) {
        uVar13 = 1;
      }
      iVar7 = fn_82CEB1A8(uVar2);
      if (iVar7 != (int)uVar13) {
        fn_82CEB1B0(uVar2,uVar13);
      }
      if (param_2[2] == 0) {
        uVar14 = uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < iStack_64);
  }
  iVar5 = fn_82CE5410();
  iStack_64 = 0;
  if ((uStack_60 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0xc) + 0x10))
              (*(int **)(iVar5 + 0xc),iStack_68,uStack_60 & 0x3fffffff,4);
  }
  return;
}

