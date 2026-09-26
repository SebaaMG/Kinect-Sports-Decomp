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
extern int fn_82CE4F10();
extern unsigned int lbl_82002AE0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_c;
extern U64 storeVectorElementWordIndexed();


undefined8 fn_82CE4FD0(undefined8 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  double extraout_f1;
  undefined1 in_vs45 [16];
  undefined4 uStack_c;
  
  pcVar2 = (char *)fn_82CE4F10(ZEXT48(&stack0x00000000) - 0x10);
  if (*pcVar2 != '\0') {
    lVar3 = ZEXT48(&stack0x00000000) - 0xc;
    uVar1 = storeVectorElementWordIndexed(in_vs45,0,lVar3);
    *(undefined4 *)lVar3 = uVar1;
    uVar4 = 1;
    if (ABS((double)(uStack_c - lbl_82002AE0)) < extraout_f1) goto LAB_82ce5028;
  }
  uVar4 = 0;
LAB_82ce5028:
  *(undefined1 *)param_1 = uVar4;
  return param_1;
}

