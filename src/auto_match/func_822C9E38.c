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
extern int fn_82311AB8();
extern int fn_82F68B70();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_822C9E38(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined **appuStack_20 [8];
  
  uVar1 = param_1[1] - *param_1 >> 3;
  if (0x1ffffffe < uVar1) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar3 = (longlong)(int)uVar1 + 1;
  uVar1 = param_1[2] - *param_1 >> 3;
  if ((uVar3 & 0xffffffff) <= (ulonglong)uVar1) {
    return;
  }
  uVar2 = 0;
  if ((ulonglong)uVar1 <= (0x1fffffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
    uVar2 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
  }
  if ((uVar2 & 0xffffffff) < (uVar3 & 0xffffffff)) {
    uVar2 = uVar3;
  }
  fn_82F68B70(param_1,uVar2);
  return;
}

