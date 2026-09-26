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
extern int fn_82D899A0();
extern int fn_82D94470();
extern int fn_82D94918();


void fn_82DF2E48(int param_1,int param_2,ulonglong param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 auStack_30 [48];
  
  lVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    puVar2 = *(uint **)(param_1 + 8);
    do {
      if ((ulonglong)*puVar2 == (param_3 & 0xffffffff)) goto LAB_82df2e94;
      lVar4 = lVar4 + 1;
      puVar2 = puVar2 + 1;
    } while ((int)lVar4 < *(int *)(param_1 + 0xc));
  }
  lVar4 = -1;
LAB_82df2e94:
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    puVar2 = *(uint **)(param_2 + 8);
    do {
      if ((ulonglong)*puVar2 == (param_3 & 0xffffffff)) {
        if (iVar3 != -1) {
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(param_2 + 0xc));
  }
  if ((int)lVar4 == -1) {
    return;
  }
  if (*(char *)(param_2 + 0x40) == '\0') {
    pcVar1 = (char *)fn_82D899A0(auStack_30,param_3);
    uVar5 = 0;
    if (*pcVar1 == '\0') goto LAB_82df2f0c;
  }
  uVar5 = 1;
LAB_82df2f0c:
  *(undefined1 *)(param_2 + 0x40) = uVar5;
  fn_82D94918(param_2,param_3);
  fn_82D94470(param_1,lVar4);
  return;
}

