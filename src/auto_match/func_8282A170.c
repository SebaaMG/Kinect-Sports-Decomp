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
extern int fn_82824308();
extern int fn_82824338();
extern int fn_828243A0();
extern int fn_828243B8();
extern int fn_828243D0();
extern int fn_828299A8();
extern int fn_8282A0E8();


undefined8 fn_8282A170(undefined8 param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int aiStack_50 [2];
  int aiStack_48 [18];
  
  iVar1 = param_4[1];
  iVar2 = *(int *)(*param_4 + 8);
  iVar3 = **(int **)(iVar2 + 0x388);
  cVar4 = fn_828243A0(param_2);
  if (((cVar4 == '\0') || (param_2[6] != 0)) && (cVar4 = fn_828243B8(param_2), cVar4 == '\0')) {
    cVar4 = fn_828243D0(param_2);
    if (cVar4 != '\0') {
      while ((cVar4 = fn_82824308(param_2), cVar4 == '\0' &&
             (cVar4 = fn_82824338(param_2), cVar4 == '\0'))) {
        param_2 = (int *)(*param_2 * 0x20 + **(int **)(iVar2 + 0x388));
      }
    }
    cVar4 = fn_82824338(param_2);
    if (cVar4 == '\0') {
      return 1;
    }
    uVar5 = 0;
    if (param_4[3] != 0) {
      do {
        piVar6 = (int *)(*(int *)(iVar1 * 0x20 + iVar3 + 0x10) * uVar5 + param_3);
        cVar4 = fn_8282A0E8(iVar2,piVar6);
        if (((cVar4 != '\0') && (aiStack_48[0] = *piVar6, aiStack_48[0] != 0)) &&
           (fn_828299A8(aiStack_48,iVar2,aiStack_50),
           *(int *)(aiStack_50[0] + 0xc) == *(int *)(iVar2 + 0x3d8))) {
          *(undefined1 *)(*param_4 + 0x34) = 1;
          return 0;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)param_4[3]);
    }
  }
  return 0;
}

