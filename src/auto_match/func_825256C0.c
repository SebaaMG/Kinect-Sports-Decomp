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
extern int fn_82524968();
extern int fn_82524D30();
extern int fn_827EF640();
extern int fn_827F0298();


undefined4 fn_825256C0(int param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 0;
  piVar4 = (int *)(param_1 + 0xb6c);
  do {
    if (*piVar4 == 0) break;
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar5 < 4);
  *param_2 = uVar5;
  if (*(int *)(param_1 + 0xb7c) == 0) {
    fn_82524968(param_1);
  }
  uVar2 = fn_827EF640(0x130);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_827F0298(uVar2,*(undefined4 *)(param_1 + 0xb7c),0,0);
  }
  iVar1 = (uVar5 + 0x2db) * 4;
  *(undefined4 *)(iVar1 + param_1) = uVar3;
  fn_82524D30(param_1,uVar5);
  return *(undefined4 *)(iVar1 + param_1);
}

