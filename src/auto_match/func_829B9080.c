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
extern unsigned int *auStack_60;
extern int fn_829AAFE0();
extern int fn_82F6C420();


void fn_829B9080(int param_1,byte *param_2)

{
  byte bVar1;
  undefined1 auStack_60 [80];
  
  bVar1 = *param_2;
  if ((((((0x28 < bVar1) && (bVar1 < 0x7b)) && ((bVar1 < 0x5b || (0x60 < bVar1)))) &&
       ((bVar1 = param_2[1], 0x28 < bVar1 && (bVar1 < 0x7b)))) && ((bVar1 < 0x5b || (0x60 < bVar1)))
      ) && ((((bVar1 = param_2[2], 0x28 < bVar1 && (bVar1 < 0x7b)) &&
             ((bVar1 < 0x5b || (0x60 < bVar1)))) &&
            ((bVar1 = param_2[3], 0x28 < bVar1 && (bVar1 < 0x7b)))))) {
    if (bVar1 < 0x5b) {
      return;
    }
    if (0x60 < bVar1) {
      return;
    }
  }
  fn_829AAFE0(param_1,auStack_60,0xffffffff82054b9c);
  if (*(code **)(param_1 + 0x540) != (code *)0x0) {
    (**(code **)(param_1 + 0x540))(param_1,auStack_60);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F6C420(param_1,1);
}

