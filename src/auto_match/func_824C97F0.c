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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_824C9E38();
extern int fn_824C9FB8();
extern int fn_824CA298();
extern int fn_82F63108();


undefined8 fn_824C97F0(int param_1,char *param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar4;
  ulonglong uVar3;
  uint auStack_70 [4];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  if (*param_2 == '*') {
    if (*(int *)(param_1 + 0xa8) != 0) {
      if (*(int *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(**(int **)(param_1 + 0xa8) + 4))(*(int **)(param_1 + 0xa8),param_2 + 1);
    }
LAB_824c98fc:
    uVar1 = 0;
  }
  else {
    puVar4 = (undefined4 *)(param_1 + 8);
    if (0xf < *(uint *)(param_1 + 0x1c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    iVar2 = fn_824C9FB8(param_1,puVar4);
    if (iVar2 == 0) {
LAB_824c98c0:
      fn_82230110(auStack_40,param_2);
      fn_824CA298(auStack_70,param_1 + 0x54,auStack_40);
      fn_82230300(auStack_40,1,0);
      uVar3 = (ulonglong)auStack_70[0];
      if (uVar3 == *(uint *)(param_1 + 0x58)) goto LAB_824c98fc;
    }
    else {
      fn_82230110(auStack_60,param_2);
      fn_824CA298(auStack_70,iVar2 + 0x38,auStack_60);
      fn_82230300(auStack_60,1,0);
      uVar3 = (ulonglong)auStack_70[0];
      if (uVar3 == *(uint *)(iVar2 + 0x3c)) goto LAB_824c98c0;
    }
    uVar1 = fn_824C9E38(param_1,uVar3 + 0x28);
  }
  return uVar1;
}

