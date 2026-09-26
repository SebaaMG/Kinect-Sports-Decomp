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
extern int fn_829C9E90();
extern unsigned int lbl_8315C3E8;
extern unsigned int *lbl_8321507C;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


uint * fn_829CD2E0(void)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  int aiStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int *piStack_20;
  
  uVar2 = KfAcquireSpinLock(0xffffffff8321506c);
  puVar1 = lbl_8321507C;
  puVar4 = (uint *)0x0;
  if (lbl_8321507C != (uint *)0x0) {
    *lbl_8321507C = *lbl_8321507C & 0xfffffff9 | 2;
    lbl_8321507C = (uint *)0x0;
    puVar4 = puVar1;
  }
  KfReleaseSpinLock(0xffffffff8321506c,uVar2);
  if ((puVar4 != (uint *)0x0) && ((*puVar4 & 0x80) != 0)) {
    uStack_2c = puVar4[0x19];
    aiStack_40[0] = 0x96000;
    piStack_20 = aiStack_40;
    uStack_30 = 0x1e;
    uStack_28 = 0x67200;
    uStack_24 = uStack_2c;
    iVar3 = (*(code *)lbl_8315C3E8)(&uStack_30);
    if ((iVar3 < 0) || (aiStack_40[0] != 0x96000)) {
      fn_829C9E90(puVar4);
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = *puVar4 & 0xffffff7f;
    }
  }
  return puVar4;
}

