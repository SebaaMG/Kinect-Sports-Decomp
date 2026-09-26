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
extern int fn_8252ACC0();
extern int fn_82F63CA0();


void fn_82464660(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(param_1 + 0x54); puVar2 != *(undefined4 **)(param_1 + 0x58);
      puVar2 = puVar2 + 1) {
    fn_8252ACC0(*puVar2,*(undefined4 *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != *(int *)(param_1 + 0x58)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x58),0);
    *(int *)(param_1 + 0x58) = iVar1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x3e4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xb70) = 0;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x8c4) + 0x2c) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0xb8) + 0x28) = 0;
  return;
}

