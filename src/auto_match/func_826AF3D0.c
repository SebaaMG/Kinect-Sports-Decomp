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
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_826828D8();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696378();
extern int fn_82696610();
extern int fn_826BD868();
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int iStack_7c;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


ulonglong fn_826AF3D0(int param_1,int *param_2,int *param_3,char *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piStack_80;
  int iStack_7c;
  byte bStack_78;
  undefined **ppuStack_70;
  char *pcStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1);
  if (((uVar2 & 0xff) == 0) || (*param_4 != '\t')) {
    if (*param_4 == '\f') {
      fn_82696378(&piStack_80,param_4);
      if (piStack_80 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        puVar5 = (uint *)(param_1 + 8);
        uVar4 = *(int *)(param_1 + 8) + 0x10;
        *(uint *)(param_1 + 8) = uVar4;
        if (*(uint *)(param_1 + 0x10) <= uVar4) {
          fn_826826A8(puVar5);
        }
        puVar1 = (undefined1 *)*puVar5;
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 5;
          iVar3 = *param_3;
          *(int *)(puVar1 + 4) = iVar3;
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        }
        iVar3 = fn_826BD868(param_2);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        }
        fn_826959C8(param_4);
        *param_4 = '\0';
        piStack_68 = (int *)(iVar3 + 0x68);
        if (iVar3 == 0) {
          piStack_68 = param_2;
        }
        uVar2 = 1;
        ppuStack_70 = &lbl_8200579C;
        uStack_5c = 0;
        uStack_64 = 0;
        iStack_50 = ((int)(*puVar5 - *(int *)(param_1 + 0xc)) >> 4) +
                    *(int *)(param_1 + 0x1c) * 0x20 + -0x20;
        uStack_60 = 0;
        uStack_54 = 1;
        pcStack_6c = param_4;
        iStack_58 = param_1;
        (**(code **)(*piStack_80 + 0x28))(piStack_80,&ppuStack_70,iStack_7c,0);
        fn_826828D8(&ppuStack_70);
        fn_82696330(*puVar5);
        uVar4 = *puVar5;
        *puVar5 = uVar4 - 0x10;
        if (uVar4 - 0x10 < *(uint *)(param_1 + 0xc)) {
          fn_826827F8(puVar5);
        }
        if (iVar3 != 0) {
          fn_8267C498(iVar3);
        }
      }
      if (((bStack_78 & 2) == 0) && (piStack_80 != (int *)0x0)) {
        fn_826824B0();
      }
      piStack_80 = (int *)0x0;
      if (((bStack_78 & 1) == 0) && (iStack_7c != 0)) {
        fn_826824B0();
      }
    }
  }
  else {
    iVar3 = fn_826BD868(param_2);
    if (iVar3 != 0) {
      param_2 = (int *)(iVar3 + 0x68);
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    fn_82696610(param_4,param_1,param_2,param_4);
    if (iVar3 != 0) {
      fn_8267C498(iVar3);
    }
  }
  return uVar2;
}

