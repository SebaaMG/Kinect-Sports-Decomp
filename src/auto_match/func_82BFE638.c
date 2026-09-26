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
extern int fn_82BFBDA8();
extern int fn_82BFE0F8();
extern int fn_82BFE108();
extern int fn_82F68CC0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82BFE638(uint *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_30;
  uint uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  
  if (param_2 == (int *)0x0) {
LAB_82bfe654:
    uVar1 = 0xffffffff80070057;
  }
  else {
    uStack_2c = 0;
    *param_2 = 0;
    if (param_1 == (uint *)0x0) {
      uStack_2c = 0;
      pcStack_28 = fn_82BFE0F8;
      pcStack_24 = fn_82BFE108;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
LAB_82bfe7f4:
      uStack_30 = 0x10;
      iVar2 = fn_82BFBDA8(uVar3,uVar4,uVar5,uVar6,&uStack_30,0);
LAB_82bfe804:
      if (iVar2 != 0) {
        *param_2 = iVar2;
        return 0;
      }
    }
    else {
      if (param_1[7] != 0x34) goto LAB_82bfe654;
      pcStack_24 = fn_82BFE108;
      pcStack_28 = fn_82BFE0F8;
      if ((code *)param_1[10] != (code *)0x0) {
        pcStack_24 = (code *)param_1[0xb];
        if (pcStack_24 == (code *)0x0) goto LAB_82bfe654;
        uStack_2c = param_1[0xc];
        pcStack_28 = (code *)param_1[10];
      }
      uVar5 = *param_1;
      if ((((((uVar5 & 0x1f0) == 0) && (param_1[5] == 0)) && (param_1[3] == 0)) &&
          ((param_1[6] == 0 && (param_1[4] == 0)))) && ((param_1[1] == 0 && (param_1[2] == 0)))) {
        uVar4 = param_1[9];
        uVar3 = param_1[8];
        uVar6 = uVar5 >> 2 & 1;
        uVar5 = uVar5 >> 3 & 1;
        if ((pcStack_28 != (code *)0x0) && (pcStack_24 != (code *)0x0)) goto LAB_82bfe7f4;
      }
      else {
        uStack_30 = 0x10;
        if (((pcStack_28 != (code *)0x0) && (pcStack_24 != (code *)0x0)) &&
           (iVar2 = fn_82BFBDA8(param_1[8],param_1[9],uVar5 >> 3 & 1,uVar5 >> 2 & 1,&uStack_30,
                                  0x1c), iVar2 != 0)) {
          fn_82F68CC0(*(undefined4 *)(iVar2 + 0x44),param_1,0x1c);
          goto LAB_82bfe804;
        }
      }
    }
    uVar1 = 0xffffffff80070008;
  }
  return uVar1;
}

