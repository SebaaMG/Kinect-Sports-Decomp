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
extern int fn_82522838();
extern int fn_82522BC8();
extern unsigned int lbl_832767CC;


void fn_825A2410(undefined4 *param_1)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  
  puVar3 = (ushort *)*param_1;
  if (*(int *)(puVar3 + 4) == *(int *)(puVar3 + 6)) {
    uVar2 = *puVar3;
    iVar1 = (*(int *)(puVar3 + 4) - *(int *)(puVar3 + 2)) / (int)(uint)uVar2;
    iVar5 = (uint)puVar3[1] + iVar1;
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    puVar3 = (ushort *)
             fn_82522BC8(lbl_832767CC,puVar3,
                               (longlong)(int)(uint)uVar2 * (longlong)iVar5 + 0x10);
    puVar4 = puVar3 + 8;
    *(ushort **)(puVar3 + 2) = puVar4;
    *(ushort **)(puVar3 + 4) = (ushort *)((uint)*puVar3 * iVar1 + (int)puVar4);
    *(ushort **)(puVar3 + 6) = (ushort *)((uint)*puVar3 * iVar5 + (int)puVar4);
    *param_1 = puVar3;
  }
  *(uint *)(puVar3 + 4) = (uint)*puVar3 + *(int *)(puVar3 + 4);
  return;
}

