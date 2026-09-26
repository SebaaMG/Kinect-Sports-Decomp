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
extern int fn_82CFBC28();


int fn_82DF2FB8(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar6 = 0;
    do {
      iVar7 = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + iVar6);
      if (0 < *(int *)(iVar2 + 0xc)) {
        iVar8 = 0;
        do {
          iVar3 = *(int *)(iVar8 + *(int *)(iVar2 + 8));
          uVar1 = *(uint *)(iVar3 + 0x74);
          if (((uVar1 & 0xfffffffe) != 0) &&
             (iVar4 = fn_82CFBC28(uVar1 & 0xfffffffe,param_2), iVar4 == 0)) {
            return iVar3;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)(iVar2 + 0xc));
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

