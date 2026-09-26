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
extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;


undefined8 fn_82FBC550(int param_1,ushort param_2,float *param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_3 == (float *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = 1;
    if (param_2 < 7) {
      if (param_2 == 1) {
        *(float *)(param_1 + 8) = *param_3;
      }
      else if (param_2 == 2) {
        *(float *)(param_1 + 0xc) = *param_3;
      }
      else if (param_2 == 3) {
        *(float *)(param_1 + 0x10) = *param_3;
      }
      else if (param_2 == 4) {
        dVar2 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
        *(float *)(param_1 + 0x14) = (float)dVar2;
      }
      else if (param_2 == 5) {
        *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)param_3;
      }
      else if (param_2 == 0) {
        *(float *)(param_1 + 4) = *param_3;
      }
      else {
        *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)param_3;
      }
    }
    else {
      uVar1 = 0x1f;
    }
  }
  return uVar1;
}

