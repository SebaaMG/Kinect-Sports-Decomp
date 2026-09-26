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
extern int fn_82CD74F8();


void fn_82CD7AB0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint in_stack_0000006c;
  int in_stack_0000007c;
  int in_stack_00000084;
  
  uVar8 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar8 = (int)in_stack_0000006c >> 1;
  }
  iVar2 = (int)param_5 >> 1;
  iVar4 = (int)param_6 >> 1;
  lVar9 = (longlong)iVar4;
  if ((uVar8 & 3) == 0) {
    fn_82CD74F8(in_stack_0000007c,param_3,param_8,uVar8,(longlong)iVar2,lVar9);
    fn_82CD74F8(in_stack_00000084,param_4);
  }
  else if (0 < iVar4) {
    iVar4 = 0;
    in_stack_0000007c = in_stack_0000007c - in_stack_00000084;
    do {
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar2) {
        lVar10 = (longlong)iVar2;
        iVar5 = iVar4;
        do {
          puVar3 = (undefined1 *)(iVar5 + param_3);
          uVar1 = *(undefined1 *)(iVar4 + param_4 + iVar7);
          iVar7 = iVar7 + 1;
          iVar5 = iVar4 + iVar7;
          *(undefined1 *)(in_stack_0000007c + in_stack_00000084 + iVar6) = *puVar3;
          *(undefined1 *)(in_stack_00000084 + iVar6) = uVar1;
          iVar6 = iVar6 + uVar8;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      lVar9 = lVar9 + -1;
      iVar4 = iVar4 + param_8;
      in_stack_00000084 = in_stack_00000084 + 1;
    } while (lVar9 != 0);
  }
  fn_82CD74F8(param_1,param_2,param_7,in_stack_0000006c,param_5,param_6);
  return;
}

