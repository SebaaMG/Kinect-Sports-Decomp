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
extern int fn_82BABD38();
extern int fn_82BD09F0();
extern unsigned int lbl_820E7F9C;


undefined8 fn_82BABDA0(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar5;
  int iVar3;
  int iVar4;
  
  cVar5 = fn_82BABD38();
  if (cVar5 != '\0') {
    if (((*(int *)(param_1 + 0x10) == 0) || ((*(uint *)(param_1 + 0xe4) >> 1 & 1) != 0)) ||
       (bVar2 = true, (&lbl_820E7F9C)[*(int *)(param_1 + 0x50) * 0xc] == '\0')) {
      bVar2 = false;
    }
    if (bVar2) {
      iVar3 = *(int *)(param_1 + 0xec);
      if (((*(int *)(iVar3 + 0x10) == 0) || ((*(uint *)(iVar3 + 0xe4) >> 1 & 1) != 0)) ||
         (bVar2 = true, (&lbl_820E7F9C)[*(int *)(iVar3 + 0x50) * 0xc] == '\0')) {
        bVar2 = false;
      }
      if (bVar2) {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0xab0);
        iVar3 = fn_82BD09F0(uVar1);
        iVar4 = fn_82BD09F0(uVar1,param_1);
        if (iVar4 == iVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}

