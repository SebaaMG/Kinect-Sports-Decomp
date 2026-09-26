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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e0;
extern int fn_8267BE38();
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_8268CD40();
extern int fn_8268CEC0();
extern int fn_8268D008();
extern int fn_8269A240();
extern int fn_826C58D8();
extern int fn_826C8688();
extern int fn_826C98F8();
extern int fn_826CDE90();
extern int fn_82758F98();
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int uStack_c8;


int * fn_826CDFC0(int *param_1,undefined8 param_2,ulonglong param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  char cVar5;
  int *piVar3;
  int *piVar4;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  if (((((uint)param_1[0x23] >> 0xb & 1) == 0) &&
      (((cVar5 = (**(code **)(*param_1 + 8))(), cVar5 != '\0' || (param_1[0x71] != 0)) &&
       (cVar5 = (**(code **)(*param_1 + 0xa0))(param_1), cVar5 == '\0')))) && (param_4 != param_1))
  {
    iStack_c0 = param_1[0x11];
    iStack_bc = param_1[0x12];
    iStack_b8 = param_1[0x13];
    iStack_b4 = param_1[0x14];
    iStack_b0 = param_1[0x15];
    iStack_ac = param_1[0x16];
    fn_8268D008(&iStack_c0,auStack_e0,param_2);
    uVar1 = param_1[0x2b];
    piVar3 = (int *)fn_826C58D8(param_1);
    if (((piVar3 != (int *)0x0) && (cVar5 = (**(code **)(*piVar3 + 0xa0))(piVar3), cVar5 != '\0'))
       && ((*(byte *)((int)piVar3 + 0x66) & 0x10) == 0)) {
      fn_8268CC00(auStack_a0);
      fn_8268CC00(auStack_80);
      fn_8269A240(piVar3,auStack_80);
      fn_8268CD40(auStack_a0,auStack_80);
      fn_8268CC00(auStack_60);
      fn_8269A240(param_1,auStack_60);
      fn_8268CEC0(auStack_a0,auStack_60);
      fn_8268CCB0(auStack_a0,auStack_d8,auStack_e0);
      cVar5 = (**(code **)(*piVar3 + 0x30))(piVar3,auStack_d8,1);
      if (cVar5 == '\0') {
        return (int *)0x0;
      }
    }
    iStack_d0 = 0;
    iStack_cc = 0;
    uStack_c8 = 0;
    fn_826CDE90(param_1,&iStack_d0,auStack_e0,1);
    iVar2 = iStack_d0;
    uVar8 = (ulonglong)uVar1 - 1;
    if (-1 < (longlong)uVar8) {
      lVar7 = (uVar8 & 0x3fffffff) << 2;
      do {
        piVar3 = *(int **)(param_1[0x2a] + (int)lVar7);
        if (((iStack_cc == 0) ||
            ((*(char *)(iVar2 + (int)uVar8) != '\0' && (*(short *)(piVar3 + 0x19) == 0)))) &&
           ((*(byte *)((int)piVar3 + 0x66) & 2) == 0)) {
          piVar3 = (int *)(**(code **)(*piVar3 + 0x34))(piVar3,auStack_e0,param_3,param_4);
          if ((piVar3 != (int *)0x0) && ((param_3 & 0xff) != 0)) goto LAB_826ce220;
          cVar5 = fn_826C98F8(param_1);
          if ((cVar5 == '\0') && ((param_1[0x71] == 0 || (cVar5 = fn_826C98F8(), cVar5 == '\0'))))
          {
            if ((piVar3 != (int *)0x0) && (piVar3 != param_1)) {
              if (((int *)piVar3[8] == (int *)0x0) ||
                 (cVar5 = (**(code **)(*(int *)piVar3[8] + 8))(), cVar5 == '\0')) goto LAB_826ce2fc;
              goto LAB_826ce220;
            }
          }
          else if (piVar3 != (int *)0x0) {
            if ((param_1[0x71] == 0) || (cVar5 = fn_826C98F8(), cVar5 == '\0')) {
              piVar4 = (int *)fn_826C8688(param_1);
              piVar3 = param_1;
              piVar6 = piVar4;
              if (piVar4 != (int *)0x0) goto LAB_826ce2c4;
            }
            else {
              piVar3 = (int *)param_1[0x71];
            }
            goto LAB_826ce220;
          }
        }
        uVar8 = uVar8 - 1;
        lVar7 = lVar7 + -4;
      } while (-1 < (longlong)uVar8);
    }
    if (((param_1[0x6e] != 0) && (cVar5 = fn_826C98F8(param_1), cVar5 != '\0')) &&
       (cVar5 = fn_82758F98(param_1[0x6e],auStack_e0,1,param_1), piVar3 = param_1, cVar5 != '\0'
       )) goto LAB_826ce220;
    fn_8267BE38(iVar2);
  }
  return (int *)0x0;
LAB_826ce2fc:
  piVar3 = (int *)0x0;
  goto LAB_826ce220;
  while (piVar6 != param_1) {
LAB_826ce2c4:
    piVar6 = (int *)piVar6[8];
    if (piVar6 == (int *)0x0) goto LAB_826ce2fc;
  }
  piVar3 = (int *)(**(code **)(*piVar4 + 0x34))(piVar4,auStack_e0,param_3,param_4);
LAB_826ce220:
  fn_8267BE38(iVar2);
  return piVar3;
}

