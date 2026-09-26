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
extern int fn_828D3770();
extern int fn_828D3860();
extern int fn_828D3EE8();
extern int fn_828D3F40();
extern unsigned int uStack_30;


void fn_828D4098(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack_30;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != iVar1) {
    uVar2 = fn_828D3770(iVar1,iVar1,*(int *)(param_1 + 0x14),uStack_30);
    fn_828D3860(uVar2,*(undefined4 *)(param_1 + 0x18),param_1 + 0x20,uStack_30);
    *(int *)(param_1 + 0x18) = (int)uVar2;
  }
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    uVar2 = fn_828D3EE8(*(int *)(param_1 + 8));
    fn_828D3F40(uVar2,*(undefined4 *)(param_1 + 8),param_1 + 0x10,uStack_30);
    *(int *)(param_1 + 8) = (int)uVar2;
  }
  return;
}

