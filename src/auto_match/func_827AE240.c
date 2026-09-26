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
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82720748();


void fn_827AE240(ulonglong param_1,int param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  int aiStack_30 [12];
  
  uVar4 = *(int *)(param_2 + 8) + 0x10;
  puVar6 = (uint *)(param_2 + 8);
  *(uint *)(param_2 + 8) = uVar4;
  if (*(uint *)(param_2 + 0x10) <= uVar4) {
    fn_826826A8(puVar6);
  }
  puVar1 = (undefined1 *)*puVar6;
  if (puVar1 != (undefined1 *)0x0) {
    puVar1[4] = param_3;
    *puVar1 = 2;
  }
  lVar5 = param_1 + 0x10;
  if ((param_1 & 0xffffffff) == 0) {
    lVar5 = 0;
  }
  uVar4 = *puVar6;
  iVar2 = *(int *)(param_2 + 0xc);
  uVar3 = *(uint *)(param_2 + 0x1c);
  fn_82681728(aiStack_30,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff8200ebf0);
  fn_82720748(param_2,lVar5,aiStack_30,1,
                    (longlong)((int)(uVar4 - iVar2) >> 4) + ((ulonglong)uVar3 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar5 = (ulonglong)*(uint *)(aiStack_30[0] + 8) - 1;
  *(int *)(aiStack_30[0] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_30[0]);
  }
  fn_82696330(*puVar6);
  uVar4 = *puVar6;
  *puVar6 = uVar4 - 0x10;
  if (uVar4 - 0x10 < *(uint *)(param_2 + 0xc)) {
    fn_826827F8(puVar6);
  }
  return;
}

