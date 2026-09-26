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
extern unsigned int *auStack_140;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D404C8();
extern int fn_82D86990();
extern int fn_82D88440();
extern int fn_82D89248();
extern int fn_82D8E600();
extern int fn_82DF8520();
extern unsigned int iStack_b4;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int lbl_821416D4;
extern unsigned int uStack_12e;
extern unsigned int uStack_12f;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_137;
extern unsigned int uStack_138;


int fn_82DF3068(int param_1,char param_2)

{
  int iVar1;
  char *pcVar2;
  undefined ***pppuVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_140 [8];
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined **appuStack_120 [22];
  int iStack_c8;
  int iStack_c4;
  int iStack_b4;
  
  fn_82D8E600(appuStack_120);
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x350);
    pppuVar3 = appuStack_120;
    *(undefined2 *)(iVar1 + 4) = 0x350;
  }
  else {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x350);
    *(undefined2 *)(iVar1 + 4) = 0x350;
    pppuVar3 = *(undefined ****)(param_1 + 8);
  }
  iVar1 = fn_82D86990(iVar1,pppuVar3,70000);
  if (param_2 != '\0') {
    fn_82D404C8(*(undefined4 *)(iVar1 + 0x80));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar5 = 0;
    do {
      fn_82D89248(iVar1,*(undefined4 *)(iVar5 + *(int *)(param_1 + 0xc)));
      pcVar2 = (char *)(**(code **)(**(int **)(iVar5 + *(int *)(param_1 + 0xc)) + 0x10))
                                 (auStack_140);
      if (*pcVar2 != '\0') {
        uStack_130 = 1;
        uStack_138 = 0;
        uStack_137 = 0;
        uStack_134 = 0;
        uStack_12f = 1;
        uStack_12e = 0;
        fn_82DF8520(&uStack_138,*(undefined4 *)(iVar5 + *(int *)(param_1 + 0xc)),iVar1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(*(int *)(param_1 + 8) + 0x58) != 0)) {
    fn_82D88440(iVar1,0,1);
  }
  appuStack_120[0] = &lbl_821416D4;
  if (iStack_b4 != 0) {
    fn_82CE4118();
  }
  iStack_b4 = 0;
  if (iStack_c4 != 0) {
    fn_82CE4118();
  }
  iStack_c4 = 0;
  if (iStack_c8 != 0) {
    fn_82CE4118();
  }
  return iVar1;
}

