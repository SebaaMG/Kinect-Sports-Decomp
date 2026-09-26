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
extern int fn_82FA5060();
extern int fn_82FAA318();
extern unsigned int lbl_831BC768;


int fn_82FAD1F0(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82FAA318(uVar1,param_2,param_3);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
      if (*(int *)(param_1 + 8) == 0) {
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        *(int *)(*(int *)(param_1 + 8) + 4) = iVar2;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(int *)(param_1 + 0x14) = iVar2;
    }
  }
  return iVar2;
}

