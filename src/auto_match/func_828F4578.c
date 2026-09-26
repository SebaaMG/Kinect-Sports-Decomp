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
extern int fn_828F4498();
extern int fn_828F9D90();
extern int fn_828FA8D8();
extern int fn_82920540();
extern int fn_829301D0();
extern int fn_82A2A378();
extern int fn_82F68CC0();
extern unsigned int uStack_16d;


longlong fn_828F4578(int param_1,char *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                      undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_stack_00000054;
  char acStack_270 [259];
  undefined1 uStack_16d;
  char acStack_160 [352];
  
  *(undefined4 *)(param_1 + 0x48) = param_7;
  if (param_3 != 0) {
    fn_82A2A378(0xfde9,0,param_2,0xffffffffffffffff,acStack_160,0x104,0,0);
    param_2 = acStack_160;
  }
  pcVar4 = param_2;
  if (*(int *)(param_1 + 0x48) == 0) {
    lVar3 = fn_828F4498(param_1,param_4,param_2);
    if (lVar3 < 0) {
      return lVar3;
    }
    lVar3 = fn_82920540(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x4c),0);
    if (-1 < lVar3) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x44);
      goto LAB_828f4750;
    }
  }
  else {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)param_2;
    uVar2 = fn_829301D0(param_4,iVar5,1);
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return -0x7ff8fff2;
    }
    fn_82F68CC0(uVar2,param_2,iVar5);
    acStack_270[0] = '\0';
    lVar3 = (**(code **)**(undefined4 **)(param_1 + 0x48))
                      (*(undefined4 **)(param_1 + 0x48),param_8,*(undefined4 *)(param_1 + 0x4c),
                       in_stack_00000054,param_1 + 0x54,param_1 + 0x58,acStack_270,0x104);
    if (-1 < lVar3) {
      if (acStack_270[0] != '\0') {
        uStack_16d = 0;
        pcVar4 = acStack_270;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar5 = (int)pcVar4 - (int)acStack_270;
        lVar3 = fn_829301D0(param_4,iVar5,1);
        if (lVar3 == 0) {
          return -0x7ff8fff2;
        }
        fn_82F68CC0(lVar3,acStack_270,iVar5);
        *(int *)(param_1 + 0x4c) = (int)lVar3;
      }
LAB_828f4750:
      lVar3 = fn_828F9D90(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                           *(undefined4 *)(param_1 + 0x4c),1,param_4,param_6);
      return lVar3;
    }
  }
  fn_828FA8D8(param_6,param_5,0x5e3,0xffffffff82029248,param_2);
  return lVar3;
}

