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
extern unsigned int *auStack_50;
extern int fn_823AA370();
extern int fn_823AAD90();
extern int fn_828D45F8();
extern int fn_82C00C90();
extern unsigned int lbl_82002AE0;


void fn_82C00FB8(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 auStack_50 [40];
  
  puVar7 = auStack_50;
  auStack_50[0] = 0;
  lVar8 = 8;
  do {
    puVar7 = puVar7 + 1;
    *puVar7 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar5 = (**(code **)(*param_1 + 0x54))(param_1,4);
  if (-1 < iVar5) {
    uVar2 = fn_823AA370(param_2);
    uVar3 = fn_828D45F8(param_2);
    uVar4 = fn_823AAD90(param_2);
    iVar5 = fn_82C00C90(param_1,uVar4,uVar3,uVar2,auStack_50);
    if (-1 < iVar5) {
      piVar1 = (int *)param_1[0xe];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x48))(piVar1);
        param_1[0xe] = 0;
        bVar6 = -(param_1[0xa5] != 0) & 0x10;
        (**(code **)(*(int *)param_1[0xa4] + 0x20))
                  ((double)lbl_82002AE0,(int *)param_1[0xa4],param_1 + 0xe,auStack_50,bVar6 | 2,
                   bVar6,0xffffffff83175b58,0,0);
      }
    }
  }
  return;
}

