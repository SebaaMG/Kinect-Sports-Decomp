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
extern int fn_8267BE38();
extern int fn_8278FD18();
extern int fn_82794B38();
extern int fn_82794B88();
extern int fn_827961E0();
extern int fn_82796390();
extern int fn_82796570();


void fn_82796740(int param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  char cVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  int aiStack_30 [12];
  
  if (*param_2 != 0) {
    if ((-1 < param_2[1]) && (bVar2 = false, param_2[1] < *(int *)(*param_2 + 4)))
    goto LAB_82796780;
  }
  bVar2 = true;
LAB_82796780:
  if (bVar2) {
    fn_82796570(param_1,param_3);
  }
  else {
    iVar1 = param_2[1];
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 * 4 + *(int *)(param_1 + 0xc) + -4);
      iVar6 = *(int *)(iVar5 + 4);
      iVar5 = *(int *)(iVar5 + 0x1c);
      if (iVar6 != 0) {
        cVar4 = fn_8278FD18();
        if (cVar4 != '\0') {
          iVar6 = iVar6 + -1;
        }
      }
      iVar6 = iVar6 + iVar5;
    }
    uVar3 = fn_82794B88(param_1);
    aiStack_30[0] = fn_827961E0(uVar3,param_3);
    fn_82796390((int *)(param_1 + 0xc),iVar1,aiStack_30);
    iVar5 = aiStack_30[0];
    if (aiStack_30[0] != 0) {
      fn_82794B38(aiStack_30[0]);
      fn_8267BE38(iVar5);
    }
    *(int *)(*(int *)(iVar1 * 4 + *(int *)(param_1 + 0xc)) + 0x1c) = iVar6;
  }
  return;
}

