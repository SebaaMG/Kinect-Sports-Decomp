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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD11D0();


void fn_82AD2680(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  
  iVar4 = 0;
  if ((*(uint *)(param_2 + 0x24) & 1) == 0) {
    uVar2 = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    iVar6 = uVar2 - 0x28;
    if (iVar6 != 0) {
      uVar1 = *(uint *)(uVar2 - 0x20) >> 7 & 0x7f;
      if ((((uVar1 == 0x56) || (uVar1 == 0x57)) || (uVar1 == 0x59)) ||
         (((uVar1 == 0x5a || (uVar1 == 0x54)) || (bVar3 = false, uVar1 == 0x55)))) {
        bVar3 = true;
      }
      if (bVar3) {
        uVar1 = *(uint *)(uVar2 - 0x20);
        iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        iVar4 = *(int *)(iVar4 + (uVar2 - 0x38));
      }
    }
  }
  else {
    iVar6 = 0;
  }
  if (param_3 == iVar4) {
    cVar5 = fn_82AD11D0(iVar6);
    if (cVar5 == '\0') {
      if ((*(uint *)(iVar6 + 8) & 0x3f80) != 0x2a00) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
    else {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x4000000;
    }
  }
  return;
}

