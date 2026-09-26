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
extern int fn_82D04B20();
extern int fn_82D04C78();
extern int fn_82D056B8();


void fn_82E04BC8(int param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  
  fn_82D04B20(param_2);
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar9 = 0;
    do {
      puVar8 = (uint *)(iVar9 + *(int *)(param_1 + 8));
      pcVar3 = (char *)(*puVar8 & 0xfffffffe);
      pcVar4 = (char *)(puVar8[1] & 0xfffffffe);
      cVar2 = *pcVar3;
      pcVar1 = pcVar3;
      while (cVar2 != '\0') {
        if (((cVar2 < '!') || (cVar2 == '=')) || (cVar2 == ';')) {
          bVar5 = true;
          goto LAB_82e04c70;
        }
        pcVar1 = pcVar1 + 1;
        cVar2 = *pcVar1;
      }
      bVar5 = false;
LAB_82e04c70:
      uVar6 = 0xffffffff8200c4f8;
      if (!bVar5) {
        uVar6 = 0xffffffff82196582;
      }
      cVar2 = *pcVar4;
      while (cVar2 != '\0') {
        if (((cVar2 < '!') || (cVar2 == '=')) || (cVar2 == ';')) {
          bVar5 = true;
          goto LAB_82e04cc4;
        }
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar4;
      }
      bVar5 = false;
LAB_82e04cc4:
      uVar7 = 0xffffffff8200c4f8;
      if (!bVar5) {
        uVar7 = 0xffffffff82196582;
      }
      fn_82D056B8(param_2,0xffffffff82149bb4,uVar6,pcVar3,uVar6,uVar7);
      if (iVar10 < *(int *)(param_1 + 0xc) + -1) {
        fn_82D04C78(param_2,0xffffffff82149bc4);
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 8;
    } while (iVar10 < *(int *)(param_1 + 0xc));
  }
  return;
}

