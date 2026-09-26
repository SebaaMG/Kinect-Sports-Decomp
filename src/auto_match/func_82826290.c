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
extern int fn_82824278();
extern int fn_82824290();
extern int fn_82824308();
extern int fn_82824320();
extern int fn_82824338();
extern int fn_828243A0();
extern int fn_828243D0();
extern int fn_82824400();
extern int fn_82835208();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_82826290(int *param_1,int *param_2,int *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  iVar5 = 0;
  if ((param_4 == '\0') || (cVar4 = fn_82824278(param_1[1]), cVar4 == '\0')) {
    while ((*(int *)param_1[3] != ((int *)param_1[3])[1] &&
           ((cVar4 = fn_82824290(param_1[1]), cVar4 == '\0' ||
            (cVar4 = fn_828243D0(*(undefined4 *)(*(int *)(param_1[3] + 4) + -0xc)),
            cVar4 != '\0'))))) {
      cVar4 = fn_82824308(param_1[1]);
      if ((cVar4 != '\0') ||
         ((cVar4 = fn_82824338(param_1[1]), cVar4 != '\0' ||
          (cVar4 = fn_828243A0(param_1[1]), cVar4 != '\0')))) {
        iVar5 = *(int *)(param_1[1] + 0x10);
      }
      iVar2 = *(int *)(param_1[3] + 4);
      cVar4 = fn_82824320(*(undefined4 *)(iVar2 + -0xc));
      if (cVar4 == '\0') {
        param_1[2] = *(int *)(iVar2 + -8);
      }
      else if (*(int *)(iVar2 + -4) != 0) {
        param_1[2] = param_1[2] + iVar5;
        *(int *)(iVar2 + -4) = *(int *)(iVar2 + -4) + -1;
        goto LAB_82826340;
      }
      piVar1 = (int *)param_1[3];
      param_1[1] = *(int *)(iVar2 + -0xc);
      if (*piVar1 != piVar1[1]) {
        piVar1[1] = piVar1[1] + -0xc;
      }
    }
    cVar4 = fn_82824290(param_1[1]);
    if (cVar4 == '\0') {
      *param_2 = 0;
      *param_3 = 0;
      return;
    }
    iVar5 = **(int **)(*param_1 + 0x388) + *(int *)(param_1[1] + 4) * 0x20;
    iVar2 = *(int *)(*(int *)(param_1[3] + 4) + -8);
    iVar3 = *(int *)(iVar5 + 0x14);
    param_1[1] = iVar5;
    param_1[2] = iVar2 + iVar3;
  }
  else {
    iStack_50 = param_1[1];
    iStack_4c = param_1[2];
    cVar4 = fn_82824320();
    if (cVar4 != '\0') {
      iStack_48 = *(int *)(param_1[1] + 0x10) + -1;
    }
    fn_82835208(param_1[3],&iStack_50);
    param_1[1] = **(int **)(*param_1 + 0x388) + *(int *)param_1[1] * 0x20;
    cVar4 = fn_82824400();
    if (cVar4 == '\0') {
      param_1[2] = *(int *)(param_1[1] + 0x14) + param_1[2];
    }
LAB_82826340:
    iVar5 = param_1[1];
  }
  *param_2 = iVar5;
  *param_3 = param_1[2];
  return;
}

