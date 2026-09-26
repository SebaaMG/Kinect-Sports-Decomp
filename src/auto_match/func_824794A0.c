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
extern int fn_82484EE0();
extern int fn_82485850();
extern unsigned int lbl_821CC160;


void fn_824794A0(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  fn_82484EE0((double)lbl_821CC160,*(undefined4 *)(param_1 + 0x24));
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    iVar3 = *(int *)(param_1 + 0x24);
    pcVar4 = (char *)(param_5 + -1);
    pcVar5 = (char *)(iVar3 + 0x34);
    do {
      if ((char *)(iVar3 + 0x134U) <= pcVar5) break;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == (char *)(iVar3 + 0x134)) {
      pcVar5[-1] = '\0';
    }
    iVar3 = *(int *)(param_1 + 0x24);
    pcVar5 = (char *)(iVar3 + 0x134);
    pcVar4 = "";
    do {
      bVar1 = pcVar5 == (char *)(iVar3 + 0x234U);
      if ((char *)(iVar3 + 0x234U) <= pcVar5) goto LAB_82479550;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    bVar1 = pcVar5 == (char *)(iVar3 + 0x234);
LAB_82479550:
    if (bVar1) {
      pcVar5[-1] = '\0';
    }
    fn_82485850(*(undefined4 *)(param_1 + 0x24),0xffffffff82196582);
    iVar3 = *(int *)(param_1 + 0x24);
    pcVar4 = "";
    pcVar5 = (char *)(iVar3 + 0x334);
    do {
      bVar1 = pcVar5 == (char *)(iVar3 + 0x434U);
      if ((char *)(iVar3 + 0x434U) <= pcVar5) goto LAB_82479594;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    bVar1 = pcVar5 == (char *)(iVar3 + 0x434);
LAB_82479594:
    if (bVar1) {
      pcVar5[-1] = '\0';
    }
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  return;
}

