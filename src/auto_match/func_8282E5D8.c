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
extern int fn_8282AA10();
extern int fn_8282B1C8();
extern int fn_8282B788();
extern int fn_8282D970();
extern int fn_8282DA48();
extern int fn_8282DB10();
extern int fn_8282DD60();
extern int fn_8282E438();
extern int fn_82832B28();
extern int fn_82833780();


void fn_8282E5D8(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 1000) = 0;
  fn_8282D970();
  *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8);
  iVar1 = (uint)*(byte *)(param_1 + 0x51) * 0x21;
  *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x2d8);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54);
  fn_8282E438(param_1);
  fn_8282DA48(param_1);
  fn_8282DB10(param_1);
  if (*(char *)(param_1 + 0x3ef) != '\0') {
    fn_8282B788(param_1);
    fn_82832B28(param_1);
  }
  fn_8282B1C8(param_1);
  fn_8282AA10(param_1);
  if (*(char *)(param_1 + 0x3f0) != '\0') {
    fn_82833780(param_1);
  }
  fn_8282DD60(param_1);
  return;
}

