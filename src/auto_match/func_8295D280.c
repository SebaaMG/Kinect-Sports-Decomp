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
extern int fn_8295A330();


uint fn_8295D280(int param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = fn_8295A330(param_1,param_2 | param_3);
  uVar3 = (int)uVar3 >> 0x1f & uVar3;
  if (-1 < (int)uVar3) {
    if (((param_2 | param_3) & 0x2000) != 0) {
      iVar1 = *(int *)(param_4 * 4 + *(int *)(param_1 + 0x14));
      uVar3 = *(uint *)(iVar1 + 0x10);
      uVar2 = *(uint *)(iVar1 + 0xc) & 0x7ff;
      uVar4 = uVar2 | 0xb0000000;
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          uVar4 = uVar2 | 0xb0550000;
        }
        else if (uVar3 < 3) {
          uVar4 = uVar2 | 0xb0aa0000;
        }
        else if (uVar3 == 3) {
          uVar4 = uVar2 | 0xb0ff0000;
        }
      }
      fn_8295A330(param_1,uVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}

