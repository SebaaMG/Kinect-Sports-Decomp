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
extern unsigned int fStack_20;
extern int fn_82CE4F10();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82006848;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


char * fn_82CE5710(char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 in_vs45 [16];
  float fStack_20;
  
  fn_82CE4F10();
  uVar1 = storeVectorElementWordIndexed(in_vs45,0,ZEXT48(&stack0x00000000) - 0x20);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = uVar1;
  if ((*param_1 == '\0') || (cVar2 = '\x01', lbl_82006848 <= ABS(fStack_20 - lbl_82002AE0))) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  return param_1;
}

