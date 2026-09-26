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
extern int fn_8248F890();
extern int fn_82F622A8();
extern int fn_82F68CC0();


uint * fn_824925D0(uint *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  bVar2 = false;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (int)(param_2[1] - *param_2) / 0x1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar1 != 0) {
    if (0x9249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar3 = fn_8248F890((longlong)(int)uVar1 * 0x1c);
    bVar2 = true;
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = (int)((longlong)(int)uVar1 * 0x1c) + uVar3;
  }
  if (bVar2) {
    uVar4 = (ulonglong)*param_2;
    uVar1 = param_2[1];
    uVar5 = (ulonglong)*param_1;
    if (uVar4 != uVar1) {
      do {
        if ((uVar5 & 0xffffffff) != 0) {
          fn_82F68CC0(uVar5,uVar4,0x1c);
        }
        uVar4 = uVar4 + 0x1c;
        uVar5 = uVar5 + 0x1c;
      } while ((uVar4 & 0xffffffff) != (ulonglong)uVar1);
    }
    param_1[1] = (uint)uVar5;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)((int)param_2 + 0x11);
  *(undefined1 *)((int)param_1 + 0x12) = *(undefined1 *)((int)param_2 + 0x12);
  return param_1;
}

