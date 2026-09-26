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
extern unsigned int *auStack_100;
extern unsigned int *auStack_c0;
extern int fn_82B63790();


void fn_82B63DA8(uint param_1,uint param_2,int param_3,int param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 auStack_100 [16];
  undefined4 auStack_c0 [48];
  
  lVar9 = (longlong)((int)param_1 >> 2) + (ulonglong)((int)param_1 < 0 && (param_1 & 3) != 0);
  iVar8 = 0;
  lVar12 = (longlong)((int)param_2 >> 2) + (ulonglong)((int)param_2 < 0 && (param_2 & 3) != 0);
  if (0 < lVar12) {
    iVar2 = (int)lVar12;
    iVar11 = 0;
    do {
      lVar12 = 4;
      if (iVar2 + -1 <= iVar8) {
        lVar12 = 4 - param_8;
      }
      uVar13 = 0;
      iVar10 = (int)lVar9;
      if (0 < iVar10) {
        do {
          lVar5 = 0;
          iVar4 = iVar11;
          do {
            lVar7 = 0;
            lVar14 = 4;
            do {
              iVar3 = (int)((lVar5 + lVar7 & 0xffffffffU) << 2);
              puVar6 = (undefined4 *)
                       ((int)((((ulonglong)uVar13 & 0x3fffffff) * 4 + lVar7 & 0xffffffff) << 3) +
                        iVar4 + param_3);
              lVar7 = lVar7 + 1;
              uVar1 = puVar6[1];
              *(undefined4 *)((int)auStack_100 + iVar3) = *puVar6;
              *(undefined4 *)((int)auStack_c0 + iVar3) = uVar1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            lVar5 = lVar5 + 4;
            iVar4 = iVar4 + param_4;
          } while ((int)lVar5 < 0x10);
          lVar5 = 4;
          if (iVar10 + -1 <= (int)uVar13) {
            lVar5 = 4 - param_7;
          }
          fn_82B63790(param_5,auStack_c0,auStack_100,lVar5,lVar12);
          uVar13 = uVar13 + 1;
          param_5 = param_5 + 8;
        } while ((int)uVar13 < iVar10);
      }
      iVar8 = iVar8 + 1;
      param_5 = (param_6 - lVar9 & 0x1fffffffU) * 8 + param_5;
      iVar11 = param_4 * 4 + iVar11;
    } while (iVar8 < iVar2);
  }
  return;
}

