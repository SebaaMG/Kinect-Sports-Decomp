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
extern unsigned int *auStack_50;
extern int fn_82681728();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826A7398();
extern int fn_8271D8E0();
extern int fn_82720748();
extern unsigned int iStack_60;


void fn_8271DCB8(ulonglong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  int iStack_60;
  int aiStack_5c [3];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
    piVar3 = (int *)fn_826A7398(param_2);
    (**(code **)(*piVar3 + 0x7c))(auStack_40,piVar3);
    fn_8271D8E0(auStack_50,param_2,auStack_40);
    puVar6 = (uint *)(param_2 + 8);
    uVar4 = *(int *)(param_2 + 8) + 0x10;
    *(uint *)(param_2 + 8) = uVar4;
    if (*(uint *)(param_2 + 0x10) <= uVar4) {
      fn_826826A8(puVar6);
    }
    if (*puVar6 != 0) {
      fn_82695DA0(*puVar6,auStack_50);
    }
    lVar5 = param_1 + 0x10;
    if ((param_1 & 0xffffffff) == 0) {
      lVar5 = 0;
    }
    uVar4 = *puVar6;
    iVar1 = *(int *)(param_2 + 0xc);
    uVar2 = *(uint *)(param_2 + 0x1c);
    fn_82681728(&iStack_60,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff8201002c);
    fn_82720748(param_2,lVar5,&iStack_60,1,
                      (longlong)((int)(uVar4 - iVar1) >> 4) + ((ulonglong)uVar2 & 0x7ffffff) * 0x20
                      + -0x20);
    lVar5 = (ulonglong)*(uint *)(iStack_60 + 8) - 1;
    *(int *)(iStack_60 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_60);
    }
    fn_82696330(*puVar6);
    uVar4 = *puVar6;
    *puVar6 = uVar4 - 0x10;
    if (uVar4 - 0x10 < *(uint *)(param_2 + 0xc)) {
      fn_826827F8(puVar6);
    }
    fn_82696330(auStack_50);
  }
  else {
    lVar5 = param_1 + 0x10;
    if ((param_1 & 0xffffffff) == 0) {
      lVar5 = 0;
    }
    fn_82681728(aiStack_5c,*(int *)(param_2 + 0x78) + 0x254,0xffffffff8201002c);
    fn_82720748(param_2,lVar5,aiStack_5c,0,0);
    lVar5 = (ulonglong)*(uint *)(aiStack_5c[0] + 8) - 1;
    *(int *)(aiStack_5c[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_5c[0]);
    }
  }
  return;
}

