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
extern U64 storeVectorElementWordIndexed();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830E2088(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];{ V16 _vt0 = vectorPackSignedHalfWordUnsignedSaturate(in_vs33,in_vs33); memcpy(auVar11, &_vt0, 16); }{ V16 _vt1 = vectorPackSignedHalfWordUnsignedSaturate(in_vs34,in_vs34); memcpy(auVar12, &_vt1, 16); }{ V16 _vt2 = vectorPackSignedHalfWordUnsignedSaturate(in_vs35,in_vs35); memcpy(auVar13, &_vt2, 16); }
  lVar5 = (param_3 & 0x7fffffff) * 2;{ V16 _vt3 = vectorPackSignedHalfWordUnsignedSaturate(in_vs36,in_vs36); memcpy(auVar14, &_vt3, 16); }
  lVar4 = param_1 + 4;
  uVar2 = (uint)param_1;
  uVar1 = storeVectorElementWordIndexed(auVar11,0,param_1);
  *(undefined4 *)(uVar2 & 0xfffffffc) = uVar1;
  lVar6 = param_3 + lVar5;{ V16 _vt4 = vectorPackSignedHalfWordUnsignedSaturate(in_vs37,in_vs37); memcpy(auVar15, &_vt4, 16); }
  lVar7 = (param_3 & 0x3fffffff) * 4;{ V16 _vt5 = vectorPackSignedHalfWordUnsignedSaturate(in_vs38,in_vs38); memcpy(auVar16, &_vt5, 16); }
  lVar8 = param_3 + lVar7;{ V16 _vt6 = vectorPackSignedHalfWordUnsignedSaturate(in_vs39,in_vs39); memcpy(auVar17, &_vt6, 16); }
  uVar3 = (uint)lVar4;
  uVar1 = storeVectorElementWordIndexed(auVar11,0,lVar4);
  *(undefined4 *)(uVar3 & 0xfffffffc) = uVar1;
  lVar9 = lVar5 + lVar7;
  uVar1 = storeVectorElementWordIndexed(auVar12,param_1,param_3);
  *(undefined4 *)(uVar2 + (int)param_3 & 0xfffffffc) = uVar1;{ V16 _vt7 = vectorPackSignedHalfWordUnsignedSaturate(in_vs40,in_vs40); memcpy(auVar11, &_vt7, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar12,lVar4,param_3);
  *(undefined4 *)(uVar3 + (int)param_3 & 0xfffffffc) = uVar1;
  lVar10 = lVar6 + lVar7;
  uVar1 = storeVectorElementWordIndexed(auVar13,param_1,lVar5);
  *(undefined4 *)(uVar2 + (int)lVar5 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar13,lVar4,lVar5);
  *(undefined4 *)(uVar3 + (int)lVar5 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar14,param_1,lVar6);
  *(undefined4 *)(uVar2 + (int)lVar6 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar14,lVar4,lVar6);
  *(undefined4 *)(uVar3 + (int)lVar6 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar15,param_1,lVar7);
  *(undefined4 *)(uVar2 + (int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar15,lVar4,lVar7);
  *(undefined4 *)(uVar3 + (int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar16,param_1,lVar8);
  *(undefined4 *)(uVar2 + (int)lVar8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar16,lVar4,lVar8);
  *(undefined4 *)(uVar3 + (int)lVar8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar17,param_1,lVar9);
  *(undefined4 *)(uVar2 + (int)lVar9 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar17,lVar4,lVar9);
  *(undefined4 *)(uVar3 + (int)lVar9 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,param_1,lVar10);
  *(undefined4 *)(uVar2 + (int)lVar10 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,lVar4,lVar10);
  *(undefined4 *)(uVar3 + (int)lVar10 & 0xfffffffc) = uVar1;
  return;
}

