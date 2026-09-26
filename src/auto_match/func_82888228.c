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
extern unsigned int lbl_83213E3C;
extern unsigned int lbl_83213E40;
extern unsigned int lbl_83213E4C;
extern unsigned int lbl_83213E50;


void fn_82888228(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  if ((lbl_83213E3C != 0) && (param_1 < lbl_83213E4C)) {
    uVar6 = (ulonglong)lbl_83213E40;
    iVar7 = param_1 * 0x13ec + lbl_83213E50;
    iVar3 = (int)((param_2 + 0x66 & 0xffffffff) << 2);
    iVar4 = (int)((param_2 & 0xffffffff) << 2);
    iVar5 = (int)((param_2 + 0x33 & 0xffffffff) << 2);
    iVar1 = *(int *)(iVar4 + iVar7);
    iVar2 = *(int *)(iVar5 + iVar7);
    *(undefined4 *)(iVar3 + iVar7) = *(undefined4 *)(iVar3 + iVar7);
    iVar3 = (int)(((uVar6 + 3) * 0x33 + param_2 & 0xffffffff) << 2);
    *(int *)(iVar5 + iVar7) = iVar2 + param_3;
    iVar2 = (int)(((uVar6 + 0xe) * 0x33 + param_2 & 0xffffffff) << 2);
    *(int *)(iVar4 + iVar7) = iVar1 + param_3;
    *(int *)(iVar3 + iVar7) = *(int *)(iVar3 + iVar7) + param_3;
    *(undefined4 *)(iVar2 + iVar7) = *(undefined4 *)(iVar2 + iVar7);
  }
  return;
}

