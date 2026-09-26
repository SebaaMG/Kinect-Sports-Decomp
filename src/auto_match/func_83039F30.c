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
extern unsigned int lbl_831BC8E8;


undefined8 fn_83039F30(int param_1,int param_2,int param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (*(short *)(param_2 + 0xe) == 0) {
    uVar1 = 0x11;
  }
  else {
    do {
      uVar1 = (*(code *)(&lbl_831BC8E8)
                        [*(int *)(param_1 + 0x40) * 0xc + (uint)*(byte *)(param_1 + 0x4c)])
                        (param_2,param_3,param_4,param_1);
      if ((*(int *)(param_1 + 0x40) == 2) && (0x3ff < *(uint *)(param_1 + 0x2c))) {
        *(undefined4 *)(param_1 + 0x40) = 1;
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
      }
    } while ((*(short *)(param_2 + 0xe) != 0) &&
            ((ulonglong)*(ushort *)(param_3 + 0xe) < (param_4 & 0xffffffff)));
  }
  return uVar1;
}

