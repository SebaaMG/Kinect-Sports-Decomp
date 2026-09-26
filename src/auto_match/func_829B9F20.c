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
extern int fn_829AB0F0();
extern int fn_829AB128();
extern int fn_829AB250();
extern int fn_829AB308();
extern int fn_829AE220();
extern int fn_829B0F38();
extern int fn_829B9B60();
extern unsigned int uStack_3e;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


void fn_829B9F20(int param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  
  uVar2 = *(uint *)(param_1 + 0x558);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0xffffffff82054d8c;
LAB_829b9f88:
    fn_829AB0F0(param_1,uVar4);
LAB_829b9f90:
    *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) | 2;
    if (param_3 + ((param_3 & 0xffffffff) / 3) * -3 != 0) {
      if (*(char *)(param_1 + 0x616) != '\x03') {
        uVar4 = 0xffffffff82054d44;
        goto LAB_829b9f64;
      }
      fn_829AB0F0(param_1,0xffffffff82054d44);
    }
    iVar1 = (int)param_3 / 3;
    lVar7 = (longlong)iVar1;
    iVar3 = fn_829AB250(param_1,lVar7,3);
    if (iVar3 == 0) {
      fn_829AB0F0(param_1,0xffffffff82054d44);
    }
    *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x1000;
    if (0 < iVar1) {
      puVar6 = (undefined1 *)(iVar3 + -1);
      lVar5 = lVar7;
      do {
        fn_829B0F38(param_1,&uStack_40,3);
        fn_829AB308(param_1,&uStack_40,3);
        lVar5 = lVar5 + -1;
        puVar6[1] = uStack_40;
        puVar6[2] = uStack_3f;
        puVar6 = puVar6 + 3;
        *puVar6 = uStack_3e;
      } while (lVar5 != 0);
    }
    fn_829B9B60(param_1,0);
    *(int *)(param_1 + 0x604) = iVar3;
    *(short *)(param_1 + 0x608) = (short)iVar1;
    fn_829AE220(param_1,param_2,iVar3,lVar7);
    if ((((*(char *)(param_1 + 0x616) == '\x03') && (param_2 != 0)) &&
        ((*(uint *)(param_2 + 8) & 0x10) != 0)) &&
       (*(ushort *)(param_1 + 0x608) < *(ushort *)(param_1 + 0x60a))) {
      fn_829AB128(param_1,0xffffffff82054d1c);
      *(undefined2 *)(param_1 + 0x60a) = *(undefined2 *)(param_1 + 0x608);
    }
  }
  else {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 2) != 0) {
        uVar4 = 0xffffffff82054d5c;
        goto LAB_829b9f88;
      }
      goto LAB_829b9f90;
    }
    uVar4 = 0xffffffff82054d74;
LAB_829b9f64:
    fn_829AB128(param_1,uVar4);
    fn_829B9B60(param_1,param_3);
  }
  return;
}

