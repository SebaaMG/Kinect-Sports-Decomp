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
extern unsigned int iStack_9c;
extern unsigned int lbl_820FBA20;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;


undefined8 fn_82C493B0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffffffffffd;
  }
  else if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) &&
          ((*(uint *)(param_1 + 0x5614) & 8) != 0)) {
    uStack_a0 = *(undefined4 *)(param_1 + 0x5610);
    uStack_94 = 3;
    uStack_98 = *(undefined4 *)(param_1 + 0xb148);
    if ((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) {
      uStack_90 = *(undefined4 *)(param_1 + 0x120);
    }
    else {
      uStack_90 = *(undefined4 *)
                   (&lbl_820FBA20 +
                   (*(int *)(param_1 + 0x5514) * 6 + *(int *)(param_1 + 0x5510)) * 4);
    }
    uStack_8c = *(undefined4 *)(param_1 + 0x5568);
    uStack_88 = *(undefined4 *)(param_1 + 0x5424);
    uStack_84 = *(undefined4 *)(param_1 + 0x5428);
    uStack_80 = *(undefined4 *)(param_1 + 0x556c);
    uStack_74 = *(undefined4 *)(param_1 + 0x54b0);
    uStack_70 = *(undefined4 *)(param_1 + 0xd9c);
    uStack_6c = *(undefined4 *)(param_1 + 0xda0);
    uStack_68 = *(undefined4 *)(param_1 + 0x5444);
    uStack_64 = *(undefined4 *)(param_1 + 0x5448);
    uStack_60 = *(undefined4 *)(param_1 + 0x567c);
    iStack_9c = param_1;
    uStack_7c = param_2;
    uStack_78 = param_3;
    uVar1 = (**(code **)(*(int *)(param_1 + 0x6070) + 0xc0))(&uStack_a0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

