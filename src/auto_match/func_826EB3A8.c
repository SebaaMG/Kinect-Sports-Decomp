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
extern unsigned int *auStack_dc;
extern unsigned int *auStack_e0;
extern int fn_8268CC00();
extern int fn_8275B490();
extern int fn_8275BA90();
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_826EB3A8(undefined8 param_1,uint *param_2,int *param_3,longlong param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  undefined1 *puVar7;
  char in_stack_00000057;
  uint *puStack_100;
  undefined1 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [220];
  
  piVar1 = *(int **)(*param_3 + 0xc);
  if (param_2[6] != 0) {
    if (in_stack_00000057 == '\0') {
      if (param_5 != 0) {
        if ((param_9 & 0xffffffff) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (ulonglong)param_2[1] * 0x18 + param_9;
        }
        fn_8275BA90(param_1,(ulonglong)param_2[1] * 0x28 + param_4,param_3,param_4,lVar5);
      }
    }
    else {
      lVar5 = 2;
      puVar7 = auStack_dc;
      do {
        fn_8268CC00(puVar7);
        lVar5 = lVar5 + -1;
        puVar7 = puVar7 + 0x24;
      } while (-1 < lVar5);
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      if ((param_5 != 0) && (uVar3 = 0, *param_2 != 0)) {
        puVar4 = &uStack_f8;
        puVar7 = auStack_e0;
        puVar6 = param_2;
        do {
          puVar6 = puVar6 + 1;
          if ((*puVar6 != 0xffffffff) &&
             (cVar2 = fn_8275B490(param_1,(ulonglong)*puVar6 * 0x28 + param_4,puVar7,param_3),
             cVar2 != '\0')) {
            *puVar4 = puVar7;
          }
          uVar3 = uVar3 + 1;
          puVar7 = puVar7 + 0x24;
          puVar4 = puVar4 + 1;
        } while (uVar3 < *param_2);
      }
      (**(code **)(*piVar1 + 100))(piVar1,param_2[4],uStack_f8,uStack_f4,uStack_f0);
    }
    puStack_100 = param_2 + 8;
    uStack_fc = 0;
    (**(code **)(*piVar1 + 0x40))(piVar1,param_2[5],param_2[6],1,&puStack_100);
    (**(code **)(*piVar1 + 0x48))(piVar1,param_6,0,param_7,0,(ulonglong)param_2[6] / 3);
  }
  return;
}

