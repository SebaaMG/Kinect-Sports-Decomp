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


void fn_82888230(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  ulonglong uVar6;
  
  cVar5 = fn_82887DB8();
  if (cVar5 != '\0') {
    iVar4 = fn_828830B8(param_1);
    iVar1 = (int)((param_3 & 0x3fffffff) << 2);
    if (*(int *)(iVar1 + iVar4) < param_4) {
      *(int *)(iVar1 + iVar4) = param_4;
    }
    iVar2 = (int)((param_3 + 0x33 & 0x3fffffff) << 2);
    if (*(int *)(iVar2 + iVar4) < param_4) {
      *(int *)(iVar2 + iVar4) = param_4;
      *(undefined4 *)((int)((param_3 + 0x66 & 0xffffffff) << 2) + iVar4) = 0;
    }
    uVar6 = (ulonglong)lbl_83213E40;
    iVar3 = (int)(((uVar6 + 3) * 0x33 + param_3 & 0x3fffffff) << 2);
    if (*(int *)(iVar3 + iVar4) < param_4) {
      *(int *)(iVar3 + iVar4) = param_4;
      *(undefined4 *)((int)(((uVar6 + 0xe) * 0x33 + param_3 & 0xffffffff) << 2) + iVar4) = 0;
    }
    if (*(int *)((int)&lbl_83212A50 + iVar1) < param_4) {
      *(int *)((int)&lbl_83212A50 + iVar1) = param_4;
    }
    if (*(int *)((int)&lbl_83212A50 + iVar2) < param_4) {
      *(int *)((int)&lbl_83212A50 + iVar2) = param_4;
      *(undefined4 *)((int)((param_3 & 0xffffffff) << 2) + -0x7cded418) = 0;
    }
    if (*(int *)((int)&lbl_83212A50 + iVar3) < param_4) {
      *(int *)((int)&lbl_83212A50 + iVar3) = param_4;
      *(undefined4 *)((int)((uVar6 * 0x33 + param_3 & 0xffffffff) << 2) + -0x7cdeca88) = 0;
    }
  }
  return;
}

