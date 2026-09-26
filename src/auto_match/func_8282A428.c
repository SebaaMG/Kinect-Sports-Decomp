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
extern int fn_82824308();
extern int fn_82824338();
extern int fn_828243A0();
extern int fn_828243B8();
extern int fn_828243D0();
extern int fn_8282A0E8();
extern int fn_8282A380();
extern unsigned int iStack_54;
extern unsigned int iStack_58;


undefined8 fn_8282A428(undefined8 param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  undefined1 auStack_60 [8];
  int iStack_58;
  int iStack_54;
  
  iVar1 = *param_4;
  iVar2 = param_4[1];
  iVar3 = *(int *)(iVar1 + 8);
  iVar4 = **(int **)(iVar3 + 0x388);
  cVar5 = fn_828243A0(param_2);
  if (((cVar5 == '\0') || (param_2[6] != 0)) && (cVar5 = fn_828243B8(param_2), cVar5 == '\0')) {
    cVar5 = fn_828243D0(param_2);
    if (cVar5 != '\0') {
      while ((cVar5 = fn_82824308(param_2), cVar5 == '\0' &&
             (cVar5 = fn_82824338(param_2), cVar5 == '\0'))) {
        param_2 = (int *)(*param_2 * 0x20 + **(int **)(iVar3 + 0x388));
      }
    }
    cVar5 = fn_82824338(param_2);
    if (cVar5 == '\0') {
      return 1;
    }
    uVar6 = 0;
    if (param_4[3] != 0) {
      do {
        piVar7 = (int *)(*(int *)(iVar2 * 0x20 + iVar4 + 0x10) * uVar6 + param_3);
        cVar5 = fn_8282A0E8(iVar3,piVar7);
        if (cVar5 != '\0') {
          iStack_58 = *piVar7;
          iStack_54 = 0;
          if (iStack_58 != 0) {
            fn_8282A380(&iStack_58,iVar3,iVar1,auStack_60);
            *piVar7 = iStack_54;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)param_4[3]);
    }
  }
  return 0;
}

