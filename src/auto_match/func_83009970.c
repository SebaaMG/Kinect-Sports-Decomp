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
extern int fn_82FEC058();
extern int fn_82FEC0E0();
extern int fn_82FEC400();
extern int fn_82FEC570();
extern unsigned int lbl_832645A8;


void fn_83009970(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined1 *)(param_2 + 2) = 1;
  if (*param_2 == 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
      uVar3 = 0;
      iVar2 = iVar4;
      do {
        if (*(int *)(iVar2 + 0xc) != -1) {
          bVar1 = true;
          goto LAB_830099cc;
        }
        uVar3 = uVar3 + 0xc;
        iVar2 = uVar3 + iVar4;
      } while (uVar3 < 0x30);
    }
    bVar1 = false;
LAB_830099cc:
    if (bVar1) {
      if (param_1 == lbl_832645A8) {
        fn_82FEC058();
        return;
      }
      fn_82FEC400((double)(float)param_2[4],*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  if (*param_2 == 1) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
      uVar3 = 0;
      iVar2 = iVar4;
      do {
        if (*(int *)(iVar2 + 0xc) != -1) {
          bVar1 = true;
          goto LAB_83009a4c;
        }
        uVar3 = uVar3 + 0xc;
        iVar2 = uVar3 + iVar4;
      } while (uVar3 < 0x30);
    }
    bVar1 = false;
LAB_83009a4c:
    if (bVar1) {
      if (param_1 == lbl_832645A8) {
        fn_82FEC0E0();
        return;
      }
      fn_82FEC570((double)(float)param_2[4],*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 != *(int *)(param_1 + 0x4c)) {
    do {
      (**(code **)(**(int **)(iVar4 + 4) + 0x34))(*(int **)(iVar4 + 4),param_2);
      iVar4 = iVar4 + 8;
    } while (iVar4 != *(int *)(param_1 + 0x4c));
  }
  return;
}

