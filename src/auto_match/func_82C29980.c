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
extern int fn_82C294A8();


undefined8 fn_82C29980(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x44) == 0) {
    uVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x34))(*(undefined4 **)(iVar1 + 0x34),param_2);
    if (-1 < (int)uVar2) {
      *(undefined8 *)(iVar1 + 0x20) = param_2;
      *(undefined8 *)(iVar1 + 0x28) = param_2;
      *(undefined8 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined8 *)(iVar1 + 0x80) = param_2;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      *(undefined8 *)(iVar1 + 0x48) = 0;
      if ((*(int *)(iVar1 + 0xc) == 0) && (*(int *)(iVar1 + 0x18) != 0)) {
        fn_82C294A8(param_1);
      }
    }
  }
  else {
    *(undefined8 *)(iVar1 + 0x38) = param_2;
    *(undefined4 *)(iVar1 + 0x40) = 1;
  }
  return uVar2;
}

