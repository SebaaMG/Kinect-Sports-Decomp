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
extern int fn_82E4BE68();
extern int fn_82E867F0();
extern int fn_82E91590();
extern int fn_82E92218();
extern int fn_82EC7BB0();
extern unsigned int lbl_82005710;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;


ulonglong fn_82E4C550(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  ulonglong uStack00000038;
  undefined4 *apuStack_60 [2];
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double adStack_40 [8];
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x108);
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  if (*(char *)(param_1 + 0x228) != '\0') {
    if (param_5 >> 0x20 != 0) {
      return param_5 >> 0x20;
    }
    uStack00000028 = ((((U64)(uStack00000028)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_3)) & ((U64)0xFFFFFFFF)) << 32));
    if ((((U64)(uStack00000028) >> 32) & 0xFFFFFFFF) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x118) == 1) {
      return 0;
    }
    if (0 < (int)*(uint *)(param_1 + 0x108)) {
      iVar4 = fn_82E92218(*(undefined4 *)(param_1 + 0x234),
                              (*(uint *)(param_1 + 0x238) - uVar5) + -2,0);
      while ((iVar4 == 3 && ((int)uVar5 != 0))) {
        uVar5 = uVar5 - 1;
        iVar4 = fn_82E92218(*(undefined4 *)(param_1 + 0x234),
                                (*(uint *)(param_1 + 0x238) - uVar5) + -2,0);
      }
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    dStack_58 = lbl_82005710;
    dStack_50 = lbl_82005710;
    dStack_48 = lbl_82005710;
    adStack_40[0] = lbl_82005710;
    iVar4 = *(int *)(*(int *)(param_1 + 0x230) + 0x10);
    if ((((iVar4 != 0) && (*(int *)(param_1 + 0x238) + -1 <= iVar4 + -1)) &&
        (iVar4 = fn_82E91590(*(int *)(param_1 + 0x230),apuStack_60), iVar4 != 0)) &&
       (apuStack_60[0] != (undefined4 *)0x0)) {
      if (apuStack_60[0][0x18] == 0) {
        fn_82E867F0(*(undefined4 *)(param_1 + 0xc),*apuStack_60[0],apuStack_60[0][1]);
        apuStack_60[0][0x18] = 1;
      }
      uVar1 = apuStack_60[0][1];
      fn_82E4BE68(param_1,apuStack_60,(ulonglong)*(uint *)(param_1 + 0x238) - 2);
      if (apuStack_60[0] != (undefined4 *)0x0) {
        if (apuStack_60[0][0x18] == 0) {
          fn_82E867F0(*(undefined4 *)(param_1 + 0xc),*apuStack_60[0],apuStack_60[0][1]);
          apuStack_60[0][0x18] = 1;
        }
        uVar2 = apuStack_60[0][1];
        fn_82E4BE68(param_1,apuStack_60,(ulonglong)*(uint *)(param_1 + 0x238) - 3);
        if (apuStack_60[0] != (undefined4 *)0x0) {
          if (apuStack_60[0][0x18] == 0) {
            fn_82E867F0(*(undefined4 *)(param_1 + 0xc),*apuStack_60[0],apuStack_60[0][1]);
            apuStack_60[0][0x18] = 1;
          }
          uVar3 = apuStack_60[0][1];
          fn_82EC7BB0(*(undefined4 *)(param_1 + 0xc),uVar2,uVar1,0,&dStack_58);
          fn_82EC7BB0(*(undefined4 *)(param_1 + 0xc),uVar3,uVar2,0,&dStack_50);
          fn_82EC7BB0(*(undefined4 *)(param_1 + 0xc),uVar3,uVar1,0,adStack_40);
          fn_82EC7BB0(*(undefined4 *)(param_1 + 0xc),uVar2,uVar1,uVar3,&dStack_48);
          uVar5 = 0;
          if (adStack_40[0] + dStack_48 <= dStack_50 + dStack_58) {
            uVar5 = 1;
          }
        }
      }
    }
  }
  return uVar5;
}

