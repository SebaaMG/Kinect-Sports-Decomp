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
extern unsigned int *auStack_5f;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826B14D8();
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


void fn_8274CC38(int param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 uStack_60;
  undefined1 auStack_5f [3];
  int iStack_5c;
  int aiStack_58 [2];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  puVar4 = (uint *)(param_2 + 0x78);
  uVar1 = fn_826B14D8(*puVar4,0x1e);
  piVar3 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar3 + 0x34))(piVar3,puVar4,uVar1);
  uStack_60 = 4;
  auStack_50[0] = 10;
  fn_82681728(&iStack_5c,(ulonglong)*puVar4 + 0x254,0xffffffff8200eaf0);
  (**(code **)(*piVar3 + 0x28))(piVar3,puVar4,&iStack_5c,auStack_50,&uStack_60);
  lVar2 = (ulonglong)*(uint *)(iStack_5c + 8) - 1;
  *(int *)(iStack_5c + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_5c);
  }
  fn_82696330(auStack_50);
  auStack_5f[0] = 4;
  auStack_40[0] = 10;
  fn_82681728(aiStack_58,(ulonglong)*puVar4 + 0x254,0xffffffff8200eae8);
  (**(code **)(*piVar3 + 0x28))(piVar3,puVar4,aiStack_58,auStack_40,auStack_5f);
  lVar2 = (ulonglong)*(uint *)(aiStack_58[0] + 8) - 1;
  *(int *)(aiStack_58[0] + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(aiStack_58[0]);
  }
  fn_82696330(auStack_40);
  return;
}

