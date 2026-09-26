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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_460;
extern int fn_82A86D58();
extern int fn_82A89508();
extern unsigned int stack0x00000000;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82A89C20(uint *param_1,int *param_2,uint *param_3,longlong param_4,ulonglong param_5,
             longlong param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar6;
  uint uVar5;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_460 [1120];
  
  uVar4 = ZEXT48(&stack0x00000000);
  lVar7 = uVar4 - 0x484;
  lVar14 = 5;
  lVar9 = uVar4 - 0x4b4;
  do {
    lVar9 = lVar9 + 4;
    lVar7 = lVar7 + 4;
    *(undefined4 *)lVar7 = *(undefined4 *)lVar9;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar10 = (ulonglong)*param_1;
  if (uVar10 == 0) {
    uVar10 = uVar4 - 0x480;
  }
  uVar5 = *param_3;
  lVar9 = (ulonglong)param_3[0x17] + (ulonglong)param_3[0xe] + (ulonglong)param_3[0xd] +
          (ulonglong)param_3[0xc] + (ulonglong)param_3[0xb] + (ulonglong)param_3[0x14] +
          (ulonglong)param_3[0x11] + 0xa0;
  iVar12 = (int)lVar9;
  uVar1 = (int)(uVar5 * iVar12 + 0x1b9) >> 3;
  if ((int)param_5 < 1) {
    cVar6 = (**(code **)(*param_2 + 4))(param_2);
    if ((cVar6 != '\0') &&
       (cVar6 = (**(code **)(*param_2 + 0xc))(param_2,(longlong)(int)uVar1), cVar6 != '\0')) {
      return 1;
    }
  }
  else {
    if ((int)uVar5 < (int)param_5) {
      param_5 = (ulonglong)uVar5;
    }
    cVar6 = (**(code **)(*param_2 + 4))(param_2);
    if ((cVar6 != '\0') && (cVar6 = (**(code **)(*param_2 + 0xc))(param_2,0x36), cVar6 != '\0')) {
      uVar13 = 2;
      iVar2 = iVar12 * (int)param_5 + 9 >> 3;
      lVar7 = (longlong)iVar2;
      if (0x1ff < iVar2) {
        lVar7 = 0x200;
      }
      cVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 - 0x460,lVar7,uVar4 - 0x4c0);
      if (cVar6 != '\0') {
        while (fn_82A86D58(uVar4 - 0x260,uVar4 - 0x460,lVar7), (int)param_5 != 0) {
          do {
            if (0x1000 - iVar12 < (int)uVar13) break;
            fn_82A89508(uVar10,param_3 + 1,uVar4 - 0x260,uVar13,param_4);
            param_5 = param_5 - 1;
            param_4 = param_4 + param_6;
            uVar13 = uVar13 + lVar9;
          } while (param_5 != 0);
          if ((int)param_5 == 0) break;
          iVar2 = (int)uVar13 >> 3;
          lVar8 = (longlong)iVar2;
          lVar14 = -lVar8;
          lVar7 = lVar14 + 0x200;
          lVar11 = lVar8 + (uVar4 - 0x460);
          if (-1 < lVar14 + 0x1ff) {
            lVar14 = lVar14 + 0x200;
            iVar3 = (int)lVar11;
            do {
              ((undefined1 *)lVar11)[(int)(auStack_460 + -iVar3)] = *(undefined1 *)lVar11;
              lVar11 = lVar11 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          uVar13 = uVar13 & 7;
          iVar3 = (int)param_5 * iVar12 + (int)uVar13 + 7 >> 3;
          lVar14 = (longlong)iVar3;
          if (iVar3 <= (int)lVar7) {
            lVar14 = lVar7;
          }
          lVar11 = lVar14 - lVar7;
          if (iVar2 <= (int)(lVar14 - lVar7)) {
            lVar11 = lVar8;
          }
          cVar6 = (**(code **)(*param_2 + 0x10))
                            (param_2,lVar7 + (uVar4 - 0x460),lVar11,uVar4 - 0x4c0);
          if (cVar6 == '\0') {
            return 0;
          }
          lVar7 = lVar7 + lVar11;
        }
        uVar5 = (**(code **)(*param_2 + 8))(param_2);
        if (uVar5 < uVar1) {
          iVar12 = *param_2;
          lVar9 = (**(code **)(iVar12 + 8))(param_2);
          (**(code **)(iVar12 + 0xc))(param_2,(int)uVar1 - lVar9);
        }
        return 1;
      }
    }
  }
  return 0;
}

