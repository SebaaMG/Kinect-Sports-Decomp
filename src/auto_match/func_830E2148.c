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
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830E2148(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs48 [16];
  undefined1 in_vs49 [16];
  undefined1 in_vs50 [16];
  undefined1 in_vs51 [16];
  undefined1 in_vs52 [16];
  undefined1 in_vs53 [16];
  undefined1 in_vs54 [16];
  undefined1 in_vs55 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];{ V16 _vt0 = vectorAddSignedHalfWordSaturate(in_vs33,in_vs48); memcpy(auVar9, &_vt0, 16); }
  lVar8 = (param_4 & 0x7fffffff) * 2;{ V16 _vt1 = vectorPackSignedHalfWordUnsignedSaturate(auVar9,auVar9); memcpy(auVar9, &_vt1, 16); }
  lVar4 = param_1 + 4;{ V16 _vt2 = vectorAddSignedHalfWordSaturate(in_vs37,in_vs52); memcpy(auVar12, &_vt2, 16); }{ V16 _vt3 = vectorAddSignedHalfWordSaturate(in_vs34,in_vs49); memcpy(auVar10, &_vt3, 16); }{ V16 _vt4 = vectorAddSignedHalfWordSaturate(in_vs35,in_vs50); memcpy(auVar11, &_vt4, 16); }{ V16 _vt5 = vectorPackSignedHalfWordUnsignedSaturate(auVar12,auVar12); memcpy(auVar13, &_vt5, 16); }{ V16 _vt6 = vectorAddSignedHalfWordSaturate(in_vs36,in_vs51); memcpy(auVar12, &_vt6, 16); }{ V16 _vt7 = vectorPackSignedHalfWordUnsignedSaturate(auVar10,auVar10); memcpy(auVar10, &_vt7, 16); }{ V16 _vt8 = vectorPackSignedHalfWordUnsignedSaturate(auVar11,auVar11); memcpy(auVar11, &_vt8, 16); }{ V16 _vt9 = vectorAddSignedHalfWordSaturate(in_vs38,in_vs53); memcpy(auVar14, &_vt9, 16); }{ V16 _vt10 = vectorPackSignedHalfWordUnsignedSaturate(auVar12,auVar12); memcpy(auVar12, &_vt10, 16); }{ V16 _vt11 = vectorAddSignedHalfWordSaturate(in_vs39,in_vs54); memcpy(auVar15, &_vt11, 16); }
  uVar2 = (uint)param_1;
  uVar1 = storeVectorElementWordIndexed(auVar9,0,param_1);
  *(undefined4 *)(uVar2 & 0xfffffffc) = uVar1;
  lVar5 = param_4 + lVar8;
  uVar3 = (uint)lVar4;
  uVar1 = storeVectorElementWordIndexed(auVar9,0,lVar4);
  *(undefined4 *)(uVar3 & 0xfffffffc) = uVar1;
  lVar6 = (param_4 & 0x3fffffff) * 4;{ V16 _vt12 = vectorAddSignedHalfWordSaturate(in_vs40,in_vs55); memcpy(auVar16, &_vt12, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar10,param_1,param_4);
  *(undefined4 *)(uVar2 + (int)param_4 & 0xfffffffc) = uVar1;{ V16 _vt13 = vectorPackSignedHalfWordUnsignedSaturate(auVar14,auVar14); memcpy(auVar9, &_vt13, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar10,lVar4,param_4);
  *(undefined4 *)(uVar3 + (int)param_4 & 0xfffffffc) = uVar1;
  lVar7 = param_4 + lVar6;
  uVar1 = storeVectorElementWordIndexed(auVar11,param_1,lVar8);
  *(undefined4 *)(uVar2 + (int)lVar8 & 0xfffffffc) = uVar1;{ V16 _vt14 = vectorPackSignedHalfWordUnsignedSaturate(auVar15,auVar15); memcpy(auVar10, &_vt14, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar11,lVar4,lVar8);
  *(undefined4 *)(uVar3 + (int)lVar8 & 0xfffffffc) = uVar1;
  lVar8 = lVar8 + lVar6;
  uVar1 = storeVectorElementWordIndexed(auVar12,param_1,lVar5);
  *(undefined4 *)(uVar2 + (int)lVar5 & 0xfffffffc) = uVar1;{ V16 _vt15 = vectorPackSignedHalfWordUnsignedSaturate(auVar16,auVar16); memcpy(auVar11, &_vt15, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar12,lVar4,lVar5);
  *(undefined4 *)(uVar3 + (int)lVar5 & 0xfffffffc) = uVar1;
  lVar5 = lVar5 + lVar6;
  uVar1 = storeVectorElementWordIndexed(auVar13,param_1,lVar6);
  *(undefined4 *)(uVar2 + (int)lVar6 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar13,lVar4,lVar6);
  *(undefined4 *)(uVar3 + (int)lVar6 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar9,param_1,lVar7);
  *(undefined4 *)(uVar2 + (int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar9,lVar4,lVar7);
  *(undefined4 *)(uVar3 + (int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar10,param_1,lVar8);
  *(undefined4 *)(uVar2 + (int)lVar8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar10,lVar4,lVar8);
  *(undefined4 *)(uVar3 + (int)lVar8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,param_1,lVar5);
  *(undefined4 *)(uVar2 + (int)lVar5 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,lVar4,lVar5);
  *(undefined4 *)(uVar3 + (int)lVar5 & 0xfffffffc) = uVar1;
  return;
}

