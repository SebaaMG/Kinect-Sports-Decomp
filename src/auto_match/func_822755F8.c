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
extern unsigned int iStack_c;


void fn_822755F8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iStack_c;
  
  puVar4 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar5 = puVar4 + 1, puVar5 != param_2) {
    uVar3 = *puVar5;
    iStack_c = (int)uVar3;
    puVar1 = puVar5;
    if (iStack_c < *(int *)((int)param_1 + 4)) {
      while (param_1 != puVar1) {
        *(undefined4 *)puVar1 = *(undefined4 *)(puVar1 + -1);
        *(undefined4 *)((int)puVar1 + 4) = *(undefined4 *)((int)puVar1 + -4);
        puVar1 = puVar1 + -1;
      }
      *param_1 = uVar3;
      puVar4 = puVar5;
    }
    else {
      iVar2 = *(int *)((int)puVar4 + 4);
      puVar4 = puVar5;
      while (iStack_c < iVar2) {
        *(undefined4 *)puVar4 = *(undefined4 *)(puVar4 + -1);
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar4 + -4);
        iVar2 = *(int *)((int)puVar4 + -0xc);
        puVar4 = puVar4 + -1;
      }
      *puVar4 = uVar3;
      puVar4 = puVar5;
    }
  }
  return;
}

