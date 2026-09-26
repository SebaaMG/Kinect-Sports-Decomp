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
extern int fn_8229CAD0();
extern int fn_8229CB40();
extern int fn_8249ABC0();


undefined8 fn_8229C5E8(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
LAB_8229c654:
    if (*(int *)(param_1 + 0x68) != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        puVar3 = (undefined4 *)(param_1 + 0x70);
        if (7 < *(uint *)(param_1 + 0x84)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        fn_8229CAD0(param_1,puVar3);
      }
      else {
        puVar3 = (undefined4 *)(param_1 + 0x8c);
        if (7 < *(uint *)(param_1 + 0xa0)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        puVar4 = (undefined4 *)(param_1 + 0x70);
        if (7 < *(uint *)(param_1 + 0x84)) {
          puVar4 = (undefined4 *)*puVar4;
        }
        fn_8229CB40(param_1,puVar4,puVar3);
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    uVar1 = 1;
  }
  else {
    if ((*(int *)(param_1 + 0x5c) == 0) &&
       (iVar2 = fn_8249ABC0(), *(int *)(iVar2 + 0x24) != 0)) {
      iVar2 = fn_8249ABC0();
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(iVar2 + 0x110) + 0x34);
    }
    else {
      iVar2 = fn_8249ABC0();
      if (*(int *)(*(int *)(iVar2 + 0x110) + 0x34) == 0) goto LAB_8229c654;
    }
    uVar1 = 0;
  }
  return uVar1;
}

