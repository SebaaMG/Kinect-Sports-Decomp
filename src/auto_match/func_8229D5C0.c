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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822A0678();
extern int fn_82517978();
extern int fn_82672C20();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_80;


void fn_8229D5C0(double param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 uStack_80;
  int aiStack_7c [3];
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_2 + 0x14) == 0) {
    piVar1 = aiStack_7c;
    lVar4 = 3;
    do {
      piVar1[3] = 0;
      piVar1 = piVar1 + 4;
      *piVar1 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    fn_82273CD8(auStack_70,5);
    uStack_68 = param_3;
    fn_82273CD8(auStack_60,5);
    uStack_58 = param_4;
    fn_82273CD8(auStack_50,5);
    if (param_6 == 0) {
      uVar2 = 0xffffffff821ab210;
    }
    else {
      uVar2 = 0xffffffff821ab1e8;
    }
    uStack_80 = 0;
    aiStack_7c[0] = 0;
    uStack_48 = param_5;
    fn_82517978(&uStack_80,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),0);
    fn_82672C20(uStack_80,uVar2,auStack_70,3);
    if (aiStack_7c[0] != 0) {
      fn_822315A0();
    }
    fn_822A0678(param_2);
    *(float *)(param_2 + 0x10) = (float)param_1;
    puVar3 = auStack_40;
    *(undefined4 *)(param_2 + 0xc) = 1;
    lVar4 = 2;
    do {
      puVar3 = puVar3 + -0x10;
      fn_82273C88(puVar3);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

