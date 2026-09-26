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
extern int fn_8277CB68();
extern int fn_82F691F0();
extern unsigned int lbl_821AAD20;


void fn_8277DDC0(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  if (((lbl_821AAD20 < *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xe0)) &&
      (lbl_821AAD20 < *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe4))) &&
     (0x40 < *(uint *)(param_1 + 0x30))) {
    fn_8277CB68(param_1 + 0x18,0x42,0);
    *(undefined4 *)(param_1 + 0x1c) = 0x42;
    fn_8277CB68(param_1 + 0xc,0x42,0);
    *(undefined4 *)(param_1 + 0x10) = 0x42;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_1 + 0x18),0,*(int *)(param_1 + 0x1c) << 2);
  }
  return;
}

