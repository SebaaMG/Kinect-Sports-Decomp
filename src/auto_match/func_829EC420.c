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
extern int fn_829EC340();
extern int fn_82A28568();
extern int fn_82F664B0();
extern unsigned int lbl_832179FC;


longlong fn_829EC420(char *param_1,int param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  int iVar3;
  longlong lVar2;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  
  if (((param_2 != 0) && (param_3 != 0)) && (iVar3 = fn_829EC340(), iVar3 == 0)) {
    uVar6 = 0;
    piVar4 = (int *)0x83218a3c;
    do {
      if ((piVar4[-1] == 0) && (pcVar5 = param_1, *piVar4 == 0)) {
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar3 = (int)pcVar5 - (int)param_1;
        lVar2 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,iVar3 + 1);
        if (lVar2 != 0) {
          fn_82F664B0(lVar2,iVar3,param_1);
          iVar3 = uVar6 * 0x20;
          *(int *)(iVar3 + -0x7cde75c8) = (int)lVar2;
          *(longlong *)(iVar3 + -0x7cde75b8) = param_3;
          *(int *)(iVar3 + -0x7cde75b0) = param_2;
          *(undefined4 *)(iVar3 + -0x7cde75c0) = param_4;
          *(int *)(iVar3 + -0x7cde75c4) = *(int *)(iVar3 + -0x7cde75c4) + 1;
          return lVar2;
        }
        return 0;
      }
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar6 < 10);
  }
  return 0;
}

