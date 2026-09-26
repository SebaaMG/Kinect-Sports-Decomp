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
extern unsigned int *auStack_40;
extern int fn_822315A0();


int * fn_8256D470(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 auStack_40 [16];
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  for (puVar5 = (undefined4 *)(param_3 + 8); puVar5 != puVar1; puVar5 = puVar5 + 2) {
    uVar3 = 0;
    uVar4 = 0;
    if (auStack_40 != puVar5) {
      uVar4 = puVar5[1];
      puVar5[1] = 0;
      uVar3 = *puVar5;
      *puVar5 = 0;
    }
    iVar2 = puVar5[-1];
    puVar5[-1] = uVar4;
    puVar5[-2] = uVar3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
  }
  iVar2 = *(int *)(param_2 + 4);
  for (iVar6 = iVar2 + -8; iVar6 != iVar2; iVar6 = iVar6 + 8) {
    if (*(int *)(iVar6 + 4) != 0) {
      fn_822315A0();
    }
  }
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = param_3;
  *(int *)(param_2 + 4) = iVar2 + -8;
  return param_1;
}

