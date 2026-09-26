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
extern unsigned int lbl_831B8D18;


void fn_82F147C8(ulonglong param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (ulonglong)((int)param_1 >> 0x1f);
  uVar2 = (param_1 ^ uVar2) - uVar2;
  if (uVar2 == 0) {
    *param_3 = 0;
    *param_2 = 0;
  }
  else {
    iVar3 = (int)uVar2;
    if (iVar3 < 3) {
      iVar3 = 1;
      uVar1 = (int)((uVar2 & 0xffffffff) << 1) - 2;
    }
    else {
      if (iVar3 < 7) {
        uVar2 = uVar2 - 3;
        iVar3 = 2;
      }
      else if (iVar3 < 0xf) {
        uVar2 = uVar2 - 7;
        iVar3 = 3;
      }
      else if (iVar3 < 0x1f) {
        uVar2 = uVar2 - 0xf;
        iVar3 = 4;
      }
      else {
        uVar2 = uVar2 - 0x1f;
        iVar3 = 5;
      }
      uVar1 = (uint)((uVar2 & 0xffffffff) << 1);
    }
    *param_3 = uVar1 | (int)param_1 >> 0x10 & 1U;
    *param_2 = iVar3;
  }
  *param_4 = *(undefined4 *)(&lbl_831B8D18 + *param_2 * 4);
  return;
}

