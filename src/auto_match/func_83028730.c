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
extern int fn_82FA5190();
extern int fn_83008310();
extern int fn_830280E8();
extern unsigned int lbl_8217C60C;
extern unsigned int lbl_831BC768;


void fn_83028730(undefined4 *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  *param_1 = &lbl_8217C60C;
  fn_830280E8();
  if (param_1[0x19] != 0) {
    param_1[0x1a] = param_1[0x19];
    fn_82FA5190(lbl_831BC768);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  piVar2 = param_1 + 8;
  lVar1 = 5;
  do {
    if (*piVar2 != 0) {
      fn_82FA5190(lbl_831BC768);
      *piVar2 = 0;
    }
    piVar2[1] = 0;
    lVar1 = lVar1 + -1;
    piVar2[2] = 0;
    piVar2 = piVar2 + 3;
  } while (lVar1 != 0);
  fn_83008310(param_1);
  return;
}

