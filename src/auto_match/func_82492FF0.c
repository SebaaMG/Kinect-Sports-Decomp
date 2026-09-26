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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8236CE28();
extern int fn_82522588();
extern int fn_82570840();
extern unsigned int iStack_3c;


void fn_82492FF0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  if ((*(uint *)(param_2 + 0x40) != 0) && (*(uint *)(param_2 + 0x40) <= *(uint *)(param_5 + 0x14)))
  {
    iVar1 = *(int *)(param_2 + 0x44);
    *(undefined4 *)(param_2 + 0x40) = 0;
    for (uVar5 = (ulonglong)*(uint *)(iVar1 + 0x30);
        (uVar5 & 0xffffffff) != (ulonglong)*(uint *)(iVar1 + 0x34); uVar5 = uVar5 + 8) {
      piVar3 = (int *)fn_82522588(auStack_40,uVar5);
      iVar2 = *piVar3;
      if ((*(int *)(*(int *)(iVar2 + 0x36c) + 0x44) != 0) && (*(int *)(iVar2 + 600) != 0)) {
        uVar4 = fn_82570840(*(undefined4 *)(iVar2 + 0x248),iVar2 + 600,0,iVar2 + 0x20);
        *(undefined4 *)(iVar2 + 0x250) = uVar4;
      }
      if (iStack_3c != 0) {
        fn_822315A0();
      }
    }
  }
  fn_8236CE28(param_1,*(undefined4 *)(param_2 + 0x44));
  return;
}

