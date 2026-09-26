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
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorCompareEqualToFloatingPoint();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalSquareRootEstimateFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D2AD88(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs52 [16];
  undefined1 in_vs53 [16];
  undefined1 in_vs54 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs60 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  uVar2 = ZEXT48(&stack0x00000000);
  vectorSplatImmediateSignedWord128(0);
  iVar4 = param_3;
  iVar3 = param_2;
LAB_82d2ade4:
  do {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs34,in_vs45); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs33,in_vs45); memcpy(auVar6, &_vt1, 16); }
    vectorSubtractFloatingPoint(in_vs36,in_vs38);
    while( true ) {{ V16 _vt2 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar6); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorCompareEqualToFloatingPoint(in_vs37,auVar6); memcpy(auVar5, &_vt3, 16); }{ V16 _vt4 = vectorSubtractFloatingPoint(auVar7,in_vs39); memcpy(auVar11, &_vt4, 16); }{ V16 _vt5 = vectorSubtractFloatingPoint(in_vs36,in_vs39); memcpy(auVar10, &_vt5, 16); }{ V16 _vt6 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,in_vs42,in_vs32); memcpy(in_vs39, &_vt6, 16); }{ V16 _vt7 = vectorMultiplyAddFloatingPoint(auVar9,in_vs39,auVar9); memcpy(auVar8, &_vt7, 16); }
      vectorSubtractFloatingPoint(in_vs56,in_vs57);{ V16 _vt8 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,auVar9,in_vs32); memcpy(auVar7, &_vt8, 16); }{ V16 _vt9 = vectorReciprocalSquareRootEstimateFloatingPoint(in_vs54); memcpy(auVar9, &_vt9, 16); }{ V16 _vt10 = vectorMultiplyAddFloatingPoint(auVar8,auVar7,auVar8); memcpy(auVar7, &_vt10, 16); }
      vectorConditionalSelect(auVar7,in_vs37,auVar5);{ V16 _vt11 = vectorNegativeMultiplySubtractFloatingPoint(in_vs39,in_vs41,in_vs32); memcpy(auVar7, &_vt11, 16); }{ V16 _vt12 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar9); memcpy(auVar5, &_vt12, 16); }{ V16 _vt13 = vectorNegativeMultiplySubtractFloatingPoint(in_vs39,auVar7,in_vs32); memcpy(in_vs42, &_vt13, 16); }{ V16 _vt14 = vectorMultiplyAddFloatingPoint(auVar5,in_vs42,auVar5); memcpy(auVar5, &_vt14, 16); }{ V16 _vt15 = vectorConditionalSelect(auVar5,in_vs38,in_vs36); memcpy(auVar7, &_vt15, 16); }
      uVar1 = storeVectorElementWordIndexed(in_vs52,0,uVar2 - 0x80);
      *(undefined4 *)(uVar2 - 0x80) = uVar1;
      uVar1 = storeVectorElementWordIndexed(in_vs53,0,uVar2 - 0x7c);
      *(undefined4 *)(uVar2 - 0x7c) = uVar1;
      if (fStack_80 <= fStack_7c) break;
      param_2 = param_2 + 1;
    }{ V16 _vt16 = vectorSubtractFloatingPoint(in_vs34,auVar5); memcpy(auVar6, &_vt16, 16); }
    vectorSubtractFloatingPoint(in_vs33,auVar5);
    vectorSubtractFloatingPoint(in_vs36,in_vs37);
    while( true ) {{ V16 _vt17 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar6); memcpy(auVar7, &_vt17, 16); }{ V16 _vt18 = vectorNegativeMultiplySubtractFloatingPoint(in_vs40,in_vs41,in_vs32); memcpy(in_vs36, &_vt18, 16); }{ V16 _vt19 = vectorMultiplyAddFloatingPoint(auVar7,in_vs36,auVar7); memcpy(auVar5, &_vt19, 16); }{ V16 _vt20 = vectorNegativeMultiplySubtractFloatingPoint(in_vs40,in_vs41,in_vs32); memcpy(auVar7, &_vt20, 16); }{ V16 _vt21 = vectorMultiplyAddFloatingPoint(auVar5,auVar7,auVar5); memcpy(auVar7, &_vt21, 16); }{ V16 _vt22 = vectorConditionalSelect(auVar7,in_vs42,in_vs37); memcpy(in_vs41, &_vt22, 16); }
      uVar1 = storeVectorElementWordIndexed(auVar7,0,uVar2 - 0x74);
      *(undefined4 *)(uVar2 - 0x74) = uVar1;
      vectorSubtractFloatingPoint(in_vs42,in_vs41);
      vectorSubtractFloatingPoint(in_vs40,in_vs41);
      vectorSubtractFloatingPoint(auVar10,auVar11);{ V16 _vt23 = vectorReciprocalSquareRootEstimateFloatingPoint(in_vs60); memcpy(auVar7, &_vt23, 16); }{ V16 _vt24 = vectorCompareEqualToFloatingPoint(in_vs38,in_vs60); memcpy(in_vs39, &_vt24, 16); }{ V16 _vt25 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,in_vs42,in_vs32); memcpy(in_vs37, &_vt25, 16); }{ V16 _vt26 = vectorMultiplyAddFloatingPoint(auVar7,in_vs37,auVar7); memcpy(auVar7, &_vt26, 16); }{ V16 _vt27 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,in_vs42,in_vs32); memcpy(in_vs40, &_vt27, 16); }{ V16 _vt28 = vectorMultiplyAddFloatingPoint(auVar7,in_vs40,auVar7); memcpy(in_vs45, &_vt28, 16); }{ V16 _vt29 = vectorConditionalSelect(in_vs45,in_vs38,in_vs39); memcpy(in_vs42, &_vt29, 16); }
      uVar1 = storeVectorElementWordIndexed(in_vs59,0,uVar2 - 0x78);
      *(undefined4 *)(uVar2 - 0x78) = uVar1;
      if (fStack_74 <= fStack_78) break;
      iVar4 = iVar4 + -1;
    }
    if (param_2 <= iVar4) {
      if (iVar4 != param_2) {
        uVar1 = *(undefined4 *)(iVar4 * 4 + param_1);
        *(undefined4 *)(iVar4 * 4 + param_1) = *(undefined4 *)(param_2 * 4 + param_1);
        *(undefined4 *)(param_2 * 4 + param_1) = uVar1;
      }
      iVar4 = iVar4 + -1;
      param_2 = param_2 + 1;
      if (param_2 <= iVar4) goto LAB_82d2ade4;
    }
    if (iVar3 < iVar4) {
      fn_82D2AD88(param_1,iVar3,iVar4,param_4);
    }
    iVar4 = param_3;
    iVar3 = param_2;
    if (param_3 <= param_2) {
      return;
    }
  } while( true );
}

