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
extern unsigned int *auStack_6c;
extern int fn_82758D20();
extern int fn_8275EC80();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82758E40(int param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [32];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  fn_82758D20(param_1,0);
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1[0x15] != 0) || (bVar3 = true, piVar1[0x18] != 0)) {
    bVar3 = false;
  }
  if (!bVar3) {
    if ((*(byte *)(piVar1 + 9) & 0x10) == 0) {
      uStack_a0 = lbl_821AAD20;
      uStack_9c = lbl_821AAD20;
      uStack_98 = lbl_821AAD20;
      uStack_94 = lbl_821AAD20;
      (**(code **)(*piVar1 + 0x14))(piVar1,&uStack_a0);
      iVar2 = *(int *)(param_1 + 8);
      *(undefined4 *)(iVar2 + 4) = uStack_a0;
      *(undefined4 *)(iVar2 + 8) = uStack_9c;
      *(undefined4 *)(iVar2 + 0xc) = uStack_98;
      *(undefined4 *)(iVar2 + 0x10) = uStack_94;
      *(byte *)(*(int *)(param_1 + 8) + 0x24) = *(byte *)(*(int *)(param_1 + 8) + 0x24) | 0x10;
    }
    uStack_84 = *param_3;
    uStack_80 = param_3[1];
    uStack_7c = param_3[2];
    uStack_78 = param_3[3];
    uStack_74 = param_3[4];
    uStack_8c = 0;
    uStack_70 = param_3[5];
    uStack_88 = 0;
    uStack_90 = param_2;
    fn_82F68CC0(auStack_6c,param_4,0x20);
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_4c = param_5;
    (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),&uStack_90);
    fn_8275EC80(*(undefined4 *)(param_1 + 8),&uStack_90,param_6,0);
  }
  return;
}

