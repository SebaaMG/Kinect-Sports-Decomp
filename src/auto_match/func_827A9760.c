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
extern int fn_827A9620();


void fn_827A9760(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if ((uVar4 >> 0x1e & 1) != 0) {
    iVar1 = (int)param_1 + 0x1e;
    if ((int)uVar4 < 0) {
      uVar2 = (uint)*(byte *)(param_1 + 7);
    }
    else {
      iVar1 = (int)param_1 + 0x2a;
      uVar2 = param_1[1];
    }
    iVar3 = (int)param_1 + 0x1e;
    if ((int)uVar4 < 0) {
      uVar4 = (uint)*(byte *)(param_1 + 7);
    }
    else {
      iVar3 = (int)param_1 + 0x2a;
      uVar4 = param_1[1];
    }
    fn_827A9620(iVar1,uVar2,uVar4 * 8 + iVar3 + 3 & 0xfffffffc);
    if ((int)*param_1 < 0) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    else {
      param_1[1] = 0;
    }
  }
  return;
}

