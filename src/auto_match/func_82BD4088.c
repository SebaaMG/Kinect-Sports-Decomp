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
extern int fn_82BD3A30();
extern int fn_82BD81E0();
extern int fn_82BD8E30();


longlong fn_82BD4088(int param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(int *)(param_1 + 8) = param_3;
  uVar3 = -(ulonglong)(*(int *)(param_1 + 0x24) != 1) & 2;
  lVar2 = fn_82BD81E0(*(uint *)(*(int *)(param_3 + 0x18) + 0x1c) + uVar3,0x18,
                            *(undefined4 *)(param_1 + 0x14),uVar3,(int *)(param_1 + 0x10));
  if (-1 < lVar2) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x10);
        *(uint *)(iVar5 + *(int *)(param_1 + 0x28)) =
             *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 4);
        fn_82BD3A30(param_1,iVar5 + *(int *)(param_1 + 0x28));
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < *(uint *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x24) == 1) {
      lVar2 = fn_82BD8E30(*(undefined4 *)(param_1 + 8),param_1 + 0x4c);
    }
  }
  return lVar2;
}

