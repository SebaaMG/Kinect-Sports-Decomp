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
extern int fn_83029E20();
extern int fn_83029EE0();
extern int fn_8302A198();
extern unsigned int lbl_832642E4;


undefined8 fn_8301B380(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (*(int *)(param_2 + 4) == 0) {
    if (*(char *)(param_2 + 0x20) == '\0') {
      if (param_3[1] != 0) {
        *(uint *)(param_2 + 0xc) = param_3[1];
        uVar1 = *param_3;
        *(short *)(param_2 + 0x14) = (short)uVar1;
        *(uint *)(param_2 + 0x10) = (uVar1 & 0xffff) * 0x10 + *(int *)(param_2 + 8);
      }
      uVar2 = fn_83029EE0(param_2,*(undefined4 *)(lbl_832642E4 + 0x90));
      if ((*(uint *)(param_2 + 0x1c) & 2) == 0) {
        fn_8302A198(param_2);
        *param_3 = (uint)*(ushort *)(param_2 + 0x14);
        param_3[1] = *(uint *)(param_2 + 0xc);
      }
    }
    else {
      fn_83029E20(param_2);
    }
  }
  return uVar2;
}

