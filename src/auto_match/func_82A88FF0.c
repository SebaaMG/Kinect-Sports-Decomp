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
extern int fn_82A88978();
extern unsigned int stack0x00000000;


undefined8
fn_82A88FF0(uint *param_1,int *param_2,uint *param_3,longlong param_4,ulonglong param_5,
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
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_460 [1120];
  
  uVar4 = ZEXT48(&stack0x00000000);
  uVar9 = (ulonglong)*param_1;
  if (uVar9 == 0) {
    uVar9 = uVar4 - 0x480;
  }
  uVar5 = *param_3;
  lVar11 = (ulonglong)param_3[0x17] + (ulonglong)param_3[0xe] + (ulonglong)param_3[0xd] +
           (ulonglong)param_3[0xc] + (ulonglong)param_3[0xb] + (ulonglong)param_3[0x14] +
           (ulonglong)param_3[0x11] + 0x60;
  iVar12 = (int)lVar11;
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
      uVar14 = 2;
      iVar2 = iVar12 * (int)param_5 + 9 >> 3;
      lVar13 = (longlong)iVar2;
      if (0x1ff < iVar2) {
        lVar13 = 0x200;
      }
      cVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 - 0x460,lVar13,uVar4 - 0x4a0);
      if (cVar6 != '\0') {
        while (fn_82A86D58(uVar4 - 0x260,uVar4 - 0x460,lVar13), (int)param_5 != 0) {
          do {
            if (0x1000 - iVar12 < (int)uVar14) break;
            fn_82A88978(uVar9,param_3 + 1,uVar4 - 0x260,uVar14,param_4);
            param_5 = param_5 - 1;
            param_4 = param_4 + param_6;
            uVar14 = uVar14 + lVar11;
          } while (param_5 != 0);
          if ((int)param_5 == 0) break;
          iVar2 = (int)uVar14 >> 3;
          lVar7 = (longlong)iVar2;
          lVar8 = -lVar7;
          lVar13 = lVar8 + 0x200;
          lVar10 = lVar7 + (uVar4 - 0x460);
          if (-1 < lVar8 + 0x1ff) {
            lVar8 = lVar8 + 0x200;
            iVar3 = (int)lVar10;
            do {
              ((undefined1 *)lVar10)[(int)(auStack_460 + -iVar3)] = *(undefined1 *)lVar10;
              lVar10 = lVar10 + 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          uVar14 = uVar14 & 7;
          iVar3 = (int)param_5 * iVar12 + (int)uVar14 + 7 >> 3;
          lVar8 = (longlong)iVar3;
          if (iVar3 <= (int)lVar13) {
            lVar8 = lVar13;
          }
          lVar10 = lVar8 - lVar13;
          if (iVar2 <= (int)(lVar8 - lVar13)) {
            lVar10 = lVar7;
          }
          cVar6 = (**(code **)(*param_2 + 0x10))
                            (param_2,lVar13 + (uVar4 - 0x460),lVar10,uVar4 - 0x4a0);
          if (cVar6 == '\0') {
            return 0;
          }
          lVar13 = lVar13 + lVar10;
        }
        uVar5 = (**(code **)(*param_2 + 8))(param_2);
        if (uVar5 < uVar1) {
          iVar12 = *param_2;
          lVar11 = (**(code **)(iVar12 + 8))(param_2);
          (**(code **)(iVar12 + 0xc))(param_2,(int)uVar1 - lVar11);
        }
        return 1;
      }
    }
  }
  return 0;
}

