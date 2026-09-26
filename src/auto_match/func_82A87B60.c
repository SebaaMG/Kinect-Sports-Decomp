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
extern int fn_82A87738();
extern unsigned int stack0x00000000;


undefined8
fn_82A87B60(uint *param_1,int *param_2,uint *param_3,longlong param_4,ulonglong param_5,
             longlong param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar6;
  uint uVar5;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_460 [1120];
  
  uVar4 = ZEXT48(&stack0x00000000);
  uVar9 = (ulonglong)*param_1;
  if (uVar9 == 0) {
    uVar9 = uVar4 - 0x470;
  }
  uVar5 = *param_3;
  uVar1 = param_3[1];
  uVar2 = (int)(uVar5 * uVar1 + 0x67) >> 3;
  if ((int)param_5 < 1) {
    cVar6 = (**(code **)(*param_2 + 4))(param_2);
    if ((cVar6 != '\0') &&
       (cVar6 = (**(code **)(*param_2 + 0xc))(param_2,(longlong)(int)uVar2), cVar6 != '\0')) {
      return 1;
    }
  }
  else {
    if ((int)uVar5 < (int)param_5) {
      param_5 = (ulonglong)uVar5;
    }
    cVar6 = (**(code **)(*param_2 + 4))(param_2);
    if ((cVar6 != '\0') && (cVar6 = (**(code **)(*param_2 + 0xc))(param_2,0xc), cVar6 != '\0')) {
      uVar13 = 0;
      iVar11 = (int)(uVar1 * (int)param_5 + 7) >> 3;
      if (0x1ff < iVar11) {
        iVar11 = 0x200;
      }
      cVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 - 0x460,iVar11,uVar4 - 0x46c);
      if (cVar6 != '\0') {
        fn_82A86D58(uVar4 - 0x260,uVar4 - 0x460,iVar11);
        while ((int)param_5 != 0) {
          do {
            if ((int)(0x1000 - uVar1) < (int)uVar13) break;
            fn_82A87738(uVar9,param_3 + 1,uVar4 - 0x260,uVar13,param_4);
            param_5 = param_5 - 1;
            param_4 = param_4 + param_6;
            uVar13 = uVar13 + uVar1;
          } while (param_5 != 0);
          if ((int)param_5 == 0) break;
          iVar11 = (int)uVar13 >> 3;
          lVar7 = (longlong)iVar11;
          lVar8 = -lVar7;
          lVar12 = lVar8 + 0x200;
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
          uVar13 = uVar13 & 7;
          iVar3 = (int)((int)param_5 * uVar1 + (int)uVar13 + 7) >> 3;
          lVar8 = (longlong)iVar3;
          if (iVar3 <= (int)lVar12) {
            lVar8 = lVar12;
          }
          lVar10 = lVar8 - lVar12;
          if (iVar11 <= (int)(lVar8 - lVar12)) {
            lVar10 = lVar7;
          }
          cVar6 = (**(code **)(*param_2 + 0x10))
                            (param_2,lVar12 + (uVar4 - 0x460),lVar10,uVar4 - 0x46c);
          if (cVar6 == '\0') {
            return 0;
          }
          fn_82A86D58(uVar4 - 0x260,uVar4 - 0x460,lVar12 + lVar10);
        }
        uVar5 = (**(code **)(*param_2 + 8))(param_2);
        if (uVar5 < uVar2) {
          iVar11 = *param_2;
          lVar8 = (**(code **)(iVar11 + 8))(param_2);
          (**(code **)(iVar11 + 0xc))(param_2,(int)uVar2 - lVar8);
        }
        return 1;
      }
    }
  }
  return 0;
}

