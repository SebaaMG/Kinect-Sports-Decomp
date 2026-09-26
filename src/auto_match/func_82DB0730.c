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
extern int fn_82CE5410();
extern int fn_83089E78();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack_38;


void fn_82DB0730(longlong param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  
  iStack_40 = 0;
  iStack_3c = 0;
  uStack_38 = 0x80000000;
  fn_83089E78(param_1 + 0x10,&iStack_40);
  iVar6 = 0;
  if (0 < iStack_3c) {
    iVar9 = 0;
    do {
      pcVar5 = *(char **)(iVar9 + iStack_40);
      pcVar1 = *(code **)((uint)(byte)pcVar5[1] * 0x50 + *param_2 + 0x16c8);
      if (pcVar1 != (code *)0x0) {
        iVar2 = *(int *)(pcVar5 + 0x10);
        iVar3 = *(int *)(pcVar5 + 0x14);
        iVar8 = *(char *)(iVar2 + 0x10) + iVar2;
        if (*(char *)(iVar8 + 0xe8) == '\x05') {
          uVar4 = *(undefined4 *)(*(char *)(iVar3 + 0x10) + iVar3 + 0xcc);
        }
        else {
          uVar4 = *(undefined4 *)(iVar8 + 0xcc);
        }
        pcVar7 = pcVar5 + 0x30;
        if (*pcVar5 != '\x04') {
          pcVar7 = pcVar5 + 0x20;
        }
        (*pcVar1)(pcVar5,pcVar7,iVar2,iVar3,param_2,*(undefined4 *)(pcVar5 + 8),uVar4);
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 8;
    } while (iVar6 < iStack_3c);
  }
  iVar6 = fn_82CE5410();
  iStack_3c = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
              (*(int **)(iVar6 + 0x10),iStack_40,uStack_38 & 0x3fffffff,8);
  }
  return;
}

