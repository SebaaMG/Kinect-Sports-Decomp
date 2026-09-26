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
extern unsigned int *auStack_88;
extern int fn_82F68CC0();
extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


undefined8 fn_8302FB68(int param_1,int param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int *piVar3;
  undefined8 uVar2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined4 *puStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [72];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  
  piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
  if (piVar3 == (int *)0x0) {
    uVar2 = 2;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0xe4);
    uStack_bc = 4;
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[1] == param_2) {
        if (puVar1 != (undefined4 *)0xfffffff8) {
          uStack_c0 = puVar1[3];
          goto LAB_8302fbd0;
        }
        break;
      }
    }
    uStack_c0 = 0;
LAB_8302fbd0:
    uStack_30 = 0;
    fn_82F68CC0(auStack_88,(int)param_3 + 0x1c,0x48);
    uStack_a8 = *(undefined4 *)(param_3 + 3);
    uStack_a0 = *param_3;
    uStack_98 = param_3[1];
    uStack_90 = param_3[2];
    puStack_a4 = &uStack_c0;
    uStack_40 = *(undefined4 *)((int)param_3 + 100);
    uStack_b0 = 0;
    uStack_2f = 1;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    piStack_ac = piVar3;
    uVar2 = (**(code **)(*piVar3 + 0x18))(piVar3,&uStack_b0);
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return uVar2;
}

