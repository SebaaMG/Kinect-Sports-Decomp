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
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82D1D378(double param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs55 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs61 [16];
  undefined4 uStack_10;
  
  uVar2 = ZEXT48(&stack0x00000000);
  vectorSubtractFloatingPoint(in_vs43,in_vs45);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar4, &_vt0, 16); }
  vectorSubtractFloatingPoint(in_vs43,in_vs32);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs44,in_vs45); memcpy(auVar3, &_vt1, 16); }
  vectorSubtractFloatingPoint(in_vs59,in_vs61);
  vectorSubtractFloatingPoint(in_vs57,in_vs58);
  uVar1 = storeVectorElementWordIndexed(in_vs55,0,uVar2 - 0x10);
  *(undefined4 *)(uVar2 - 0x10) = uVar1;
  if (param_1 <= (double)uStack_10) {
    vectorSubtractFloatingPoint(in_vs44,in_vs32);
    vectorSubtractFloatingPoint(in_vs37,auVar4);
    uVar1 = storeVectorElementWordIndexed(in_vs35,0,uVar2 - 0x10);
    *(undefined4 *)(uVar2 - 0x10) = uVar1;
    if (param_1 <= (double)uStack_10) {
      vectorSubtractFloatingPoint(in_vs39,auVar3);
      uVar1 = storeVectorElementWordIndexed(in_vs37,0,uVar2 - 0x10);
      *(undefined4 *)(uVar2 - 0x10) = uVar1;
      if ((double)uStack_10 < param_1) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

