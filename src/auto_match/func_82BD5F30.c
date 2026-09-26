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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1E650();
extern int fn_82A1E6A0();
extern int fn_82A263F0();
extern int fn_82A33490();
extern int fn_82BD4B68();
extern int fn_82BD54A0();
extern int fn_82BD5DF8();
extern int fn_82BD7230();
extern int fn_82BDA558();
extern int fn_82F68CC0();
extern int fn_831423FC();
extern unsigned int lbl_83223EE0;
extern unsigned int lbl_83223F40;
extern U64 storeWordConditionalIndexed();


longlong fn_82BD5F30(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  char in_RESERVE;
  
  puVar1 = (uint *)*param_1;
  if (puVar1[9] != 0) {
    uVar8 = 0;
    if (*puVar1 != 0) {
      do {
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar1);
    }
  }
  if (puVar1[10] != 0) {
    uVar8 = 0;
    if (*puVar1 != 0) {
      do {
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar1);
    }
  }
  lVar3 = fn_8265C940(0x4bc,0x618a800c);
  if (lVar3 == 0) {
    lVar11 = -0x7ff8fff2;
    goto LAB_82bd61e8;
  }
  bVar2 = false;
  do {
    uVar8 = lbl_83223F40;
    if (lbl_83223F40 != 0) {
      if (in_RESERVE != '\0') {
        lbl_83223F40 = storeWordConditionalIndexed((ulonglong)lbl_83223F40,0,0xffffffff83223f40);
      }
      break;
    }
    if (in_RESERVE != '\0') {
      lbl_83223F40 = storeWordConditionalIndexed(lVar3,0,0xffffffff83223f40);
      bVar2 = true;
    }
  } while (!bVar2);
  if (uVar8 == 0) {
    fn_82BD5DF8(0xffffffff83223ee0);
    puVar4 = (undefined4 *)lVar3;
    *puVar4 = &lbl_83223EE0;
    puVar4[1] = 1;
    fn_82F68CC0(lVar3 + 8,puVar1,0x34);
    lVar11 = fn_82BD4B68(lVar3,puVar1);
    if (-1 < lVar11) {
      uVar10 = 0;
      lVar9 = lVar3 + 0x50;
      do {
        lVar11 = fn_82BD7230(lVar3,puVar1[2],puVar1[3],uVar10,lVar9);
        if (lVar11 < 0) goto code_r0x82bd61dc;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 4;
      } while ((uVar10 & 0xffffffff) < 4);
      uVar8 = 0;
      if (*puVar1 != 0) {
        lVar9 = 0;
        do {
          uVar6 = 0;
          uVar7 = 0;
          if (puVar1[9] != 0) {
            uVar6 = *(undefined4 *)((int)lVar9 + puVar1[9]);
          }
          if (puVar1[10] != 0) {
            uVar7 = *(undefined4 *)((int)lVar9 + puVar1[10]);
          }
          lVar11 = fn_82BDA558(lVar3,puVar1[4],puVar1[5],uVar6,uVar7,lVar3 + 0x60 + lVar9);
          if (lVar11 < 0) goto code_r0x82bd61dc;
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 4;
        } while (uVar8 < *puVar1);
      }
      iVar5 = fn_82A1E6A0(0,0,0,0);
      puVar4[0x44] = iVar5;
      if (iVar5 != 0) {
        iVar5 = fn_831423FC(5,6);
        puVar4[0x46] = iVar5;
        if (iVar5 != 0) {
          puVar4[0x47] = 1;
          RtlInitializeCriticalSection(lVar3 + 0xf0);
          if (param_1[2] == 0) {
            iVar5 = fn_82A33490(0,0x10000,0xffffffff82bd5d48,lVar3,0,1,0);
            puVar4[0x3a] = iVar5;
            if (iVar5 == 0) goto code_r0x82bd6124;
            fn_82A1E650(puVar4[0x44],0xffffffffffffffff);
            if ((param_1[1] != 0) &&
               (iVar5 = fn_82A263F0(0,puVar4[0x3a],0,param_1[1],0,0,0), iVar5 == 0)) {
              lVar11 = -0x7fffbffb;
            }
          }
          if (-1 < (int)lVar11) goto LAB_82bd61e8;
          goto code_r0x82bd61dc;
        }
      }
code_r0x82bd6124:
      lVar11 = -0x7fffbffb;
    }
code_r0x82bd61dc:
    fn_82BD54A0(lVar3);
  }
  else {
    fn_8265C990(lVar3,0x618a800c);
    lVar11 = -0x7fffbffb;
  }
  lVar3 = 0;
LAB_82bd61e8:
  *param_2 = (int)lVar3;
  return lVar11;
}

