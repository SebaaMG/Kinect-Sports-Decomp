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


int fn_82B41D68(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *param_2;
  iVar4 = 0;
  iVar6 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return iVar4;
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 0x1c);
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0x30) & 0x7ffff;
    iVar5 = iVar4;
    iVar7 = iVar6;
    if ((((*(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(param_3 + 0x28)) &
          1 << ((uint)uVar3 & 0x1f)) != 0) &&
        (((iVar6 == 0 ||
          (uVar3 = (ulonglong)*(uint *)(iVar6 + 0x30) & 0x7ffff,
          (*(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(iVar2 + 0x28)) &
          1 << ((uint)uVar3 & 0x1f)) != 0)) && (iVar5 = iVar1, iVar7 = iVar2, iVar6 == iVar2)))) &&
       ((iVar5 = param_4, iVar7 = iVar6, iVar1 != param_4 &&
        (iVar5 = iVar1, iVar7 = iVar2, iVar4 != param_4)))) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar4 = iVar5;
    iVar6 = iVar7;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

