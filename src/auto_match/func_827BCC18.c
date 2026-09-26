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
extern int fn_827BC6B8();
extern int fn_827BC960();


undefined8 fn_827BCC18(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar6;
  undefined4 *puVar5;
  byte *pbVar8;
  ulonglong uVar7;
  int *piVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  
  iVar2 = param_1[0x65];
  puVar3 = (undefined4 *)param_1[6];
  uVar13 = 0;
  uVar4 = *(uint *)(iVar2 + 0xa0);
  uVar16 = (ulonglong)uVar4;
  pbVar12 = (byte *)*puVar3;
  uVar10 = (ulonglong)(uint)puVar3[1];
  if (uVar16 == 0) {
    if (uVar10 == 0) {
      cVar6 = (*(code *)puVar3[3])();
      if (cVar6 == '\0') {
        return 0;
      }
      pbVar12 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    bVar1 = *pbVar12;
    uVar10 = uVar10 - 1;
    pbVar8 = pbVar12 + 1;
    if (uVar10 == 0) {
      cVar6 = (*(code *)puVar3[3])(param_1);
      if (cVar6 == '\0') {
        return 0;
      }
      pbVar8 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    pbVar12 = pbVar8 + 1;
    uVar10 = uVar10 - 1;
    uVar13 = ((ulonglong)*pbVar8 + (ulonglong)bVar1 * 0x100) - 2;
    if ((longlong)uVar13 < 0) {
      uVar14 = 0;
      uVar15 = 0;
      uVar7 = 0;
    }
    else {
      if (param_1[0x5f] == 0xfe) {
        uVar4 = *(uint *)(iVar2 + 0x5c);
      }
      else {
        uVar4 = *(uint *)((param_1[0x5f] + -200) * 4 + iVar2);
      }
      uVar14 = (ulonglong)uVar4;
      if ((uVar13 & 0xffffffff) < (ulonglong)uVar4) {
        uVar14 = uVar13;
      }
      uVar16 = (**(code **)(param_1[1] + 4))(param_1,1,uVar14 + 0x14);
      uVar7 = uVar16 + 0x14;
      puVar5 = (undefined4 *)uVar16;
      *puVar5 = 0;
      *(char *)(puVar5 + 1) = (char)param_1[0x5f];
      uVar15 = 0;
      puVar5[2] = (int)uVar13;
      puVar5[3] = (int)uVar14;
      puVar5[4] = (int)uVar7;
      *(undefined4 **)(iVar2 + 0xa0) = puVar5;
      *(undefined4 *)(iVar2 + 0xa4) = 0;
    }
  }
  else {
    uVar15 = (ulonglong)*(uint *)(iVar2 + 0xa4);
    uVar14 = (ulonglong)*(uint *)(uVar4 + 0xc);
    uVar7 = *(uint *)(uVar4 + 0x10) + uVar15;
  }
  do {
    uVar11 = (undefined4)uVar10;
    if ((uVar14 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
LAB_827bcdd0:
      if ((uVar16 & 0xffffffff) != 0) {
        piVar9 = (int *)param_1[0x43];
        iVar17 = (int)uVar16;
        if (piVar9 == (int *)0x0) {
          param_1[0x43] = iVar17;
        }
        else {
          for (; *piVar9 != 0; piVar9 = (int *)*piVar9) {
          }
          *piVar9 = iVar17;
        }
        uVar7 = (ulonglong)*(uint *)(iVar17 + 0x10);
        uVar13 = *(uint *)(iVar17 + 8) - uVar14;
      }
      *(undefined4 *)(iVar2 + 0xa0) = 0;
      if (param_1[0x5f] == 0xe0) {
        fn_827BC6B8(param_1,uVar7,uVar14,uVar13);
      }
      else if (param_1[0x5f] == 0xee) {
        fn_827BC960(param_1,uVar7,uVar14,uVar13);
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x5b;
        *(int *)(*param_1 + 0x18) = param_1[0x5f];
        *(int *)(*param_1 + 0x1c) = (int)uVar14 + (int)uVar13;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      *puVar3 = pbVar12;
      puVar3[1] = uVar11;
      if (0 < (int)uVar13) {
        (**(code **)(param_1[6] + 0x10))(param_1,uVar13);
      }
      return 1;
    }
    *puVar3 = pbVar12;
    puVar3[1] = uVar11;
    *(int *)(iVar2 + 0xa4) = (int)uVar15;
    if ((uVar10 & 0xffffffff) == 0) {
      cVar6 = (*(code *)puVar3[3])(param_1);
      if (cVar6 == '\0') {
        return 0;
      }
      pbVar12 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    uVar11 = (undefined4)uVar10;
    if ((uVar14 & 0xffffffff) <= (uVar15 & 0xffffffff)) goto LAB_827bcdd0;
    do {
      if ((uVar10 & 0xffffffff) == 0) break;
      bVar1 = *pbVar12;
      uVar15 = uVar15 + 1;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 - 1;
      *(byte *)uVar7 = bVar1;
      uVar7 = uVar7 + 1;
    } while ((uVar15 & 0xffffffff) < (uVar14 & 0xffffffff));
  } while( true );
}

