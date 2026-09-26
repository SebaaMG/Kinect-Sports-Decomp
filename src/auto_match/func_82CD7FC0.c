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
extern int fn_82A1DDC0();


void fn_82CD7FC0(longlong param_1,longlong param_2,int param_3,int param_4,undefined8 param_5,
                  longlong param_6,longlong param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  int in_stack_0000007c;
  
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    in_stack_0000006c = (int)in_stack_0000006c >> 1;
  }
  iVar2 = (int)param_5 >> 1;
  lVar5 = (longlong)((int)param_6 >> 1);
  if (0 < lVar5) {
    iVar8 = 0;
    do {
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar2) {
        lVar9 = (longlong)iVar2;
        iVar4 = iVar8;
        do {
          puVar3 = (undefined1 *)(iVar4 + param_3);
          uVar1 = *(undefined1 *)(iVar8 + param_4 + iVar7);
          iVar7 = iVar7 + 1;
          iVar4 = iVar8 + iVar7;
          *(undefined1 *)(in_stack_0000007c + iVar6) = *puVar3;
          *(undefined1 *)(in_stack_0000007c + 1 + iVar6) = uVar1;
          iVar6 = iVar6 + in_stack_0000006c * 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar5 = lVar5 + -1;
      iVar8 = iVar8 + param_8;
      in_stack_0000007c = in_stack_0000007c + ((int)in_stack_00000064 >> 1) * 2;
    } while (lVar5 != 0);
  }
  if (0 < (int)param_6) {
    do {
      fn_82A1DDC0(param_1,param_2,param_5);
      param_6 = param_6 + -1;
      param_1 = param_1 + (ulonglong)in_stack_00000064;
      param_2 = param_2 + param_7;
    } while (param_6 != 0);
  }
  return;
}

