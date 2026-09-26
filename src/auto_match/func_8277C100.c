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
extern int fn_8277C098();


void fn_8277C100(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  **(undefined4 **)(param_1 + 0xcc) = 0;
  uVar4 = *(uint *)(param_1 + 0xd8);
  if (uVar4 <= *(uint *)(param_1 + 0xdc)) {
    iVar7 = uVar4 << 2;
    do {
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar7 + *(int *)(param_1 + 0xcc)) = 0;
      iVar7 = iVar7 + 4;
    } while (uVar4 <= *(uint *)(param_1 + 0xdc));
  }
  uVar4 = 0;
  if (param_2[1] != 0) {
    iVar7 = 0;
    uVar6 = 0;
    do {
      iVar2 = *(int *)(iVar7 + *param_2);
      uVar1 = *(uint *)(iVar2 + 0x2c);
      *(uint *)(iVar2 + 0x2c) = uVar1 & 0xfffffffb;
      uVar5 = uVar6;
      if ((uVar1 & 2) == 0) {
        fn_8277C098(param_1,iVar2);
        uVar5 = *(uint *)(param_1 + 0xdc);
        if (*(uint *)(param_1 + 0xd8) <= uVar5) {
          iVar3 = uVar5 << 2;
          do {
            if (*(int *)(iVar3 + *(int *)(param_1 + 0xcc)) != 0) goto LAB_8277c1c8;
            uVar5 = uVar5 - 1;
            iVar3 = iVar3 + -4;
          } while (*(uint *)(param_1 + 0xd8) <= uVar5);
        }
        uVar5 = 0;
LAB_8277c1c8:
        *(uint *)(iVar2 + 0x28) = uVar5;
        *(uint *)(iVar2 + 0x20) = uVar6;
        if (uVar6 != uVar5) {
          *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 4;
        }
      }
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + 4;
      uVar6 = uVar5;
    } while (uVar4 < (uint)param_2[1]);
  }
  return;
}

