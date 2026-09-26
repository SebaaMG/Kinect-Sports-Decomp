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


void fn_82CD80A8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  int param_6,undefined8 param_7,int param_8)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint in_stack_0000006c;
  int in_stack_0000007c;
  
  uVar7 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar7 = (int)in_stack_0000006c >> 1;
  }
  lVar3 = (longlong)(param_6 >> 1);
  if (0 < lVar3) {
    iVar5 = 0;
    do {
      iVar8 = 0;
      iVar4 = 0;
      if (0 < param_5 >> 1) {
        lVar9 = (longlong)(param_5 >> 1);
        iVar6 = iVar5;
        do {
          puVar2 = (undefined1 *)(iVar6 + param_3);
          uVar1 = *(undefined1 *)(iVar5 + param_4 + iVar4);
          iVar4 = iVar4 + 1;
          iVar6 = iVar5 + iVar4;
          *(undefined1 *)(in_stack_0000007c + iVar8) = *puVar2;
          *(undefined1 *)(in_stack_0000007c + 1 + iVar8) = uVar1;
          iVar8 = iVar8 + uVar7 * 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar3 = lVar3 + -1;
      iVar5 = iVar5 + param_8;
      in_stack_0000007c = in_stack_0000007c + 2;
    } while (lVar3 != 0);
  }
  fn_82CD74F8(param_1,param_2,param_7,in_stack_0000006c);
  return;
}

