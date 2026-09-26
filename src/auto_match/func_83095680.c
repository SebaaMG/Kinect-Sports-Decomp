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
extern unsigned int lbl_831BCF54;


void fn_83095680(int *param_1,int param_2,int param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined2 uVar6;
  ushort uVar7;
  
  iVar3 = param_3 + -1;
  puVar1 = (ushort *)(((param_3 - param_5) + -1) * 4 + *param_1);
  puVar2 = param_4 + param_5 * 2 + -2;
  uVar5 = *puVar1;
  uVar7 = *puVar2;
  puVar4 = (ushort *)(param_3 * 4 + *param_1);
  do {
    while (uVar6 = (undefined2)iVar3, uVar7 < uVar5) {
      iVar3 = iVar3 + -1;
      *(undefined4 *)(puVar4 + -2) = *(undefined4 *)puVar1;
      *(undefined2 *)
       (*(int *)(&lbl_831BCF54 + (*puVar1 & 1) * 4) + (uint)puVar1[1] * 0x10 + param_2) = uVar6;
      puVar1 = puVar1 + -2;
      puVar4 = puVar4 + -2;
      uVar5 = *puVar1;
    }
    iVar3 = iVar3 + -1;
    puVar4[-2] = *puVar2;
    puVar4[-1] = puVar2[1];
    *(undefined2 *)(*(int *)(&lbl_831BCF54 + (*puVar2 & 1) * 4) + (uint)puVar2[1] * 0x10 + param_2)
         = uVar6;
    puVar2 = puVar2 + -2;
    uVar7 = *puVar2;
    puVar4 = puVar4 + -2;
  } while (param_4 <= puVar2);
  return;
}

