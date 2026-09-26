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
extern int fn_829301D0();
extern int fn_82934160();
extern unsigned int lbl_8202F194;


undefined4 * fn_82933250(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_82934160();
  puVar1 = (undefined4 *)fn_829301D0(*puVar1,0x50,0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[1] = 0xe;
    *puVar1 = &lbl_8202F194;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 1;
    puVar1[0xb] = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    puVar1[6] = *(undefined4 *)(param_1 + 0x18);
    puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
    puVar1[10] = *(undefined4 *)(param_1 + 0x28);
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(param_1 + 0x48);
    puVar1[0xb] = *(undefined4 *)(param_1 + 0x2c);
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 4))();
      puVar1[4] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 4))();
      puVar1[8] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x24) == (int *)0x0) {
      return puVar1;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
    puVar1[9] = iVar2;
    if (iVar2 != 0) {
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

