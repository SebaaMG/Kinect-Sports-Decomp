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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82279CA0();
extern int fn_8228ED20();
extern int fn_8229E090();
extern int fn_8249ABC0();
extern int fn_82512C30();
extern int fn_82514888();
extern int fn_825200A8();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D12D0;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;
extern unsigned int lbl_831D450C;
extern unsigned int lbl_832765BC;
extern unsigned int lbl_8329618C;
extern unsigned int uRam832766f1;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82283CC8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [96];
  
  if (param_1 == 2) {
    if (*(int *)(param_2 + 0x144) != 0) {
      *(undefined4 *)(param_2 + 0x144) = 0;
    }
  }
  else {
    if (param_1 == 0) {
      if (lbl_8329618C == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(lbl_8329618C + 4);
      }
      if ((((iVar1 != 0) &&
           (iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0xd54) + 0x14) + 0x2c), iVar1 != 0)) &&
          (*(undefined4 *)(iVar1 + 0x6c) = 1, *(int *)(iVar1 + 0x2c) != 0)) &&
         (*(int *)(iVar1 + 0x34) == 0)) {
        fn_8228ED20();
        *(undefined4 *)(iVar1 + 0x34) = 1;
        *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
      }
      if (lbl_8329618C == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(lbl_8329618C + 4);
      }
      iVar1 = fn_825200A8(0xffffffff8326597c,uVar4);
      if (iVar1 == 0) {
        if (lbl_832765BC == 0) {
          lbl_831D12D0 = 1;
        }
      }
      else {
        uRam832766f1 = 0;
      }
      iVar1 = fn_8249ABC0();
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      *(undefined4 *)(iVar1 + 0x80) = 1;
      *(undefined4 *)(iVar1 + 0x7c) = 1;
      fn_82514888(&uStack_70);
      piVar2 = (int *)fn_82512C30();
      if (*piVar2 == 0) {
        uVar3 = 0xffffffff821a8ad0;
      }
      else {
        uVar3 = 0xffffffff821a8ac4;
      }
      fn_82864988(auStack_60,uVar3);
      auStack_80[0] = fn_828647D8();
      fn_82864898(auStack_60);
      fn_82536590(auStack_80,0);
      lbl_831D44F8 = lbl_821CC160;
      lbl_831D450C = 0xff;
      lbl_831D4508 = 0;
    }
    else if (param_1 == 1) {
      fn_82279CA0(param_2,0);
    }
    if (*(int *)(param_2 + 0x144) != 0) {
      fn_8229E090(*(int *)(param_2 + 0x144),0,1);
      *(undefined4 *)(param_2 + 0x144) = 0;
    }
  }
  return;
}

