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
extern unsigned int *auStack_a0;
extern int fn_827F6960();
extern int fn_827F6990();
extern int fn_827F7210();
extern int fn_827FAF20();
extern int fn_828114A8();
extern int fn_82811500();
extern int fn_828116B8();
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_827FB050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iStack_b0;
  int iStack_ac;
  int aiStack_a8 [2];
  uint auStack_a0 [4];
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  
  uVar2 = fn_827F7210();
  iVar4 = (int)((uVar2 & 0xffff) + 7) >> 3;
  lVar12 = (longlong)iVar4;
  fn_827F6960(param_1,&iStack_ac);
  fn_827F6960(param_2,aiStack_a8);
  fn_827F6960(param_3,&iStack_b0);
  iVar3 = 0;
  if (iVar4 != 0) {
    do {
      *(byte *)(iVar3 + iStack_b0) = *(byte *)(iVar3 + aiStack_a8[0]) | *(byte *)(iVar3 + iStack_ac)
      ;
      iVar3 = iVar3 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  lVar9 = 0;
  lVar12 = 0;
  lVar8 = 0;
  fn_827F6990(param_1,&iStack_ac);
  fn_827F6990(param_2,aiStack_a8);
  fn_827F6990(param_3,&iStack_b0);
  uVar2 = 0;
  do {
    auStack_a0[0] = uVar2;
    fn_827FAF20(param_1,param_2,param_3,auStack_a0);
    uVar11 = 0;
    uVar7 = (ulonglong)uStack_88;
    uVar6 = (ulonglong)uStack_8c;
    uVar5 = (ulonglong)uStack_90;
    if (uVar7 != 0) {
      lVar10 = lVar8 - lVar9;
      lVar13 = lVar9;
      do {
        fn_82811500(iStack_b0,lVar13);
        lVar1 = lVar10;
        if ((uVar11 & 0xffffffff) < uVar5) {
          if ((uVar11 & 0xffffffff) < uVar6) {
            iVar3 = fn_828116B8(iStack_ac,lVar10 + lVar13 + (lVar12 - lVar8));
            iVar4 = aiStack_a8[0];
            if (iVar3 == 0) goto LAB_827fb198;
          }
          else {
            lVar1 = lVar10 + (lVar12 - lVar8);
            iVar4 = iStack_ac;
LAB_827fb198:
            iVar4 = fn_828116B8(iVar4,lVar1 + lVar13);
            if (iVar4 == 0) goto LAB_827fb1b0;
          }
          fn_828114A8(iStack_b0,lVar13);
        }
        else {
          iVar4 = aiStack_a8[0];
          if ((uVar11 & 0xffffffff) < uVar6) goto LAB_827fb198;
        }
LAB_827fb1b0:
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 1;
      } while ((uVar11 & 0xffffffff) < uVar7);
    }
    uVar2 = uVar2 + 1;
    lVar9 = uVar7 + lVar9;
    lVar12 = uVar5 + lVar12;
    lVar8 = uVar6 + lVar8;
    if (1 < uVar2) {
      return;
    }
  } while( true );
}

