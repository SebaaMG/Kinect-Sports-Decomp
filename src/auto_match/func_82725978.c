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
extern int fn_8267C498();
extern int fn_8268F7C0();
extern int fn_82724448();
extern int fn_827A2638();
extern int fn_827A2EC8();
extern int fn_827A2F40();
extern int fn_827A52B0();


void fn_82725978(int *param_1)

{
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  int iVar4;
  
  if (*(int *)(param_1[0x28] + 0x114) != 0) {
    iVar3 = fn_827A52B0();
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    if ((param_1[0x3a] != 0) && (lVar1 = fn_82724448(), lVar1 != 0)) {
      fn_827A2638(iVar3);
    }
    fn_827A2EC8(iVar3,0xffffffff820e975c,0xffffffffffffffff);
    uVar2 = fn_8268F7C0(*(undefined4 *)(param_1[0x28] + 0x114));
    fn_827A2F40(iVar3,uVar2);
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0xb00) = *(uint *)(iVar4 + 0xb00) | 0x400;
    }
    if (iVar3 != 0) {
      fn_8267C498(iVar3);
    }
  }
  return;
}

