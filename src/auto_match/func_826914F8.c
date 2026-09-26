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
extern int fn_826912E0();
extern int fn_826913D8();
extern int fn_82693108();
extern int fn_82693208();
extern unsigned int lbl_8200E1B0;
extern unsigned int lbl_831F129C;


undefined4 *
fn_826914F8(undefined4 *param_1,undefined2 param_2,ulonglong param_3,ulonglong param_4,int param_5
             ,undefined1 *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar6;
  undefined4 *puVar5;
  longlong lVar4;
  char cVar7;
  ulonglong uVar8;
  ushort uVar9;
  
  uVar8 = (ulonglong)(uint)param_1[0x88];
  if (((uVar8 == 0) || (((uint)param_1[0x83] + param_3 & 0xffffffff) <= uVar8)) ||
     (piVar1 = (int *)param_1[0x89], piVar1 == (int *)0x0)) {
    *param_6 = 0;
    uVar3 = param_5 + 0x2fU & 0xfffffff0;
    puVar5 = (undefined4 *)fn_826912E0(param_1[2],uVar3);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[2] = uVar3;
      *(undefined2 *)(puVar5 + 3) = param_2;
      if ((param_4 & 0xffff0000) == 0) {
        if ((param_4 & 0xff00) == 0) {
          uVar9 = (ushort)(byte)(&lbl_8200E1B0)[(uint)param_4 & 0xff];
        }
        else {
          uVar9 = (byte)(&lbl_8200E1B0)[(uint)(param_4 >> 8) & 0xff] + 8;
        }
      }
      else if ((param_4 & 0xff000000) == 0) {
        uVar9 = (byte)(&lbl_8200E1B0)[(uint)(param_4 >> 0x10) & 0xff] + 0x10;
      }
      else {
        uVar9 = (byte)(&lbl_8200E1B0)[(uint)(param_4 >> 0x18) & 0xff] + 0x18;
      }
      puVar5[4] = 0;
      *(ushort *)((int)puVar5 + 0xe) = uVar9 & 0xff;
      puVar5[5] = *param_1;
      puVar5[6] = (int)param_3;
      puVar5[7] = 0;
      if ((param_3 & 0xffffffff) == 0) {
LAB_826916b4:
        uVar2 = param_1[0x6c];
        *puVar5 = param_1 + 0x6b;
        puVar5[1] = uVar2;
        *(undefined4 **)param_1[0x6c] = puVar5;
        param_1[0x6c] = puVar5;
        param_1[0x83] = puVar5[6] + param_1[0x83];
        *param_6 = 1;
        return puVar5;
      }
      if ((param_4 & 0xffffffff) < 0x1000) {
        param_4 = 0x1000;
      }
      lVar4 = (**(code **)(*(int *)param_1[1] + 4))((int *)param_1[1],param_3,param_4);
      puVar5[7] = (int)lVar4;
      if (lVar4 != 0) {
        cVar7 = fn_82693108(lbl_831F129C,lVar4,puVar5[6]);
        if (cVar7 != '\0') {
          fn_82693208(lbl_831F129C,puVar5[7],puVar5[6],puVar5);
          goto LAB_826916b4;
        }
        (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],puVar5[7],param_3,param_4);
      }
      fn_826913D8(param_1[2],puVar5,uVar3);
    }
  }
  else {
    uVar6 = (**(code **)(*piVar1 + 4))(piVar1,*param_1,((uint)param_1[0x83] - uVar8) + param_3);
    *param_6 = uVar6;
  }
  return (undefined4 *)0x0;
}

