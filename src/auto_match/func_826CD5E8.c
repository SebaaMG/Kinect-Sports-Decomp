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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826C62B8();
extern int fn_826C6368();
extern int fn_827552C8();
extern int fn_827553F0();


void fn_826CD5E8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar5;
  undefined8 uVar4;
  uint *puVar6;
  undefined4 uVar7;
  
  if (((*(int *)(param_1 + 0x1a8) == 9999) && (*(int *)(param_1 + 0x1ac) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x1ac) + 0x1c) != 0)) {
    if (((~(ulonglong)*(uint *)(*(int *)(param_2 + 0xc) + 0x14) & 0xffffffff) >> 6 & 1) == 0) {
      iVar1 = (*(int **)(param_2 + 0xc))[5];
      uVar4 = (**(code **)(**(int **)(param_2 + 0xc) + 0x3c))();
      puVar6 = (uint *)fn_827553F0(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0x1c),uVar4,
                                         iVar1,0,0);
      if (puVar6 == (uint *)0x0) {
        return;
      }
      uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x14),0x1c,0);
      if ((uVar3 & 0xffffffff) == 0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = (uint *)fn_826C62B8(uVar3,0,puVar6[5],0xffffffff8200bf80,0,puVar6[6]);
      }
      uVar2 = *puVar6;
      *puVar6 = (uint)((ulonglong)uVar2 - 1);
      if ((ulonglong)uVar2 - 1 == 0) {
        fn_826C6368(puVar6);
        fn_8267BE38(puVar6);
      }
    }
    else {
      if (*(int *)(param_2 + 0x14) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x2c);
      }
      uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x14),0x1c,0);
      if ((uVar3 & 0xffffffff) == 0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = (uint *)fn_826C62B8(uVar3,0,param_2,0xffffffff8200bf80,0,uVar7);
      }
    }
    if (puVar5 != (uint *)0x0) {
      fn_827552C8(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0x1c),puVar5);
      uVar2 = *puVar5;
      *puVar5 = (uint)((ulonglong)uVar2 - 1);
      if ((ulonglong)uVar2 - 1 == 0) {
        fn_826C6368(puVar5);
        fn_8267BE38(puVar5);
      }
    }
  }
  return;
}

