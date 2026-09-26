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
extern int fn_82AD1978();
extern int fn_82B843F0();


uint fn_82B84700(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if ((*(uint *)(iVar1 + 8) & 0x3f80) == 0x3e00) {
    uVar2 = *(uint *)(iVar1 + 8);
    iVar3 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
    if ((*(uint *)((*(uint *)(iVar3 + iVar1 + -8) & 0x7fff) * 0x28 + *(int *)(param_1 + 0xc) + 4) &
        0x70) == 0x30) {
      uVar4 = fn_82B843F0(param_1,param_2);
      uVar2 = uVar4 & 0xfffffffe;
      puVar6 = (uint *)(((uint)param_2 & 0xfffffffe) + 0x24);
      *(uint *)(uVar2 + 0x24) = *puVar6;
      *(uint *)(*puVar6 & 0xfffffffe) = uVar2;
      *(uint *)(uVar2 + 0x28) = (uint)param_2 & 0xfffffffe;
      *puVar6 = uVar2 + 0x28;
      uVar5 = fn_82AD1978(uVar4,param_3);
      *(undefined4 *)(uVar4 + 0x2c) = uVar5;
      uVar5 = fn_82AD1978(uVar4,param_2[0xc]);
      *(undefined4 *)(uVar4 + 0x30) = uVar5;
      for (iVar1 = *param_2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if ((iVar1 != param_2[0xb]) && (iVar1 != param_2[0xc])) {
          fn_82AD1978(uVar4,iVar1);
        }
      }
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

