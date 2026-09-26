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
extern unsigned int fStack_10;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_821389B8;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D6F438(undefined1 *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 in_vs32 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  char in_stack_0000005f;
  float fStack_10;
  
  uVar4 = ZEXT48(&stack0x00000000);
  vectorSubtractFloatingPoint(in_vs43,in_vs32);
  vectorSubtractFloatingPoint(in_vs41,in_vs32);
  vectorSubtractFloatingPoint(in_vs37,in_vs38);
  uVar1 = storeVectorElementWordIndexed(in_vs36,0,uVar4 - 0x10);
  *(undefined4 *)(uVar4 - 0x10) = uVar1;
  if (((in_stack_0000005f == '\0') && (fStack_10 <= lbl_821389B8)) || (lbl_82002D08 <= fStack_10)) {
    vectorSubtractFloatingPoint(in_vs42,in_vs32);
    fVar2 = lbl_82002AE0 / fStack_10;
    uVar1 = storeVectorElementWordIndexed(in_vs41,0,uVar4 - 0x10);
    *(undefined4 *)(uVar4 - 0x10) = uVar1;
    fVar3 = lbl_821AAD20;
    *param_3 = fStack_10;
    if (fVar3 <= fStack_10) {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs37,in_vs38); memcpy(auVar5, &_vt0, 16); }
      uVar1 = storeVectorElementWordIndexed(in_vs36,0,uVar4 - 0x10);
      *(undefined4 *)(uVar4 - 0x10) = uVar1;
      *param_4 = fStack_10;
      if ((fVar3 <= fStack_10) && (fStack_10 + *param_3 <= fStack_10)) {
        uVar1 = storeVectorElementWordIndexed(auVar5,0,uVar4 - 0x10);
        *(undefined4 *)(uVar4 - 0x10) = uVar1;
        *param_1 = 1;
        *param_2 = fStack_10 * fVar2;
        *param_3 = fVar2 * *param_3;
        *param_4 = *param_4 * fVar2;
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}

