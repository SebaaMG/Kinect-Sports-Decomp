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
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826B14D8();
extern int fn_826C3560();
extern unsigned int iStack_74;
extern unsigned int iStack_78;


void fn_826BF638(undefined8 param_1,int param_2,uint *param_3,int *param_4,undefined8 param_5)

{
  int iVar2;
  ulonglong uVar1;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int aiStack_80 [2];
  int iStack_78;
  int iStack_74;
  byte bStack_70;
  undefined1 auStack_60 [96];
  
  iVar2 = fn_826B14D8(*param_3,7);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
  }
  iVar4 = 0;
  if (*param_4 != 0) {
    piVar5 = param_4;
    do {
      uVar1 = fn_8267B890(*(undefined4 *)(*param_3 + 0x288),0x34,0);
      if ((uVar1 & 0xffffffff) == 0) {
        iStack_78 = 0;
      }
      else {
        iStack_78 = fn_826C3560(uVar1,param_3,iVar2,piVar5[1]);
      }
      bStack_70 = 0;
      iStack_74 = 0;
      fn_82695750(auStack_60,&iStack_78);
      fn_82681728(aiStack_80,(ulonglong)*param_3 + 0x254,*piVar5);
      (**(code **)(*(int *)(param_2 + 0x10) + 0x28))
                ((int *)(param_2 + 0x10),param_3,aiStack_80,auStack_60,param_5);
      lVar3 = (ulonglong)*(uint *)(aiStack_80[0] + 8) - 1;
      *(int *)(aiStack_80[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_80[0]);
      }
      fn_82696330(auStack_60);
      if (((bStack_70 & 2) == 0) && (iStack_78 != 0)) {
        fn_826824B0();
      }
      iStack_78 = 0;
      if (((bStack_70 & 1) == 0) && (iStack_74 != 0)) {
        fn_826824B0();
      }
      iVar4 = iVar4 + 1;
      iStack_74 = 0;
      piVar5 = param_4 + iVar4 * 2;
    } while (param_4[iVar4 * 2] != 0);
  }
  if (iVar2 != 0) {
    fn_826824B0(iVar2);
  }
  return;
}

