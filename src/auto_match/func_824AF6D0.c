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
extern int fn_82559FF0();
extern unsigned int lbl_82195890;
extern unsigned int lbl_82195894;
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_824AF6D0(int param_1)

{
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float afStack_20 [4];
  
  if (*(int *)(*(int *)(param_1 + 0x3c) + 0x14) != 0) {
    vectorSubtractFloatingPoint(in_vs32,in_vs45);
    fn_82559FF0(afStack_20);
    if (*(int *)(*(int *)(param_1 + 0x3c) + 0x38) == 0) {
      if (afStack_20[0] < lbl_82195894) {
        return 1;
      }
    }
    else if (lbl_82195890 < afStack_20[0]) {
      return 1;
    }
  }
  return 0;
}

