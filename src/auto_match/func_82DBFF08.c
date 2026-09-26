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
extern int fn_830AA0D0();
extern unsigned int lbl_821AAD20;


void fn_82DBFF08(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
  }
  uVar1 = lbl_821AAD20;
  puVar2 = *(undefined4 **)(param_1 + 0x4c);
  if (puVar2 < *(undefined4 **)(param_1 + 0x48)) {
    do {
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while (puVar2 < *(undefined4 **)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    fn_830AA0D0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x2c),
                      *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38)) {
    fn_830AA0D0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x3c),
                      *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  return;
}

