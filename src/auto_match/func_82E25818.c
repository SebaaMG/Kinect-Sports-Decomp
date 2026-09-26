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
extern int fn_82E4BB50();
extern int fn_82E4BEC0();
extern int fn_82E4BED0();
extern int fn_82E4C858();
extern int fn_82E4E1C8();


undefined8
fn_82E25818(ulonglong param_1,int param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
             int param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar6;
  ulonglong uVar5;
  undefined8 in_stack_00000050;
  undefined4 *in_stack_0000007c;
  undefined4 *in_stack_00000084;
  undefined4 in_stack_0000008c;
  char *in_stack_00000094;
  
  if ((param_1 & 0xffffffff) == 0) {
    return 1;
  }
  if (*in_stack_00000094 == '\0') {
    iVar6 = fn_82E4E1C8(param_2);
    if ((iVar6 == 0) ||
       (((param_6 != 0 && (*(int *)(param_6 + 0x10) != 0x30323449)) &&
        (*(int *)(param_6 + 0x10) != 0x56555949)))) {
      return 4;
    }
    uVar5 = fn_82E4BED0(param_1);
    iVar6 = (int)uVar5;
    if (0 < iVar6) {
      uVar4 = *(ushort *)(param_2 + 0xe) >> 3;
      iVar1 = iVar6 / (int)(uint)uVar4;
      trapWord(6,(ulonglong)uVar4,0);
      trapWord(5,(ulonglong)uVar4 &
                 ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (iVar1 * (uint)uVar4 != iVar6) {
        return 4;
      }
      if ((*(int *)(param_2 + 0x10) == 0x32315659) && ((uVar5 & 1) != 0)) {
        return 4;
      }
      if (iVar1 == *(int *)(param_2 + 4)) {
        fn_82E4BEC0(param_1,0);
      }
    }
    if ((in_stack_0000007c == (undefined4 *)0x0) || (in_stack_00000084 == (undefined4 *)0x0)) {
      iVar6 = fn_82E4C858(param_1,param_2,param_3,param_4,param_5,0xffffffffffffffff,param_6,
                                param_7);
    }
    else {
      uVar2 = *in_stack_0000007c;
      uVar3 = *in_stack_00000084;
      iVar6 = fn_82E4C858(param_1,param_2,param_3,param_4,param_5,0xffffffffffffffff,param_6,
                                param_7);
      *in_stack_0000007c = uVar2;
      *in_stack_00000084 = uVar3;
    }
    *in_stack_00000094 = (*param_5 < 2) - (char)((int)*param_5 >> 0x1f);
    if (iVar6 != 0) {
      if (iVar6 == -3) {
        return 3;
      }
      if (iVar6 != -2) {
        return 6;
      }
      return 4;
    }
  }
  else {
    fn_82E4BB50(param_1,param_4,param_5,param_6,param_7,in_stack_00000050,in_stack_0000008c);
  }
  return 0;
}

