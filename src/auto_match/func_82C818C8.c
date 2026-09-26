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
extern int fn_82C800C8();
extern int fn_82C80520();
extern int fn_82C814F8();
extern int fn_82C815A0();
extern unsigned int iStack00000014;


undefined8
fn_82C818C8(int param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  short sVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iStack00000014;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  
  uVar9 = *(uint *)(param_2 + 0x10);
  uVar6 = (ulonglong)uVar9;
  if (((((uVar9 != 0) && (uVar9 != 3)) && (uVar9 != 0x59565955)) &&
      (((uVar9 != 0x32595559 && (uVar9 != 0x56555949)) &&
       ((uVar9 != 0x30323449 && ((uVar9 != 0x32315659 && (uVar9 != 0x32323450)))))))) &&
     (uVar9 != 0x31313450)) {
LAB_82c81c20:
    *param_3 = 0;
    return 1;
  }
  if (param_3 == (int *)0x0) {
    return 1;
  }
  iVar5 = (int)param_4;
  if ((((iVar5 < 0) || ((int)param_6 < 0)) || ((int)param_7 < 0)) ||
     ((((int)param_8 < 1 || (in_stack_00000054 < 1)) ||
      (((in_stack_0000005c < 0 || ((in_stack_00000064 < 0 || (in_stack_0000006c < 1)))) ||
       (in_stack_00000074 < 1)))))) goto LAB_82c81c20;
  iVar4 = *(int *)(param_2 + 4);
  iVar7 = iVar4;
  if (iVar4 < 1) {
    iVar7 = -iVar4;
  }
  if (iVar7 < (int)param_6 + (int)param_8) goto LAB_82c81c20;
  iVar7 = *(int *)(param_2 + 8);
  iVar8 = iVar7;
  if (iVar7 < 1) {
    iVar8 = -iVar7;
  }
  if (((iVar8 < (int)param_7 + in_stack_00000054) || (iVar5 < in_stack_0000005c + in_stack_0000006c)
      ) || (uVar9 = (uint)param_5,
           (int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) <
           in_stack_00000064 + in_stack_00000074)) goto LAB_82c81c20;
  sVar2 = *(short *)(param_2 + 0xe);
  iStack00000014 = param_1;
  iVar4 = fn_82C800C8(uVar6,iVar4,iVar7,in_stack_00000084);
  if ((((iVar4 != 0) || (iVar4 = fn_82C800C8(uVar6,param_4,param_5), iVar4 != 0)) ||
      ((iVar4 = fn_82C800C8(uVar6,param_8,in_stack_00000054), iVar4 != 0 ||
       ((iVar4 = fn_82C800C8(uVar6,in_stack_0000006c,in_stack_00000074), iVar4 != 0 ||
        (iVar4 = fn_82C800C8(uVar6,param_6,param_7), iVar4 != 0)))))) ||
     (iVar4 = fn_82C800C8(uVar6,in_stack_0000005c,in_stack_00000064), iVar4 != 0))
  goto LAB_82c81c20;
  iVar4 = (int)uVar6;
  if (iVar4 == 0x31313450) {
    uVar10 = 1;
    goto LAB_82c81b44;
  }
  if ((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) {
    if (iVar4 == 0) {
      bVar1 = sVar2 == 0x20;
    }
    else {
      if (((iVar4 == 0x59565955) || (iVar4 == 0x32595559)) || ((uVar6 & 0xffffffff) == 0x32323450))
      goto LAB_82c81b40;
      bVar1 = iVar4 == 0x32315659;
    }
    uVar10 = 0;
    if (!bVar1) goto LAB_82c81b44;
  }
LAB_82c81b40:
  uVar10 = in_stack_0000007c;
LAB_82c81b44:
  uVar3 = fn_82C80520(param_2,param_3,param_4,param_5,uVar10,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar4 = *param_3;
  *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_2 + 8);
  *(int *)(iVar4 + 0x2c) = iVar5;
  *(uint *)(iVar4 + 0x30) = uVar9;
  *(undefined4 *)(iVar4 + 0x124) = uVar10;
  *(undefined4 *)(iVar4 + 0x128) = in_stack_00000084;
  iVar5 = fn_82C814F8(iVar4);
  if (iVar5 == 0) {
    return 1;
  }
  iVar5 = fn_82C815A0(param_3,param_6,param_7,param_8,in_stack_00000054,in_stack_0000005c,
                        in_stack_00000064,in_stack_0000006c);
  if (iVar5 != 0) {
    return 1;
  }
  if (*(int *)(iStack00000014 + 0x5680) != 0) {
    *(undefined4 *)(iVar4 + 0x7c) = 1;
    *(undefined4 *)(iVar4 + 0x84) = *(undefined4 *)(iStack00000014 + 0x5684);
    *(undefined4 *)(iVar4 + 0x88) = *(undefined4 *)(iStack00000014 + 0x5688);
    *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iStack00000014 + 0x568c);
    *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(iStack00000014 + 0x5690);
    *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iStack00000014 + 0x5694);
    *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(iStack00000014 + 0x5698);
  }
  return 0;
}

