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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_82735960();
extern int fn_82735D68();
extern int fn_827363A0();


void fn_82727A40(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar4;
  ulonglong uVar3;
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar4 != 4)) {
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 8) + -0x68;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0xa0) + 8);
    iVar1 = *(int *)(iVar4 + 0x1c);
    iVar4 = *(int *)(iVar4 + 0x18);
    uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x74,0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82735960(uVar3,*(undefined4 *)(param_1 + 0x18));
    }
    if (iVar1 != 0) {
      fn_82735D68(uVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,iVar1);
    }
    if (iVar4 != 0) {
      fn_827363A0(uVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,iVar4);
    }
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar3);
    if ((uVar3 & 0xffffffff) != 0) {
      fn_826824B0(uVar3);
    }
  }
  return;
}

