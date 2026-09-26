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
extern unsigned int lbl_8202F1A0;


undefined4 * fn_82933698(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_82934160();
  puVar1 = (undefined4 *)fn_829301D0(*puVar1,0x40,0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0xf;
    *puVar1 = &lbl_8202F1A0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    puVar1[4] = 3;
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_1 + 0x38);
    if ((*(int *)(param_1 + 0x10) == 4) && (*(int **)(param_1 + 0x18) != (int *)0x0)) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 4))();
      *(int *)(param_1 + 0x18) = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
  }
  return puVar1;
}

