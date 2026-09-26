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
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMergeHighWord();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


double fn_830B1C10(void)

{
  undefined4 uVar1;
  undefined1 in_vs32 [16];
  undefined1 auVar2 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar4 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs59 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uStack_10;{ V16 _vt0 = vectorMaximumFloatingPoint(in_vs39,in_vs32); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorReciprocalEstimateFloatingPoint(auVar4); memcpy(auVar2, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs36,in_vs45); memcpy(auVar6, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs35,in_vs33); memcpy(auVar5, &_vt3, 16); }{ V16 _vt4 = vectorNegativeMultiplySubtractFloatingPoint(auVar2,auVar4,in_vs43); memcpy(auVar3, &_vt4, 16); }
  vectorMergeHighWord(auVar5,auVar6);{ V16 _vt5 = vectorMultiplyAddFloatingPoint(auVar3,auVar2,auVar2); memcpy(auVar2, &_vt5, 16); }
  vectorMultiplyAddFloatingPoint(auVar2,auVar4,in_vs45);
  uVar1 = storeVectorElementWordIndexed(in_vs59,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  return (double)uStack_10;
}

