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
extern int fn_82FE41A0();
extern float lbl_82006848;


undefined8 fn_82FE04F8(int param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 0xd0) != '\0') &&
     (uVar2 = (longlong)
              ((float)*(uint *)(param_1 + 200) * *(float *)(param_1 + 0x140) * lbl_82006848) &
              0xffffffff, uVar2 != 0)) {
    if (((param_3 & 0x10) != 0) &&
       (uVar1 = fn_82FE41A0(param_1 + 0xa4,param_2,uVar2), (int)uVar1 != 1)) {
      return uVar1;
    }
    if (((param_3 & 0x20) != 0) &&
       (uVar1 = fn_82FE41A0(param_1 + 0xb0,param_2,uVar2), (int)uVar1 != 1)) {
      return uVar1;
    }
  }
  return 1;
}

