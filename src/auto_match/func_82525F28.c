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
extern int fn_82549960();
extern int fn_8265C9E0();
extern unsigned int lbl_832767D4;
extern unsigned int lbl_832767E8;


void fn_82525F28(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = (ulonglong)*param_1;
    if ((uVar1 != (uVar1 - 1) + (ulonglong)(uVar1 == 0)) && (lbl_832767D4 == 0)) {
      uVar1 = fn_8265C9E0(0x200);
      if ((uVar1 & 0xffffffff) == 0) {
        lbl_832767D4 = 0;
      }
      else {
        lbl_832767D4 = fn_82549960(uVar1,param_1,0,0,0,0);
      }
    }
  }
  if (param_2 != (uint *)0x0) {
    uVar1 = (ulonglong)*param_2;
    if ((uVar1 != (uVar1 - 1) + (ulonglong)(uVar1 == 0)) && (lbl_832767E8 == 0)) {
      uVar1 = fn_8265C9E0(0x200);
      if ((uVar1 & 0xffffffff) == 0) {
        lbl_832767E8 = 0;
      }
      else {
        lbl_832767E8 = fn_82549960(uVar1,param_2,0,0,0,0);
      }
    }
  }
  return;
}

