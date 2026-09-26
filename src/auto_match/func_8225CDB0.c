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
extern char cRam832766f3;
extern int fn_8225D388();
extern int fn_8225D6A0();
extern int fn_8225D8B8();
extern int fn_823AB478();
extern int fn_825123E8();
extern int fn_825129C8();
extern int fn_82514888();
extern int fn_82521B20();
extern int fn_828EA608();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832767C8;
extern unsigned int lbl_8329618C;
extern unsigned int uRam832659d8;
extern unsigned int uRam832766f1;
extern unsigned int uRam832766f2;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8225CDB0(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar2;
  int iVar5;
  ulonglong uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    return;
  }
  if (lbl_8329618C == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar5 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 1;
  if ((param_2 == 0) || (bVar1 = true, param_2 != lbl_83265988)) {
    bVar1 = false;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      uVar3 = fn_825129C8(0);
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x70) = 1;
    uRam832766f1 = 0;
    if (cRam832766f3 == '\0') {
      uRam832766f2 = 1;
    }
    fn_82521B20(lbl_832767C8);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    fn_82514888(&uStack_50);
    fn_8225D6A0(param_1,1);
    if (*(int *)(param_1 + 0x68) == 0) {
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x68) = 1;
      do {
        if ((uVar6 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x58)) {
          fn_8225D388(param_1,uVar6);
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < 8);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    if (((param_2 != 0) && (fn_8225D8B8(param_1,param_2), *(char *)(param_2 + 0xd8) != '\0'))
       && (cVar4 = fn_828EA608(param_2), cVar4 != '\0')) {
      uVar2 = fn_823AB478(param_2);
      fn_8225D388(param_1,uVar2);
    }
    if (!bVar1) goto LAB_8225cf50;
  }
  if (lbl_83265988 != 0) {
    fn_825123E8();
    uRam832659d8 = 1;
    fn_82521B20(lbl_832767C8);
  }
LAB_8225cf50:
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

