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
extern int fn_82C80360();
extern int fn_82CC6160();
extern int fn_82CC62F0();


undefined8 fn_82C80400(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar1 = param_1[8];
  uVar5 = (ulonglong)uVar1;
  param_1[0x4b] = 0;
  if (param_1[0x4a] == 0) {
    if ((param_1[3] != param_1[9]) || (param_1[4] != param_1[10])) {
      param_1[0x4b] = 1;
    }
    if ((param_1[7] != param_1[0xb]) || (uVar1 != param_1[0xc])) {
      param_1[0x4b] = param_1[0x4b] + 2;
    }
    *(int *)(*param_1 + 8) = param_1[4];
  }
  else {
    uVar2 = param_1[4];
    param_1[0x4b] = 3;
    *(uint *)(*param_1 + 8) = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    uVar5 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  }
  *(int *)(*param_1 + 4) = param_1[3];
  iVar3 = *param_1;
  uVar4 = fn_82C80360(param_1,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
  *(undefined4 *)(iVar3 + 0x14) = uVar4;
  if (param_1[0x49] == 0) {
    fn_82CC62F0(param_1 + 0xd,param_1[3],*(undefined4 *)(*param_1 + 8),param_1[7],uVar5);
  }
  else {
    fn_82CC6160(param_1 + 0x27);
  }
  return 1;
}

