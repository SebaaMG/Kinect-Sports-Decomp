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
extern int fn_82695520();
extern int fn_82696330();
extern int fn_82720748();


void fn_8271AAA0(ulonglong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  int aiStack_30 [12];
  
  uVar3 = *(int *)(param_2 + 8) + 0x10;
  puVar5 = (uint *)(param_2 + 8);
  *(uint *)(param_2 + 8) = uVar3;
  if (*(uint *)(param_2 + 0x10) <= uVar3) {
    fn_826826A8(puVar5);
  }
  if (*puVar5 != 0) {
    fn_82695520(*puVar5,param_3);
  }
  lVar4 = param_1 + 0x10;
  if ((param_1 & 0xffffffff) == 0) {
    lVar4 = 0;
  }
  uVar3 = *puVar5;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(uint *)(param_2 + 0x1c);
  fn_82681728(aiStack_30,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff8200eb6c);
  fn_82720748(param_2,lVar4,aiStack_30,1,
                    (longlong)((int)(uVar3 - iVar1) >> 4) + ((ulonglong)uVar2 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar4 = (ulonglong)*(uint *)(aiStack_30[0] + 8) - 1;
  *(int *)(aiStack_30[0] + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8(aiStack_30[0]);
  }
  fn_82696330(*puVar5);
  uVar3 = *puVar5;
  *puVar5 = uVar3 - 0x10;
  if (uVar3 - 0x10 < *(uint *)(param_2 + 0xc)) {
    fn_826827F8(puVar5);
  }
  return;
}

