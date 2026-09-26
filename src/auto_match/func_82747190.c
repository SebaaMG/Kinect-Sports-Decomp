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
extern unsigned int *auStack_20;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_827450A8();
extern int fn_82745128();
extern int fn_82746C20();


void fn_82747190(int param_1)

{
  char cVar2;
  ulonglong uVar1;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [32];
  
  cVar2 = fn_82695468(param_1,0x11);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
  }
  else {
    lVar4 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar4 = 0;
    }
    uVar1 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x30,0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82746C20(uVar1,*(undefined4 *)(param_1 + 0x18));
    }
    puVar3 = auStack_70;
    lVar5 = 4;
    do {
      puVar3 = puVar3 + 0x10;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_827450A8(lVar4,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_60);
    fn_82745128(uVar1,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_60);
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar1);
    puVar3 = auStack_20;
    lVar4 = 3;
    do {
      puVar3 = puVar3 + -0x10;
      fn_82696330(puVar3);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_826824B0(uVar1);
    }
  }
  return;
}

