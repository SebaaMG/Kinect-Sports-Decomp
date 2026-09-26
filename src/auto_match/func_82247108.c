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
extern int fn_822315A0();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_8288B760();
extern int fn_828AB870();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_83297810;


void fn_82247108(int *param_1)

{
  int iVar1;
  char cVar3;
  longlong lVar2;
  ulonglong uVar4;
  int iStack_20;
  int iStack_1c;
  
  cVar3 = fn_8288B760();
  if (cVar3 != '\0') {
    iVar1 = param_1[0x21];
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB870(lVar2 + 0x48,iVar1);
  }
  if (*(char *)(*(int *)(param_1[0xd] + 0x38) + 0x26) != '\0') {
    iVar1 = param_1[4];
    uVar4 = (ulonglong)lbl_83297810;
    if (uVar4 == 0) {
      uVar4 = fn_82511928();
    }
    fn_82513A80(&iStack_20,uVar4,iVar1);
    *(undefined1 *)(iStack_20 + 0x44) = 1;
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  return;
}

