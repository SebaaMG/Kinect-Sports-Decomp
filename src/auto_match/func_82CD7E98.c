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
extern int fn_82CD7760();


void fn_82CD7E98(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint in_stack_0000006c;
  int in_stack_0000007c;
  int in_stack_00000084;
  
  uVar10 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar10 = (int)in_stack_0000006c >> 1;
  }
  iVar2 = (int)param_5 >> 1;
  iVar4 = (int)param_6 >> 1;
  lVar11 = (longlong)iVar4;
  if ((uVar10 & 3) == 0) {
    fn_82CD7760(in_stack_0000007c,param_3,param_8,uVar10,(longlong)iVar2,lVar11);
    fn_82CD7760(in_stack_00000084,param_4);
  }
  else if (0 < iVar4) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar8 = 0;
      iVar9 = 0;
      if (0 < iVar2) {
        lVar12 = (longlong)iVar2;
        iVar7 = iVar5;
        iVar6 = iVar4;
        do {
          puVar3 = (undefined1 *)(iVar7 + param_3);
          uVar1 = *(undefined1 *)(iVar5 + param_4 + iVar9);
          iVar9 = iVar9 + 1;
          iVar7 = iVar5 + iVar9;
          *(undefined1 *)(iVar6 + in_stack_0000007c) = *puVar3;
          *(undefined1 *)(iVar4 + in_stack_00000084 + iVar8) = uVar1;
          iVar8 = iVar8 + uVar10;
          iVar6 = iVar4 + iVar8;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      lVar11 = lVar11 + -1;
      iVar5 = iVar5 + param_8;
      iVar4 = iVar4 + -1;
    } while (lVar11 != 0);
  }
  fn_82CD7760(param_1,param_2,param_7,in_stack_0000006c,param_5,param_6);
  return;
}

