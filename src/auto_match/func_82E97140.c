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
extern unsigned int *auStack_340;
extern int fn_82E96A58();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern unsigned int iStack_34c;


void fn_82E97140(int param_1,longlong param_2,longlong param_3,int *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 in_stack_0000005c;
  uint *in_stack_0000007c;
  uint *in_stack_00000084;
  int *in_stack_0000008c;
  int in_stack_00000094;
  int iStack_34c;
  undefined1 auStack_340 [832];
  
  uVar1 = *in_stack_0000007c;
  uVar2 = *in_stack_00000084;
  fn_82E96A58();
  if (*(int *)(param_1 + 0x6d74) != 0) {
    if (*param_4 == 0) {
      uVar14 = (ulonglong)(uint)param_4[2];
      uVar13 = (ulonglong)(uint)param_4[3];
    }
    else {
      uVar11 = uVar1 - param_4[2];
      uVar10 = uVar2 - param_4[3];
      uVar9 = uVar1 - param_4[4];
      uVar3 = (int)uVar11 >> 0x1f;
      uVar8 = uVar2 - param_4[5];
      uVar4 = (int)uVar10 >> 0x1f;
      uVar5 = (int)uVar9 >> 0x1f;
      uVar6 = (int)uVar8 >> 0x1f;
      uVar13 = (ulonglong)(uint)param_4[5];
      uVar14 = (ulonglong)(uint)param_4[4];
      if ((int)(((uVar11 ^ uVar3) - uVar3) + ((uVar10 ^ uVar4) - uVar4)) <
          (int)(((uVar9 ^ uVar5) - uVar5) + ((uVar8 ^ uVar6) - uVar6))) {
        uVar13 = (ulonglong)(uint)param_4[3];
        uVar14 = (ulonglong)(uint)param_4[2];
      }
    }
    param_3 = (longlong)((int)uVar2 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
              (longlong)((int)uVar1 >> 2) + param_3;
    (**(code **)(param_1 + 0xa5c))
              (param_3,*(int *)(param_1 + 0x564),auStack_340,0x10,uVar1 & 3,uVar2 & 3,
               *(undefined4 *)(param_1 + 0x618));
    fn_82E9AC18(param_1,param_2,0x10,auStack_340,0x10,8,8,param_5);
    if (in_stack_00000094 == 0) {
      (**(code **)(param_1 + 0xa5c))
                (((ulonglong)*(uint *)(param_1 + 0x564) & 0x1fffffff) * 8 + param_3,
                 *(uint *)(param_1 + 0x564),auStack_340,0x10,uVar1 & 3,uVar2 & 3,
                 *(undefined4 *)(param_1 + 0x618));
      fn_82E9AC18(param_1,param_2 + 0x80,0x10,auStack_340,0x10,8,8,param_5);
    }
    else {
      (**(code **)(param_1 + 0xa5c))(param_3 + 8);
      fn_82E9AC18(param_1,param_2 + 8,0x10,auStack_340,0x10,8,8,param_5);
    }
    iVar7 = fn_82E9B140(param_1,uVar1 - uVar14,uVar2 - uVar13,in_stack_0000005c,0);
    iVar12 = iVar7 + 2;
    if (*param_4 != 0) {
      iVar12 = iVar7 + 3;
    }
    iStack_34c = *(int *)(param_1 + 0x6f14) * iVar12;
  }
  *in_stack_0000007c = uVar1;
  *in_stack_00000084 = uVar2;
  *in_stack_0000008c = iStack_34c;
  return;
}

