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
extern int fn_82529D38();
extern int fn_8255E0B0();
extern int fn_8255E3A0();
extern int fn_82574340();
extern int fn_82593438();
extern unsigned int lbl_821CC160;


void fn_825A2EE0(int param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_2 + 0x38) == 0) {
    if (*(short *)(param_2 + 0x48) != -1) {
      fn_8255E0B0(param_1);
      if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
        fn_8255E3A0(param_1,*(undefined2 *)(param_2 + 0x48),param_4);
        return;
      }
      goto LAB_825a2fc8;
    }
  }
  else if (*(int *)(param_2 + 0x38) == 1) {
    if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)
               ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0));
    }
    fn_82574340(*(undefined4 *)(param_2 + 0x4c),param_1 + 0xf0,uVar4,param_3);
    if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
      fn_82593438(param_1,*(undefined4 *)(param_2 + 0x4c),param_4);
      return;
    }
    goto LAB_825a2fc8;
  }
  uVar1 = *(uint *)(param_2 + 0x40);
  puVar2 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  if ((uVar1 & 4) != 0) {
    fn_82529D38(param_1,param_4);
    return;
  }
LAB_825a2fc8:
  uVar4 = lbl_821CC160;
  param_4[2] = lbl_821CC160;
  param_4[1] = uVar4;
  *param_4 = uVar4;
  return;
}

