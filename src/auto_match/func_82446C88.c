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
extern unsigned int *auStack_30;
extern int fn_823BE2A8();
extern int fn_82F64538();
extern unsigned int lbl_821B9B9C;


void fn_82446C88(int *param_1,undefined8 param_2,uint *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined **appuStack_1d0 [104];
  undefined1 auStack_30 [48];
  
  if (param_3 != (uint *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar4 = 0xffffffff831d7088;
    }
    else {
      uVar4 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar5 = fn_82F64538(uVar4,0xffffffff831e4e90);
    if (cVar5 != '\0') {
      lVar6 = (ulonglong)*param_3 + 0x10;
      goto LAB_82446cf4;
    }
  }
  lVar6 = 0;
LAB_82446cf4:
  fn_823BE2A8(appuStack_1d0,lVar6);
  appuStack_1d0[0] = &lbl_821B9B9C;
  puVar2 = (undefined4 *)((int)lVar6 + 0x1a0U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  pcVar1 = *(code **)(*param_1 + 0x10);
  puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  (*pcVar1)(param_1,param_2,appuStack_1d0);
  return;
}

