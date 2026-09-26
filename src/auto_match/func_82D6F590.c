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
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned int uStack_8;
extern unsigned int uStack_c;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D6F590(double param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined1 in_vs32 [16];
  undefined1 auVar4 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs62 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar2 = ZEXT48(&stack0x00000000);
  vectorSubtractFloatingPoint(in_vs43,in_vs32);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs43,in_vs45); memcpy(auVar4, &_vt0, 16); }
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorSubtractFloatingPoint(in_vs60,in_vs62);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs58,in_vs59); memcpy(auVar5, &_vt1, 16); }
  uVar1 = storeVectorElementWordIndexed(in_vs56,0,uVar2 - 0x10);
  *(undefined4 *)(uVar2 - 0x10) = uVar1;
  if (param_1 <= (double)uStack_10) {
    uVar1 = storeVectorElementWordIndexed(auVar5,0,uVar2 - 0x10);
    *(undefined4 *)(uVar2 - 0x10) = uVar1;
    if (param_1 <= (double)uStack_10) {
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      uVar1 = storeVectorElementWordIndexed(in_vs45,0,uVar2 - 0x10);
      *(undefined4 *)(uVar2 - 0x10) = uVar1;
      uVar3 = 0;
      uVar1 = storeVectorElementWordIndexed(auVar5,0,uVar2 - 0xc);
      *(undefined4 *)(uVar2 - 0xc) = uVar1;
      uVar1 = storeVectorElementWordIndexed(auVar4,0,uVar2 - 8);
      *(undefined4 *)(uVar2 - 8) = uVar1;
      if (uStack_c * uStack_10 - uStack_8 * uStack_8 != lbl_821AAD20) goto LAB_82d6f66c;
    }
  }
  uVar3 = 1;
LAB_82d6f66c:
  *param_2 = uVar3;
  return;
}

