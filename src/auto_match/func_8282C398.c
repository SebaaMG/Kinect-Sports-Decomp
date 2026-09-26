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
extern unsigned int *auStack_60;
extern int fn_8282F2A0();


undefined8 fn_8282C398(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar6;
  undefined8 uVar5;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint auStack_60 [24];
  
  if ((*(char *)(param_1 + 0x52) == '\0') ||
     (bVar3 = true, *(uint *)(param_1 + 0x58) <= *(uint *)(param_1 + 0x68))) {
    bVar3 = false;
  }
  if ((*(char *)(param_1 + 0x52) == '\0') ||
     (bVar4 = true, *(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x7c))) {
    bVar4 = false;
  }
  puVar12 = (uint *)(param_1 + 0x58);
  iVar6 = (*(code *)param_3[3])(*param_3,0,0);
  if ((iVar6 == 0) ||
     (iVar6 = (*(code *)param_3[1])(*param_3,*(undefined4 *)(param_1 + 0xcc)), iVar6 == 0)) {
    uVar10 = 0;
    do {
      bVar8 = true;
      lVar7 = 0;
      uVar11 = 0;
      uVar13 = 0;
      if (uVar10 == 0) {
        bVar1 = *param_2;
        uVar9 = (ulonglong)*(byte *)(param_1 + 0x51) * 0x21 + (ulonglong)*(uint *)(param_1 + 0x54);
        if ((bVar1 & 0x80) == 0) {
          if ((bVar1 & 0x40) == 0) {
            if ((bVar1 & 0x20) == 0) goto LAB_8282c558;
            uVar13 = (ulonglong)*(uint *)(param_1 + 0xb8);
            lVar7 = 0x80;
            if (bVar3) {
              uVar9 = (ulonglong)*(uint *)(param_1 + 0x68);
              uVar11 = uVar13;
              uVar13 = ((ulonglong)*puVar12 - (ulonglong)*(uint *)(param_1 + 0x68)) + uVar13 + 0x80;
            }
            else {
              uVar9 = (ulonglong)*puVar12;
            }
          }
          else {
            lVar7 = uVar9 + 0x80;
            uVar9 = *puVar12 - uVar9;
            uVar13 = (ulonglong)*(uint *)(param_1 + 0xbc);
          }
        }
        else {
          lVar7 = 0x80;
          uVar13 = (ulonglong)*(uint *)(param_1 + 0xb8);
        }
      }
      else {
        uVar9 = 0;
        if (uVar10 == 1) {
          if ((*param_2 & 0x10) == 0) {
LAB_8282c558:
            bVar8 = false;
            uVar9 = 0;
          }
          else {
            if (bVar3) {
              uVar2 = *(uint *)(param_1 + 0x68);
            }
            else {
              uVar2 = *puVar12;
            }
            uVar13 = (ulonglong)*(uint *)(param_1 + 0xc0);
            lVar7 = (ulonglong)uVar2 + 0x80;
            if (bVar4) {
              uVar11 = uVar13;
              uVar9 = (ulonglong)*(uint *)(param_1 + 0x7c);
              uVar13 = ((ulonglong)*(uint *)(param_1 + 0x6c) - (ulonglong)*(uint *)(param_1 + 0x7c))
                       + uVar13 + 0x80;
            }
            else {
              uVar9 = (ulonglong)*(uint *)(param_1 + 0x6c);
            }
          }
        }
      }
      if (bVar8) {
        iVar6 = (*(code *)param_3[3])(*param_3,lVar7,0);
        if ((iVar6 != 0) || (iVar6 = (*(code *)param_3[2])(*param_3,uVar9,uVar13), iVar6 != 0))
        goto LAB_8282c43c;
        if (((bVar3) || (bVar4)) && ((uVar9 & 0xffffffff) != 0)) {
          auStack_60[0] = puVar12[uVar10 * 5];
          fn_8282F2A0(uVar13,(puVar12 + uVar10 * 5)[4],uVar11,auStack_60);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    uVar5 = 0;
  }
  else {
LAB_8282c43c:
    uVar5 = 3;
  }
  return uVar5;
}

