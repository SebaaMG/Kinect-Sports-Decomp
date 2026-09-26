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
extern int fn_82F68B7C();
extern unsigned int lbl_832767D4;
extern unsigned int lbl_832767E8;


void fn_82525F18(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  
  puVar1 = (uint *)fn_82F68B7C(param_2);
  if (puVar1 != (uint *)0x0) {
    uVar2 = (ulonglong)*puVar1;
    if ((uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) && (lbl_832767D4 == 0)) {
      uVar2 = fn_8265C9E0(0x200);
      if ((uVar2 & 0xffffffff) == 0) {
        lbl_832767D4 = 0;
      }
      else {
        lbl_832767D4 = fn_82549960(uVar2,puVar1,0,0,0,0);
      }
    }
  }
  if ((param_3 & 0xffffffff) != 0) {
    uVar2 = (ulonglong)*(uint *)param_3;
    if ((uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) && (lbl_832767E8 == 0)) {
      uVar2 = fn_8265C9E0(0x200);
      if ((uVar2 & 0xffffffff) == 0) {
        lbl_832767E8 = 0;
      }
      else {
        lbl_832767E8 = fn_82549960(uVar2,param_3,0,0,0,0);
      }
    }
  }
  return;
}

