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


undefined8
fn_829A66D8(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(param_2 + 0x6c));
  uVar2 = (**(code **)(*param_1 + 0x74))(param_1,*(undefined4 *)(param_2 + 0x6c));
  *param_3 = uVar2;
  uVar3 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (iVar1 == 1) {
    if (*param_3 != 0) {
      return 0xffffffff80004005;
    }
    *param_4 = 4;
    *param_3 = 0;
  }
  else {
    if (iVar1 == 5) {
      if (*param_3 != 0) {
        return 0xffffffff80004005;
      }
      *param_4 = 4;
      *param_3 = 2;
    }
    else {
      if (iVar1 != 0xc) {
        if (iVar1 == 0xb) {
          if (1 < *param_3) {
            return 0xffffffff80004005;
          }
          uVar3 = 5;
        }
        else if (iVar1 == 6) {
          if (7 < *param_3) {
            return 0xffffffff80004005;
          }
          uVar3 = 6;
        }
        else if (iVar1 != 0xffff) {
          return 0xffffffff80004005;
        }
        *param_4 = uVar3;
        return 0;
      }
      if (*param_3 != 0) {
        return 0xffffffff80004005;
      }
      *param_4 = 4;
      *param_3 = 1;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 1;
    }
  }
  return 0;
}

