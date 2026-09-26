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
extern int fn_82730B00();
extern int fn_82F63CA0();


void fn_82730B88(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  fn_82730B00(param_1,(ulonglong)(uint)param_1[1] + 1);
  if (param_2 < param_1[1] - 1U) {
    iVar2 = param_2 * 0x14 + *param_1;
    fn_82F63CA0(iVar2 + 0x14,iVar2,((param_1[1] - param_2) + -1) * 0x14);
  }
  puVar3 = (undefined4 *)(param_2 * 0x14 + *param_1);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *param_3;
    puVar3[1] = param_3[1];
    *puVar3 = uVar1;
    iVar2 = param_3[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3[2] = param_3[2];
    puVar3[3] = param_3[3];
    puVar3[4] = param_3[4];
  }
  return;
}

