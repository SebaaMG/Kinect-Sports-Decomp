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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CFBEB8();
extern int fn_82D00000();
extern int fn_82D00040();
extern int fn_82D000A0();
extern int fn_82D001D8();
extern int fn_82D002F0();
extern int fn_82D00388();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82E1A540(int param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar4;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  char acStack_3f [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = fn_82CE5410();
    uVar1 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x10);
    uVar5 = (undefined4)uVar1;
    if ((uVar1 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      fn_82D00388(uVar1,0);
    }
    *(undefined4 *)(param_1 + 0x30) = uVar5;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = fn_82D001D8(uVar5,param_3);
  fn_82D002F0(acStack_3f,uVar5,uVar2);
  if (acStack_3f[0] == '\0') {
    iVar4 = fn_82CE5410();
    uVar3 = fn_82CFBEB8(param_3,*(undefined4 *)(iVar4 + 0x10));
    fn_82D000A0(uVar5,uVar3,0);
  }
  else {
    uVar3 = fn_82D00000(uVar5,uVar2);
    fn_82D00040(uVar5,uVar2,0);
  }
  uStack_34 = (undefined4)uVar3;
  uStack_38 = param_2;
  iVar4 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),(int *)(param_1 + 0x24),8);
  }
  *(ulonglong *)(*(int *)(param_1 + 0x28) * 8 + *(int *)(param_1 + 0x24)) =
       CONCAT44(uStack_38,uStack_34);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

