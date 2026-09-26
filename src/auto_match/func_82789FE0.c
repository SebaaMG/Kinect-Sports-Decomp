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
extern unsigned int *auStack_70;
extern int fn_827891F0();
extern int fn_82789D68();
extern unsigned int lbl_820155B4;
extern unsigned int lbl_820155B8;


undefined8 fn_82789FE0(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint auStack_70 [28];
  
  puVar6 = (undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar4 = 0x7fffffff;
  bVar2 = false;
  uVar5 = 0;
  auStack_70[0] = param_2;
  fn_82789D68(puVar6,auStack_70);
  uVar8 = (&lbl_820155B8)[param_2 & 3] | param_2 & 0xfffffffc;
  auStack_70[0] = uVar8;
  fn_82789D68(puVar6,auStack_70);
  if (param_2 != 0x7fffffff) {
    do {
      if (uVar8 == uVar4) break;
      uVar1 = *(uint *)((((int)uVar8 >> 2 & 0xffU) * 0xf + (uVar8 & 3) + 7) * 4 +
                       *(int *)(((uint)((int)uVar8 >> 2) >> 6 & 0x3fffffc) +
                               *(int *)(param_1 + 0x2c)));
      if (uVar1 == param_2) {
        bVar2 = true;
LAB_8278a108:
        fn_827891F0(puVar6);
        if (bVar2) {
          return 1;
        }
        uVar8 = *(uint *)((((int)param_2 >> 2 & 0xffU) * 0xf + (param_2 & 3) + 7) * 4 +
                         *(int *)(((uint)((int)param_2 >> 2) >> 6 & 0x3fffffc) +
                                 *(int *)(param_1 + 0x2c)));
        while( true ) {
          if ((int)uVar8 < 0) {
            return 0;
          }
          auStack_70[0] = uVar8;
          fn_82789D68(puVar6,auStack_70);
          uVar1 = (&lbl_820155B4)[uVar8 & 3];
          uVar7 = uVar1 | uVar8 & 0xfffffffc;
          auStack_70[0] = uVar7;
          fn_82789D68(puVar6,auStack_70);
          if ((uVar8 == uVar4) || (uVar7 == uVar4)) break;
          uVar4 = uVar5 >> 4;
          uVar3 = uVar5 & 0x3f;
          uVar5 = uVar5 + 1;
          uVar8 = *(uint *)((((int)uVar7 >> 2 & 0xffU) * 0xf + (uVar1 & 3) + 7) * 4 +
                           *(int *)(((uint)((int)uVar7 >> 2) >> 6 & 0x3fffffc) +
                                   *(int *)(param_1 + 0x2c)));
          uVar4 = *(uint *)(*(int *)((uVar4 & 0xffffffc) + *(int *)(param_1 + 0x48)) + uVar3 * 4);
        }
        break;
      }
      if ((int)uVar1 < 0) goto LAB_8278a108;
      uVar4 = uVar5 >> 4;
      uVar8 = uVar5 & 0x3f;
      uVar5 = uVar5 + 1;
      uVar4 = *(uint *)(*(int *)((uVar4 & 0xffffffc) + *(int *)(param_1 + 0x48)) + uVar8 * 4);
      auStack_70[0] = uVar1;
      fn_82789D68(puVar6,auStack_70);
      uVar8 = (&lbl_820155B8)[uVar1 & 3] | uVar1 & 0xfffffffc;
      auStack_70[0] = uVar8;
      fn_82789D68(puVar6,auStack_70);
    } while (uVar1 != uVar4);
  }
  *puVar6 = 0;
  return 1;
}

