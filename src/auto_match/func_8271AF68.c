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
extern int fn_82681728();
extern int fn_826826A8();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_826AF618();
extern int fn_82720748();
extern unsigned int iStack_40;


void fn_8271AF68(ulonglong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar5;
  longlong lVar4;
  uint *puVar6;
  int iStack_40;
  int aiStack_3c [15];
  
  uVar5 = *(int *)(param_2 + 8) + 0x10;
  *(uint *)(param_2 + 8) = uVar5;
  puVar6 = (uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 0x10) <= uVar5) {
    fn_826826A8(puVar6);
  }
  puVar1 = (undefined1 *)*puVar6;
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar1 + 8) = param_5;
    *puVar1 = 4;
  }
  fn_82681728(aiStack_3c,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,param_4);
  uVar5 = *puVar6;
  *puVar6 = uVar5 + 0x10;
  if (*(uint *)(param_2 + 0x10) <= uVar5 + 0x10) {
    fn_826826A8(puVar6);
  }
  puVar1 = (undefined1 *)*puVar6;
  if (puVar1 != (undefined1 *)0x0) {
    *(int *)(puVar1 + 4) = aiStack_3c[0];
    *puVar1 = 5;
    *(int *)(aiStack_3c[0] + 8) = *(int *)(aiStack_3c[0] + 8) + 1;
  }
  lVar4 = (ulonglong)*(uint *)(aiStack_3c[0] + 8) - 1;
  *(int *)(aiStack_3c[0] + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8();
  }
  uVar5 = *puVar6;
  *puVar6 = uVar5 + 0x10;
  if (*(uint *)(param_2 + 0x10) <= uVar5 + 0x10) {
    fn_826826A8(puVar6);
  }
  if (*puVar6 != 0) {
    fn_82695520(*puVar6,param_3);
  }
  lVar4 = param_1 + 0x10;
  if ((param_1 & 0xffffffff) == 0) {
    lVar4 = 0;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  uVar5 = *puVar6;
  uVar3 = *(uint *)(param_2 + 0x1c);
  fn_82681728(&iStack_40,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff8200eb60);
  fn_82720748(param_2,lVar4,&iStack_40,3,
                    (longlong)((int)(uVar5 - iVar2) >> 4) + ((ulonglong)uVar3 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar4 = (ulonglong)*(uint *)(iStack_40 + 8) - 1;
  *(int *)(iStack_40 + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8(iStack_40);
  }
  fn_826AF618(puVar6);
  return;
}

