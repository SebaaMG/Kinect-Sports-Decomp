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


undefined8 fn_828F9B38(ulonglong param_1,int param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 & 0xffffffff) == 0) {
    return 0xffffffff8876086c;
  }
  uVar1 = *(uint *)param_1;
  if ((uVar1 & 0xffffff00) != 0x102a1100) {
    uVar2 = uVar1 & 0xffff0000;
    if (((((uVar2 != 0x46580000) && (uVar2 != 0x54580000)) && (uVar2 != 0x7ffe0000)) &&
        ((uVar2 != 0x7fff0000 && (uVar2 != 0xfffe0000)))) && (uVar2 != 0xffff0000)) {
      return 0xffffffff88760b59;
    }
    while( true ) {
      do {
        uVar3 = param_1;
        param_1 = uVar3 + 4;
        uVar2 = *(uint *)param_1;
      } while ((uVar2 & 0x80000000) != 0);
      uVar4 = uVar2 & 0xffff;
      if (uVar4 == 0xffff) break;
      if (uVar4 == 0xfffe) {
        uVar5 = (ulonglong)(uVar2 >> 0x10) & 0x7fff;
        if ((1 < uVar5) && (param_2 == *(int *)((int)uVar3 + 8))) {
          if (param_3 != (int *)0x0) {
            *param_3 = (int)uVar3 + 0xc;
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = (int)((uVar5 - 1 & 0xffffffff) << 2);
          }
          return 0;
        }
        uVar5 = uVar5 << 2;
LAB_828f9c20:
        param_1 = uVar5 + param_1;
      }
      else {
        if (0x1ff < (uVar1 & 0xffff)) {
          uVar5 = (ulonglong)(uVar2 >> 0x16) & 0x3c;
          goto LAB_828f9c20;
        }
        if (uVar4 == 0x51) {
          param_1 = uVar3 + 0x18;
        }
      }
    }
  }
  return 1;
}

