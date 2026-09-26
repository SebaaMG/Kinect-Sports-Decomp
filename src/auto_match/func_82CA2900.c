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
extern int fn_82C53960();
extern int fn_82C53970();
extern int fn_82CA2878();
extern int fn_82CD31A8();
extern int fn_82F68CC0();


int fn_82CA2900(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar4 = 0;
  if ((((((param_4 < 0) || (param_5 < 0)) || (param_8 < 0)) ||
       (((in_stack_00000054 < 0 || (param_6 < 0)) ||
        ((param_7 < 0 ||
         ((*(uint *)(param_2 + 4) < (uint)(param_4 + param_8) ||
          (uVar1 = (int)*(uint *)(param_2 + 8) >> 0x1f,
          (*(uint *)(param_2 + 8) ^ uVar1) - uVar1 < (uint)(param_5 + in_stack_00000054))))))))) ||
      (*(uint *)(param_3 + 4) < (uint)(param_6 + param_8))) ||
     (uVar1 = (int)*(uint *)(param_3 + 8) >> 0x1f,
     (*(uint *)(param_3 + 8) ^ uVar1) - uVar1 < (uint)(param_7 + in_stack_00000054))) {
    *param_1 = 1;
  }
  else {
    if ((*(int *)(param_2 + 0x10) == 0) && (*(short *)(param_2 + 0xe) == 8)) {
      lVar4 = 0x400;
    }
    else if (*(int *)(param_2 + 0x10) == 3) {
      lVar4 = 0xc;
    }
    iVar2 = fn_82C53960(lVar4 + 0x28,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      return 0;
    }
    fn_82F68CC0(iVar2,param_2,lVar4 + 0x28);
    if ((*(int *)(param_3 + 0x10) == 0) && (*(short *)(param_3 + 0xe) == 8)) {
      uVar5 = 0x400;
    }
    else {
      uVar5 = -(ulonglong)(*(int *)(param_3 + 0x10) == 3) & 0xc;
    }
    iVar3 = fn_82C53960(uVar5 + 0x28,0);
    if (iVar3 == 0) {
      *param_1 = 2;
      fn_82C53970(iVar2);
      return 0;
    }
    fn_82F68CC0(iVar3,param_3,uVar5 + 0x28);
    *(int *)(iVar2 + 4) = param_8;
    *(int *)(iVar3 + 4) = param_8;
    iVar6 = in_stack_00000054;
    if (*(int *)(param_2 + 8) < 1) {
      iVar6 = -in_stack_00000054;
    }
    *(int *)(iVar2 + 8) = iVar6;
    if (*(int *)(param_3 + 8) < 1) {
      in_stack_00000054 = -in_stack_00000054;
    }
    *(int *)(iVar3 + 8) = in_stack_00000054;
    iVar6 = fn_82CA2878(param_1,iVar2,iVar3,in_stack_0000005c);
    fn_82C53970(iVar2);
    fn_82C53970(iVar3);
    if (*param_1 == 0) {
      *(int *)(iVar6 + 0x390c) = param_4;
      *(undefined4 *)(iVar6 + 0x38f8) = 1;
      *(int *)(iVar6 + 0x3910) = param_5;
      *(int *)(iVar6 + 0x3914) = param_6;
      *(int *)(iVar6 + 0x3918) = param_7;
      *(int *)(iVar6 + 0x3920) = in_stack_00000064;
      *(int *)(iVar6 + 0x3924) = in_stack_0000006c;
      *(int *)(iVar6 + 0x3928) = in_stack_00000074;
      if (((in_stack_00000064 == 0) || (in_stack_0000006c == 0)) || (in_stack_00000074 == 0)) {
        in_stack_00000064 = *(int *)(param_2 + 4);
      }
      fn_82CD31A8(iVar6,in_stack_00000064,*(undefined4 *)(param_2 + 8),
                        *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      return iVar6;
    }
    if (iVar6 != 0) {
      fn_82C53970(iVar6);
      return 0;
    }
  }
  return 0;
}

