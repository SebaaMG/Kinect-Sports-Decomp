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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E91718();
extern int fn_82E91820();
extern int fn_82F17D48();
extern int fn_82F17EB8();


void fn_82E91950(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *param_1 = 0;
  param_1[2] = 0;
  uVar4 = fn_8265C940(0x18,0x248c8000);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_82E91718(uVar4,param_2,param_5);
  }
  param_1[3] = iVar5;
  if (iVar5 == 0) {
    *param_2 = -3;
  }
  else if (*param_2 == 0) {
    iVar5 = 0;
    if (0 < (int)param_5) {
      do {
        puVar6 = (undefined4 *)fn_8265C940(0x94,0x248c8000);
        if (puVar6 == (undefined4 *)0x0) {
          *param_2 = -3;
          fn_82E91820(param_1);
          return;
        }
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0xffffffff;
        puVar6[2] = 0xffffffff;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[7] = 0xffffffff;
        puVar6[6] = 0xffffffff;
        puVar6[0x13] = 0;
        puVar6[0x12] = 0;
        puVar6[0x15] = 0xffffffff;
        puVar6[0x14] = 0xffffffff;
        puVar6[0x19] = 0;
        puVar6[0x18] = 0;
        puVar6[0x1b] = 0xffffffff;
        puVar6[0x1a] = 0xffffffff;
        puVar6[0x1f] = 0;
        puVar6[0x1e] = 0;
        puVar6[0x21] = 0xffffffff;
        puVar6[0x20] = 0xffffffff;
        fn_82F17EB8(puVar6,param_2,param_3,param_4,param_6,param_7,param_8);
        if (*param_2 != 0) {
          fn_82F17D48(puVar6);
          fn_8265C990(puVar6,0x248c8000);
          goto LAB_82e91b18;
        }
        piVar1 = (int *)param_1[3];
        if (-1 < piVar1[4]) {
          piVar2 = (int *)piVar1[2];
          iVar3 = *piVar2;
          piVar1[2] = iVar3;
          if (iVar3 == 0) {
            piVar1[3] = 0;
          }
          piVar2[1] = (int)puVar6;
          *piVar2 = *piVar1;
          *piVar1 = (int)piVar2;
          if (piVar1[1] == 0) {
            piVar1[1] = (int)piVar2;
          }
          piVar1[4] = piVar1[4] + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_5);
    }
    *param_2 = 0;
  }
  else {
LAB_82e91b18:
    fn_82E91820(param_1);
  }
  return;
}

