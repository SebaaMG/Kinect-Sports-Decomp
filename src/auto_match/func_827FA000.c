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
extern int fn_827F6AC0();
extern int fn_827F6BA0();
extern int fn_827F6F58();
extern int fn_827F9BA0();
extern int fn_827FA1F0();
extern int fn_827FF7C8();
extern int fn_82800DE0();
extern int fn_828E0268();


void fn_827FA000(int *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  
  *param_1 = param_2;
  piVar3 = param_1 + 1;
  fn_827F6F58(piVar3,*(undefined4 *)(param_2 + 0x48));
  if (*(int *)(*param_1 + 0x48) == 0) {
    fn_827F6BA0(piVar3,*(undefined2 *)(*param_1 + 0x20));
    fn_827F6AC0(piVar3,*(undefined2 *)(*param_1 + 0x4e));
    uVar2 = *(ushort *)(*param_1 + 0x52);
    if (0xf < uVar2) {
      uVar2 = 0x10;
    }
    fn_827FA1F0(piVar3,uVar2);
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2f] = 1;
  param_1[0x30] = 0;
  param_1[0x3f] = 1;
  fn_827F9BA0(param_1,piVar3);
  fn_82800DE0(param_1 + 0x29);
  fn_828E0268(param_1[0x26],0xffffffff821960d0);
  param_1[0x31] = 0;
  fn_827FF7C8(param_1);
  iVar1 = *param_1;
  *(undefined2 *)(param_1 + 0x39) = *(undefined2 *)(iVar1 + 0x4e);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(iVar1 + 0x50);
  uVar2 = *(ushort *)(iVar1 + 0x52);
  if (0xf < uVar2) {
    uVar2 = 0x10;
  }
  *(ushort *)((int)param_1 + 0xe6) = uVar2;
  *(undefined2 *)((int)param_1 + 0xea) = *(undefined2 *)(iVar1 + 0x4c);
  return;
}

