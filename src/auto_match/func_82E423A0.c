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
extern int fn_82E3BCC8();
extern int fn_82E4FE40();
extern int fn_82E58BE8();
extern int fn_82E74290();


undefined8 fn_82E423A0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *apiStack_40 [16];
  
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  do {
    iVar2 = (uVar3 + 0x1b) * 4;
    puVar1 = *(undefined4 **)(iVar2 + param_1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 *)(iVar2 + param_1) = 0;
    iVar2 = (uVar3 + 0xac) * 4;
    if (*(int *)(iVar2 + param_1) != 0) {
      fn_82E4FE40();
    }
    *(undefined4 *)(iVar2 + param_1) = 0;
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 0x80);
  fn_82E3BCC8(param_1 + 0x26c,0);
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  iVar2 = *(int *)(param_1 + 0x4b0);
  if (iVar2 != 0) {
    fn_82E74290(iVar2);
    fn_82E4FE40(iVar2);
  }
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  do {
    apiStack_40[0] = (int *)0x0;
    do {
      iVar2 = fn_82E58BE8(param_1 + 0x4b4,apiStack_40);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x5a0) != 0) {
          fn_82E4FE40();
        }
        *(undefined4 *)(param_1 + 0x5a0) = 0;
        if (*(int **)(param_1 + 0x5c0) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x5c0) + 8))();
          *(undefined4 *)(param_1 + 0x5c0) = 0;
        }
        return 0;
      }
    } while (apiStack_40[0] == (int *)0x0);
    (**(code **)(*apiStack_40[0] + 8))();
  } while( true );
}

