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
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_82720090();
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82010394;


void fn_82720798(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int aiStack_30 [2];
  undefined **ppuStack_28;
  int iStack_24;
  int iStack_20;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_30,uVar4,uVar1,0xffffffffffffffff,0);
    iVar2 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 8) != 0) {
      iStack_24 = *(int *)(param_1 + 0x1c) + -1;
      ppuStack_28 = &lbl_82010394;
      iStack_20 = (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc) >> 4) + *(int *)(iVar2 + 0x1c) * 0x20
                  + -0x24;
      fn_82720090(iVar2,*(int *)(param_1 + 8),aiStack_30,&ppuStack_28);
      ppuStack_28 = &lbl_8200C4D4;
    }
    puVar3 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar3);
    *puVar3 = 0;
    lVar5 = (ulonglong)*(uint *)(aiStack_30[0] + 8) - 1;
    *(int *)(aiStack_30[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_30[0]);
    }
  }
  return;
}

