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
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_8269A1F0();


void fn_826A1A78(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_50 [4];
  int aiStack_4c [3];
  undefined1 auStack_40 [64];
  
  lVar4 = 0;
  auStack_40[0] = 0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    do {
      fn_8269A1F0(auStack_40,lVar4);
      auStack_50[0] = 0;
      fn_82696D38(aiStack_4c,auStack_40,*(undefined4 *)(param_2 + 0x18),0xffffffffffffffff,0);
      iVar1 = *(int *)(param_1 + 0x10);
      uVar2 = fn_826957D0(param_2,lVar4);
      (**(code **)(iVar1 + 0xc))
                ((int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x18),aiStack_4c,uVar2,auStack_50
                );
      lVar3 = (ulonglong)*(uint *)(aiStack_4c[0] + 8) - 1;
      *(int *)(aiStack_4c[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_4c[0]);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(param_2 + 0x1c));
  }
  fn_82696330(auStack_40);
  return;
}

