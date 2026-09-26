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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82A1EFC0();
extern int fn_82BD38E8();
extern int fn_82BD62B8();


undefined8 fn_82BDBD58(int *param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 auStack_60 [4];
  undefined4 auStack_50 [20];
  
  puVar8 = (undefined4 *)0x0;
  pcVar1 = *(code **)(*param_1 + 0x4b8);
  if (pcVar1 == (code *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined4 *)param_1[1];
    iVar7 = fn_82BD38E8(puVar2[3],auStack_50);
    if (-1 < iVar7) {
      puVar8 = auStack_60;
      auStack_60[0] = auStack_50[0];
    }
    if ((puVar2[0x34] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(*(undefined4 *)(param_2 + 8),0,*(undefined4 *)(param_2 + 0xc));
    }
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    uVar4 = *puVar2;
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar6 = fn_82BD62B8(puVar2);
    (*pcVar1)(uVar4,uVar6,uVar5,uVar3,puVar8);
    uVar6 = 1;
  }
  return uVar6;
}

