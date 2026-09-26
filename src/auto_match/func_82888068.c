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
extern int fn_828830B8();
extern int fn_82887DB8();
extern unsigned int lbl_83212A50;
extern unsigned int lbl_83213E40;


void fn_82888068(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar9;
  int iVar8;
  ulonglong uVar10;
  
  cVar9 = fn_82887DB8();
  if (cVar9 != '\0') {
    iVar8 = fn_828830B8(param_1);
    iVar3 = (int)((param_3 & 0x3fffffff) << 2);
    iVar4 = (int)((param_3 + 0x66 & 0x3fffffff) << 2);
    iVar1 = *(int *)(iVar4 + iVar8);
    iVar5 = (int)((param_3 + 0x33 & 0x3fffffff) << 2);
    iVar2 = *(int *)(iVar5 + iVar8);
    *(int *)(iVar3 + iVar8) = *(int *)(iVar3 + iVar8) + param_4;
    *(int *)(iVar4 + iVar8) = iVar1 + param_5;
    *(int *)(iVar5 + iVar8) = iVar2 + param_4;
    uVar10 = (ulonglong)lbl_83213E40;
    iVar6 = (int)(((uVar10 + 3) * 0x33 + param_3 & 0x3fffffff) << 2);
    *(int *)(iVar6 + iVar8) = *(int *)(iVar6 + iVar8) + param_4;
    iVar7 = (int)(((uVar10 + 0xe) * 0x33 + param_3 & 0x3fffffff) << 2);
    *(int *)(iVar7 + iVar8) = *(int *)(iVar7 + iVar8) + param_5;
    iVar1 = *(int *)((int)&lbl_83212A50 + iVar4);
    iVar2 = *(int *)((int)&lbl_83212A50 + iVar5);
    *(int *)((int)&lbl_83212A50 + iVar3) = *(int *)((int)&lbl_83212A50 + iVar3) + param_4;
    *(int *)((int)&lbl_83212A50 + iVar5) = iVar2 + param_4;
    *(int *)((int)&lbl_83212A50 + iVar4) = iVar1 + param_5;
    *(int *)((int)&lbl_83212A50 + iVar6) = *(int *)((int)&lbl_83212A50 + iVar6) + param_4;
    *(int *)((int)&lbl_83212A50 + iVar7) = *(int *)((int)&lbl_83212A50 + iVar7) + param_5;
  }
  return;
}

