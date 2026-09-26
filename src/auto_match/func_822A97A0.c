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
extern int fn_8228ED20();
extern int fn_822A98E0();
extern int fn_822A9B80();
extern int fn_8266EC60();
extern int fn_82D7E470();


void fn_822A97A0(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 8) == 10)) {
    if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(iVar3 + 0x80) != 0)) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      iVar3 = fn_822A9B80();
      if ((iVar3 != 0) && (uVar2 = *(uint *)(param_1 + 0x3c), uVar2 != 0)) {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xf0) + 8);
        *(byte *)(iVar3 + (uVar2 >> 3)) = (byte)(1 << (uVar2 & 7)) | *(byte *)(iVar3 + (uVar2 >> 3))
        ;
      }
    }
    if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x34) == 0)) {
      fn_8228ED20();
      *(undefined4 *)(param_1 + 0x34) = 1;
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    }
  }
  fn_8266EC60();
  iVar3 = fn_82D7E470();
  uVar2 = *(uint *)(param_1 + 0x68);
  if (iVar3 == 0) {
    if (uVar2 != 0) goto LAB_822a98b4;
  }
  else if (uVar2 == 0) goto LAB_822a98b4;
  *(uint *)(param_1 + 0x68) = uVar2 ^ 1;
LAB_822a98b4:
  if ((*(int *)(param_1 + 0x6c) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    fn_822A98E0(param_1,param_2);
  }
  return;
}

