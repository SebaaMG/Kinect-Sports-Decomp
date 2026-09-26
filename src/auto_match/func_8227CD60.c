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
extern unsigned int *auStack_130;
extern unsigned int *auStack_210;
extern unsigned int *auStack_2f0;
extern unsigned int *auStack_3d0;
extern unsigned int *auStack_4b0;
extern unsigned int *auStack_590;
extern unsigned int *auStack_670;
extern int fn_8227C270();
extern int fn_8227D288();
extern int fn_82F68CC0();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


undefined4 *
fn_8227CD60(undefined4 *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  uint uVar6;
  longlong lVar5;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uStack0000002c;
  undefined1 auStack_670 [224];
  undefined1 auStack_590 [224];
  undefined1 auStack_4b0 [224];
  undefined1 auStack_3d0 [224];
  undefined1 auStack_2f0 [224];
  undefined1 auStack_210 [224];
  undefined1 auStack_130 [304];
  
  uStack0000002c = (undefined4)param_4;
  lVar10 = param_3 - 0xdc;
  uVar6 = ((int)param_3 - (int)param_2) / 0xdc;
  iVar2 = ((int)lVar10 - (int)param_2) / 0xdc;
  uVar13 = ((longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0)) * 0xdc +
           param_2;
  uVar7 = param_2;
  if (0x28 < iVar2) {
    uVar6 = iVar2 + 1;
    lVar5 = (longlong)((int)uVar6 >> 3) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 7) != 0);
    uVar7 = lVar5 * 0xdc + param_2;
    fn_8227D288(param_2,uVar7,lVar5 * 0x1b8 + param_2);
    fn_8227D288(uVar13 + lVar5 * -0xdc,uVar13,lVar5 * 0xdc + uVar13,param_4);
    lVar8 = lVar10 + lVar5 * -0xdc;
    fn_8227D288(lVar10 + lVar5 * -0x1b8,lVar8,lVar10,param_4);
    lVar10 = lVar8;
  }
  fn_8227D288(uVar7,uVar13,lVar10,param_4);
  uVar7 = uVar13 + 0xdc;
  if ((param_2 & 0xffffffff) < (uVar13 & 0xffffffff)) {
    do {
      uVar12 = uVar13 - 0xdc;
      cVar3 = fn_8227C270(&stack0x0000002c,uVar12,uVar13);
      if ((cVar3 != '\0') || (cVar3 = fn_8227C270(&stack0x0000002c,uVar13,uVar12), cVar3 != '\0'))
      break;
      uVar13 = uVar12;
    } while ((param_2 & 0xffffffff) < (uVar12 & 0xffffffff));
  }
  while (((uVar12 = uVar7, uVar14 = uVar13, (uVar7 & 0xffffffff) < (param_3 & 0xffffffff) &&
          (cVar3 = fn_8227C270(&stack0x0000002c,uVar7,uVar13), cVar3 == '\0')) &&
         (cVar3 = fn_8227C270(&stack0x0000002c,uVar13,uVar7), cVar3 == '\0'))) {
    uVar7 = uVar7 + 0xdc;
  }
  do {
    for (; (uVar12 & 0xffffffff) < (param_3 & 0xffffffff); uVar12 = uVar12 + 0xdc) {
      cVar3 = fn_8227C270(&stack0x0000002c,uVar14,uVar12);
      if (cVar3 == '\0') {
        cVar3 = fn_8227C270(&stack0x0000002c,uVar12,uVar14);
        if (cVar3 != '\0') break;
        uVar9 = uVar7 + 0xdc;
        fn_82F68CC0(auStack_590,uVar7,0xdc);
        fn_82F68CC0(uVar7,uVar12,0xdc);
        puVar4 = auStack_590;
        uVar11 = uVar12;
LAB_8227cf18:
        fn_82F68CC0(uVar11,puVar4,0xdc);
        uVar7 = uVar9;
      }
    }
    bVar1 = (uVar13 & 0xffffffff) == (param_2 & 0xffffffff);
    uVar11 = uVar13;
    if ((param_2 & 0xffffffff) < (uVar13 & 0xffffffff)) {
      do {
        uVar11 = uVar11 - 0xdc;
        cVar3 = fn_8227C270(&stack0x0000002c,uVar11,uVar14);
        if (cVar3 == '\0') {
          cVar3 = fn_8227C270(&stack0x0000002c,uVar14,uVar11);
          if (cVar3 != '\0') break;
          uVar14 = uVar14 - 0xdc;
          fn_82F68CC0(auStack_210,uVar14,0xdc);
          fn_82F68CC0(uVar14,uVar11,0xdc);
          fn_82F68CC0(uVar11,auStack_210,0xdc);
        }
        uVar13 = uVar13 - 0xdc;
      } while ((param_2 & 0xffffffff) < (uVar13 & 0xffffffff));
      bVar1 = (uVar13 & 0xffffffff) == (param_2 & 0xffffffff);
    }
    if (bVar1) {
      if ((uVar12 & 0xffffffff) == (param_3 & 0xffffffff)) {
        *param_1 = (int)uVar14;
        param_1[1] = (int)uVar7;
        return param_1;
      }
      if ((uVar7 & 0xffffffff) != (uVar12 & 0xffffffff)) {
        fn_82F68CC0(auStack_3d0,uVar14,0xdc);
        fn_82F68CC0(uVar14,uVar7,0xdc);
        fn_82F68CC0(uVar7,auStack_3d0,0xdc);
      }
      uVar11 = uVar14 + 0xdc;
      fn_82F68CC0(auStack_670,uVar14,0xdc);
      fn_82F68CC0(uVar14,uVar12,0xdc);
      puVar4 = auStack_670;
      uVar14 = uVar12;
      uVar7 = uVar7 + 0xdc;
      uVar12 = uVar12 + 0xdc;
    }
    else {
      if ((uVar12 & 0xffffffff) != (param_3 & 0xffffffff)) {
        uVar13 = uVar13 - 0xdc;
        fn_82F68CC0(auStack_130,uVar12,0xdc);
        fn_82F68CC0(uVar12,uVar13,0xdc);
        puVar4 = auStack_130;
        uVar11 = uVar13;
        uVar9 = uVar7;
        goto LAB_8227cf18;
      }
      uVar13 = uVar13 - 0xdc;
      uVar11 = uVar14 - 0xdc;
      if ((uVar13 & 0xffffffff) != (uVar11 & 0xffffffff)) {
        fn_82F68CC0(auStack_4b0,uVar13,0xdc);
        fn_82F68CC0(uVar13,uVar11,0xdc);
        fn_82F68CC0(uVar11,auStack_4b0,0xdc);
      }
      uVar14 = uVar7 - 0xdc;
      fn_82F68CC0(auStack_2f0,uVar11,0xdc);
      fn_82F68CC0(uVar11,uVar14,0xdc);
      puVar4 = auStack_2f0;
      uVar7 = uVar14;
    }
    fn_82F68CC0(uVar14,puVar4,0xdc);
    uVar14 = uVar11;
  } while( true );
}

