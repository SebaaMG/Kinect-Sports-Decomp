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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8265CA20();
extern int fn_828E9D28();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int iStack_38;
extern unsigned int lbl_82024D28;
extern unsigned int lbl_82024D64;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


undefined8 fn_828B0ED0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar1 = *(uint *)(&lbl_82024D64 + param_2 * 4);
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x40))(param_1,auStack_60);
  }
  else {
    (**(code **)(*param_1 + 0x38))();
  }
  uVar5 = 0;
  puStack_40 = auStack_60 + (uVar1 >> 3);
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_3c = 1;
  fn_828E9D28(auStack_50,puStack_40,1);
  if ((uVar1 & 7) != 0) {
    iVar2 = fn_828E9DA8(auStack_50);
    iVar3 = fn_828E9D90(auStack_50);
    if ((int)(uVar1 & 7) <= iVar2 - iVar3) {
      fn_828E9FF8(auStack_50,uVar1 & 7);
    }
  }
  iVar2 = *(int *)(&lbl_82024D28 + param_2 * 4);
  if (iVar2 != 0) {
    iVar3 = fn_828E9DA8(auStack_50);
    iVar4 = fn_828E9D90(auStack_50);
    if (iVar2 <= iVar3 - iVar4) {
      uVar5 = fn_828E9FF8(auStack_50,iVar2);
    }
  }
  if (iStack_38 != 0) {
    fn_8265CA20();
  }
  return uVar5;
}

