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


undefined8 fn_82EDE770(int param_1,int param_2)

{
  short sVar1;
  
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(short *)(param_1 + 0xe) == 0x10) {
LAB_82ede79c:
      *(undefined4 *)(param_2 + 0x70) = 7;
      *(undefined4 *)(param_2 + 0x78) = 2;
      *(undefined4 *)(param_2 + 0x6c) = 0x7c00;
      *(undefined4 *)(param_2 + 0x74) = 0x3e0;
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    sVar1 = *(short *)(param_1 + 0xe);
    if (sVar1 == 0x10) {
      if (((*(int *)(param_1 + 0x28) == 0x7c00) && (*(int *)(param_1 + 0x2c) == 0x3e0)) &&
         (*(int *)(param_1 + 0x30) == 0x1f)) goto LAB_82ede79c;
      if (((*(int *)(param_1 + 0x28) == 0xf800) && (*(int *)(param_1 + 0x2c) == 0x7e0)) &&
         (*(int *)(param_1 + 0x30) == 0x1f)) {
        *(undefined4 *)(param_2 + 0x70) = 8;
        *(undefined4 *)(param_2 + 0x78) = 3;
        *(undefined4 *)(param_2 + 0x6c) = 0xf800;
        *(undefined4 *)(param_2 + 0x74) = 0x7e0;
        return 0;
      }
    }
    else if ((((sVar1 == 0x18) || (sVar1 == 0x20)) && (*(int *)(param_1 + 0x28) == 0xff0000)) &&
            ((*(int *)(param_1 + 0x2c) == 0xff00 && (*(int *)(param_1 + 0x30) == 0xff)))) {
      return 0;
    }
    return 3;
  }
  return 0;
}

