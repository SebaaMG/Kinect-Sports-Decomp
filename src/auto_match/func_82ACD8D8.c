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
extern int fn_82ACC5D8();
extern int fn_82ACD310();


void fn_82ACD8D8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (param_1[0xf] == 0) {
    uVar5 = *(uint *)(*param_1 + 4);
  }
  else {
    uVar5 = *(uint *)((param_1[0xf] & 0xfffffffeU) + 0x28);
  }
  uVar5 = -(uint)((uVar5 & 1) == 0) & uVar5;
  while (uVar3 = uVar5, uVar3 != uVar1) {
    uVar2 = uVar3 & 0xfffffffe;
    uVar5 = -(uint)((*(uint *)(uVar2 + 0x28) & 1) == 0) & *(uint *)(uVar2 + 0x28);
    fn_82ACC5D8(param_1,uVar3,1);
    if ((*(uint *)(uVar3 + 8) >> 0x1a & 1) != 0) {
      *(undefined4 *)((*(uint *)(uVar2 + 0x28) & 0xfffffffe) + 0x24) = *(undefined4 *)(uVar2 + 0x24)
      ;
      *(undefined4 *)(*(uint *)(uVar2 + 0x24) & 0xfffffffe) = *(undefined4 *)(uVar2 + 0x28);
      *(uint *)(uVar3 + 0x10) = *(uint *)(uVar3 + 0x10) & 0xfdffffff;
    }
  }
  param_1[0xf] = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_1[0xe] + 0x10) = *(undefined4 *)(param_2 + 0x14);
  if (((*(char *)(param_1 + 0x12) != '\0') && (*(char *)((int)param_1 + 0x49) == '\0')) &&
     (iVar4 = fn_82ACD310(param_1,param_1[0x11],param_1[0xf]), iVar4 == param_1[0xf])) {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  return;
}

