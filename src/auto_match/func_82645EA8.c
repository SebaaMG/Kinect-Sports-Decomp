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
extern int fn_82645110();


void fn_82645EA8(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x3254) = param_2;
    *(undefined4 *)(param_1 + 0x325c) = 1;
    *(byte *)(param_1 + 0x2abc) = *(byte *)(param_1 + 0x2abc) & 0xfe;
    goto LAB_82645fc8;
  }
  bVar1 = *(byte *)(param_1 + 0x2abc);
  *(undefined4 *)(param_1 + 0x325c) = 0;
  if ((((bVar1 & 8) == 0) && ((bVar1 & 4) == 0)) && (*(char *)(param_1 + 0x304b) == '\0')) {
    if ((bVar1 & 0x10) == 0) {
      if (((((bVar1 & 0x20) == 0) ||
           ((*(int *)(param_1 + 0x3268) != *(int *)(param_1 + 0x3148) &&
            (*(int *)(param_1 + 0x3148) != 0)))) ||
          ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
           (*(int *)(param_1 + 0x314c) != 0)))) ||
         ((((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
            (*(int *)(param_1 + 0x3150) != 0)) ||
           ((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
            (*(int *)(param_1 + 0x3154) != 0)))) ||
          ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
           (*(int *)(param_1 + 0x3158) != 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    bVar4 = 1;
    if (!bVar2) goto LAB_82645f98;
  }
  else {
LAB_82645f98:
    bVar4 = 0;
  }
  *(byte *)(param_1 + 0x2abc) = bVar4 | bVar1 & 0xfe;
  *(undefined4 *)(param_1 + 0x3254) = 0xffffffff;
LAB_82645fc8:
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x3258) = 0;
  *(int *)(param_1 + 0x2ab4) = param_2;
  *(undefined4 *)(param_1 + 0x2ab8) = 0;
  if (*(uint *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar3 + 4) = 0xc0006000;
  *(undefined4 *)(uVar3 + 8) = *(undefined4 *)(param_1 + 0x3254);
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar3 + 8);
  return;
}

