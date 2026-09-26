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
extern unsigned int *auStack_100;
extern unsigned int *auStack_48;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d8;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_82359C18();
extern int fn_82518690();
extern int fn_825188C8();
extern int fn_825189B8();
extern int fn_82519170();
extern int fn_82519218();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F56D40();
extern unsigned int lbl_82002B04;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f8;


void fn_82518248(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 uStack0000001c;
  undefined4 *apuStack_110 [2];
  undefined4 *apuStack_108 [2];
  undefined1 auStack_100 [4];
  undefined4 *puStack_fc;
  undefined4 uStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_ec;
  undefined **ppuStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [72];
  
  uStack0000001c = param_2;
  fn_82F56D40(apuStack_110,param_1,&stack0x0000001c);
  puVar6 = apuStack_110[0];
  if (apuStack_110[0] == *(undefined4 **)(param_1 + 4)) {
    uStack_f8 = 0;
    puStack_fc = (undefined4 *)fn_8265C9E0(0x70);
    if (puStack_fc == (undefined4 *)0x0) {
      uStack_e4 = 0;
      ppuStack_e8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_e8);
    }
    *puStack_fc = puStack_fc;
    puStack_fc[1] = puStack_fc;
    puStack_fc[2] = puStack_fc;
    *(undefined1 *)(puStack_fc + 0x1a) = 1;
    *(undefined1 *)((int)puStack_fc + 0x69) = 1;
    uVar3 = fn_82518690(param_1,&stack0x0000001c);
    fn_825189B8(uVar3,auStack_100);
    fn_825188C8(apuStack_108,auStack_100,*puStack_fc);
    fn_8265CA20(puStack_fc);
    piVar4 = (int *)fn_82F56D40(apuStack_108,param_1,&stack0x0000001c);
    puVar6 = (undefined4 *)*piVar4;
  }
  puVar5 = (undefined4 *)puVar6[5];
  apuStack_110[0] = puVar5;
  if (*(char *)((int)puVar5[1] + 0x69) == '\0') {
    puVar1 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar1[4] < *(uint *)(param_3 + 0x1c)) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        apuStack_110[0] = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x69) == '\0');
  }
  if (apuStack_110[0] != (undefined4 *)puVar6[5]) {
    if ((uint)apuStack_110[0][4] <= *(uint *)(param_3 + 0x1c)) {
      ppuVar7 = apuStack_110;
      goto LAB_82518398;
    }
  }
  ppuVar7 = apuStack_108;
  apuStack_108[0] = (undefined4 *)puVar6[5];
LAB_82518398:
  if (*ppuVar7 == puVar5) {
    uVar3 = fn_82519170(auStack_80,param_3);
    uStack_e0 = *(undefined4 *)(param_3 + 0x1c);
    fn_82519170(auStack_d8,uVar3);
    fn_82359C18(auStack_48);
    fn_82230300(auStack_80,1,0);
    puVar5 = (undefined4 *)fn_8265C9E0(0x70);
    if (puVar5 == (undefined4 *)0x0) {
      uStack_ec = 0;
      ppuStack_f0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_f0);
    }
    *puVar5 = puVar6[5];
    puVar5[1] = puVar6[5];
    puVar5[2] = puVar6[5];
    *(undefined1 *)(puVar5 + 0x1a) = 0;
    *(undefined1 *)((int)puVar5 + 0x69) = 0;
    if (puVar5 + 4 != (undefined4 *)0x0) {
      puVar5[4] = uStack_e0;
      fn_82519170(puVar5 + 6,auStack_d8);
    }
    fn_82519218(apuStack_108,puVar6 + 4,puVar5);
    fn_82359C18(auStack_a0);
    fn_82230300(auStack_d8,1,0);
  }
  return;
}

