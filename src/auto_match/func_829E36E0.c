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
extern int fn_829E3BB8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


undefined8 fn_829E36E0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    return 0xffffffff80070057;
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    puVar2 = (undefined1 *)fn_829E3BB8(1);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(undefined1 **)(param_1 + 4) = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      return 0xffffffff8007000e;
    }
    if (*(char *)(param_1 + 0x6c) == '\0') {
      *(int *)(param_1 + 8) = param_2;
      *(undefined1 *)(param_1 + 0x6c) = 1;
      uVar1 = lbl_82002C5C;
      *(undefined4 *)(param_1 + 0x60) = lbl_821AAD20;
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      return 0;
    }
  }
  return 0xffffffff8000ffff;
}

