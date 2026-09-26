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
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D10EF8(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 in_r0;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  uVar6 = ZEXT48(&stack0x00000000);
  uVar8 = param_3;
  uVar7 = param_2;
LAB_82d10f28:
  do {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs43,in_vs32); memcpy(auVar10, &_vt0, 16); }
    while( true ) {{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs42,in_vs32); memcpy(auVar9, &_vt1, 16); }
      uVar11 = storeVectorElementWordIndexed(in_vs40,0,uVar6 - 0x40);
      *(undefined4 *)(uVar6 - 0x40) = uVar11;
      uVar11 = storeVectorElementWordIndexed(auVar10,0,uVar6 - 0x3c);
      *(undefined4 *)(uVar6 - 0x3c) = uVar11;
      if (fStack_3c <= fStack_40) break;
      param_2 = param_2 + 1;
    }
    while( true ) {
      uVar11 = storeVectorElementWordIndexed(auVar10,0,uVar6 - 0x38);
      *(undefined4 *)(uVar6 - 0x38) = uVar11;{ V16 _vt2 = vectorSubtractFloatingPoint(auVar10,in_vs32); memcpy(in_vs42, &_vt2, 16); }
      uVar11 = storeVectorElementWordIndexed(auVar9,0,uVar6 - 0x34);
      *(undefined4 *)(uVar6 - 0x34) = uVar11;
      if (fStack_34 <= fStack_38) break;
      uVar8 = uVar8 - 1;
    }
    if ((int)param_2 <= (int)uVar8) {
      if ((int)uVar8 != (int)param_2) {
        iVar3 = (int)((uVar8 & 0xffffffff) << 4) + (int)param_1;
        iVar4 = (int)((param_2 & 0xffffffff) << 4) + (int)param_1;
        iVar2 = (int)in_r0;
        puVar1 = (undefined4 *)(iVar2 + iVar3 & 0xfffffff0);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        puVar1 = (undefined4 *)(iVar2 + iVar4 & 0xfffffff0);
        uVar15 = puVar1[1];
        uVar16 = puVar1[2];
        uVar17 = puVar1[3];
        puVar5 = (undefined4 *)(iVar2 + iVar3 & 0xfffffff0);
        *puVar5 = *puVar1;
        puVar5[1] = uVar15;
        puVar5[2] = uVar16;
        puVar5[3] = uVar17;
        puVar1 = (undefined4 *)(iVar2 + iVar4 & 0xfffffff0);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        puVar1[2] = uVar13;
        puVar1[3] = uVar14;
      }
      uVar8 = uVar8 - 1;
      param_2 = param_2 + 1;
      if ((int)param_2 <= (int)uVar8) goto LAB_82d10f28;
    }
    if ((int)uVar7 < (int)uVar8) {
      fn_82D10EF8(param_1,uVar7,uVar8,param_4);
    }
    uVar8 = param_3;
    uVar7 = param_2;
    if ((int)param_3 <= (int)param_2) {
      return;
    }
  } while( true );
}

