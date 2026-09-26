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
extern int fn_822C72E0();
extern int fn_822CF078();
extern int fn_822D6AB8();
extern int fn_824D62A8();
extern int fn_8288B760();


void fn_822E36D0(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar4;
  int iVar5;
  longlong lVar3;
  undefined4 *puVar6;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0x168);
  uVar4 = fn_822CF078();
  if ((uVar4 & *(uint *)(param_1 + 0x28)) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x20) + 0x168) == 0) {
      uVar4 = *(uint *)(*(int *)(param_1 + 0x20) + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if ((uVar4 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
      puVar6 = (undefined4 *)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      fn_822C72E0(param_2,puVar6);
      if (piVar1 != (int *)0x0) {
        *(undefined1 *)(piVar1 + 0x3f) = 0;
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x20) + 0x24) != 0) &&
       (iVar5 = fn_824D62A8(), iVar5 != 0)) {
      puVar6 = (undefined4 *)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      fn_822C72E0(param_2,puVar6);
      if ((piVar1 != (int *)0x0) && (uVar2 = *(undefined4 *)(param_1 + 0x28), piVar1[0x2f] != 0)) {
        lVar3 = (**(code **)(*piVar1 + 0x50))(piVar1);
        fn_822D6AB8(lVar3 + 0x120,uVar2);
      }
    }
  }
  return;
}

