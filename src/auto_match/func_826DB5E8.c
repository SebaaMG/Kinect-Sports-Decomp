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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_826E56B8();
extern unsigned int lbl_8200C6C0;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined4 * fn_826DB5E8(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  fn_826E56B8(param_1,param_2,0x20003);
  param_1[5] = 0;
  *param_1 = &lbl_8200C6C0;
  param_1[6] = 0x90000;
  param_1[7] = 0;
  if (param_3[7] != 0) {
    fn_8267C4C8();
  }
  iVar1 = param_3[7];
  param_1[8] = iVar1;
  param_1[0xb] = param_4;
  piVar3 = *(int **)(iVar1 + 0xc);
  param_1[9] = piVar3;
  uVar2 = (**(code **)(*piVar3 + 0x44))();
  uVar2 = (uVar2 & 0xffffffff) >> 4 & 1;
  *(char *)(param_1 + 10) = (char)uVar2;
  piVar3 = *(int **)(*(int *)(param_2 + 8) + 0x28);
  if ((piVar3 == (int *)0x0) || (uVar2 != 0)) {
    param_1[0xc] = 0;
  }
  else {
    uStack_58 = *(undefined4 *)(param_2 + 0x20);
    uStack_44 = 1;
    uStack_54 = *(undefined4 *)(param_2 + 0xc);
    uStack_70 = 1;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_6c = 1;
    uStack_64 = 1;
    uStack_48 = 0;
    uStack_5c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    if ((*(char *)(param_2 + 0x44) == '\0') && (*(int *)(param_2 + 0x18) == 0)) {
      uStack_44 = 0;
    }
    uStack_48 = (**(code **)(*param_3 + 0x48))(param_3);
    piVar3 = (int *)(**(code **)(*piVar3 + 8))
                              (piVar3,param_1 + 6,*(undefined4 *)(*(int *)(param_2 + 8) + 0x10),
                               &uStack_70);
    if (param_1[7] != 0) {
      fn_8267C498(param_1[7]);
    }
    param_1[7] = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3,param_1[8]);
    puVar4 = (undefined4 *)fn_8267B890(lbl_831E7E64,4,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
    }
    param_1[0xc] = puVar4;
  }
  return param_1;
}

