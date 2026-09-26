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
extern int fn_82522ED8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_821954CC;
extern unsigned int lbl_82195510;
extern unsigned int lbl_82195514;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C080C;
extern unsigned int lbl_831C0810;
extern unsigned int lbl_831C0814;
extern unsigned int lbl_831C0818;
extern unsigned int lbl_831C081C;
extern unsigned int lbl_831C0820;
extern unsigned int lbl_831C0824;
extern unsigned int lbl_831C0828;
extern unsigned int lbl_831C082C;
extern unsigned int lbl_831C0830;
extern unsigned int lbl_831C0834;
extern unsigned int lbl_831C0838;
extern unsigned int lbl_831C083C;
extern unsigned int lbl_831C0840;
extern unsigned int lbl_831C0844;
extern int (*lbl_8326AF34)();


void fn_825272C0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x88c);
  iVar4 = param_1 + 0x85c;
  while (-1 < iVar3) {
    if (*(int *)(*(int *)(param_1 + 0x88c) * 0xc + iVar4) != 0) {
      fn_82522ED8();
      *(undefined4 *)(*(int *)(param_1 + 0x88c) * 0xc + iVar4) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x88c) * 0xc + iVar4;
    if (*(int *)(iVar3 + 4) != 0) {
      fn_82522ED8();
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x88c) + -1;
    *(int *)(param_1 + 0x88c) = iVar3;
  }
  piVar2 = *(int **)(param_1 + 0x304);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[1];
    if (*piVar2 != 0) {
      *(int **)(*piVar2 + 4) = piVar1;
    }
    if ((int *)piVar2[1] != (int *)0x0) {
      *(int *)piVar2[1] = *piVar2;
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    fn_82522ED8();
    piVar2 = piVar1;
  }
  lbl_831C0828 = 0;
  lbl_831C0844 = 1;
  lbl_831C080C = lbl_821CC160;
  lbl_831C0810 = lbl_821CC160;
  lbl_831C0814 = lbl_821CC160;
  lbl_831C0818 = lbl_821CC160;
  lbl_831C081C = lbl_82191FCC;
  lbl_831C0820 = lbl_821CC160;
  lbl_831C0824 = lbl_821CC160;
  lbl_831C082C = lbl_82195510;
  lbl_831C0830 = lbl_82195514;
  lbl_831C0834 = lbl_82192F70;
  lbl_831C0838 = lbl_821954CC;
  lbl_831C083C = lbl_8218E8FC;
  lbl_831C0840 = lbl_8218E8E8;
  if (lbl_8326AF34 != (code *)0x0) {
    (*lbl_8326AF34)();
  }
  return;
}

