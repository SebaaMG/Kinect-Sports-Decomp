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
extern int fn_82F64CE0();


longlong fn_82A35E88(ushort *param_1,longlong param_2,byte *param_3,int param_4)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if ((int)param_2 == -1) {
    param_2 = fn_82F64CE0();
    param_2 = param_2 + 1;
  }
  if (0 < (int)param_2) {
    do {
      uVar1 = *param_1;
      if (uVar1 < 0x80) {
        lVar4 = lVar4 + 1;
        if (((int)lVar4 <= param_4) && (param_3 != (byte *)0x0)) {
          *param_3 = (byte)uVar1;
LAB_82a35f80:
          param_3 = param_3 + 1;
        }
      }
      else {
        lVar3 = lVar4 + 1;
        if (uVar1 < 0x800) {
          if (((int)lVar3 <= param_4) && (param_3 != (byte *)0x0)) {
            bVar2 = (byte)(uVar1 >> 6) & 0x1f | 0xc0;
LAB_82a35f58:
            *param_3 = bVar2;
            param_3 = param_3 + 1;
          }
        }
        else {
          if (((int)lVar3 <= param_4) && (param_3 != (byte *)0x0)) {
            *param_3 = (byte)(uVar1 >> 0xc) | 0xe0;
            param_3 = param_3 + 1;
          }
          lVar3 = lVar4 + 2;
          if (((int)lVar3 <= param_4) && (param_3 != (byte *)0x0)) {
            bVar2 = (byte)(*param_1 >> 6) & 0x3f | 0x80;
            goto LAB_82a35f58;
          }
        }
        lVar4 = lVar3 + 1;
        if (((int)lVar4 <= param_4) && (param_3 != (byte *)0x0)) {
          *param_3 = (byte)*param_1 & 0x3f | 0x80;
          goto LAB_82a35f80;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if ((param_4 != 0) && (param_4 < (int)lVar4)) {
    thunk_FUN_82a2b748(0x7a);
    lVar4 = 0;
  }
  return lVar4;
}

