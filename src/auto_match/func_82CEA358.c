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


void fn_82CEA358(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(param_2 * 8 + *param_1) = 0xffffffff;
  iVar1 = *param_1;
  uVar6 = param_1[2];
  uVar4 = uVar6 + param_2 & uVar6;
  iVar2 = *(int *)(uVar4 * 8 + iVar1);
  while (iVar2 != -1) {
    uVar4 = uVar6 + uVar4 & uVar6;
    iVar2 = *(int *)(uVar4 * 8 + iVar1);
  }
  uVar5 = param_2 + 1 & uVar6;
  uVar4 = uVar4 + 1 & uVar6;
  iVar2 = uVar5 * 8;
  iVar1 = *(int *)(iVar1 + iVar2);
  while (iVar1 != -1) {
    uVar3 = *(uint *)(*param_1 + iVar2);
    uVar6 = (uVar3 >> 4) * -0x61c8864f & uVar6;
    if ((((uVar5 < uVar4) || (uVar6 <= param_2)) &&
        ((param_2 <= uVar5 || ((uVar6 <= param_2 && (uVar5 < uVar6)))))) &&
       ((uVar6 <= param_2 || (uVar4 <= uVar6)))) {
      *(uint *)(param_2 * 8 + *param_1) = uVar3;
      *(undefined4 *)(param_2 * 8 + *param_1 + 4) = *(undefined4 *)(*param_1 + iVar2 + 4);
      *(undefined4 *)(iVar2 + *param_1) = 0xffffffff;
      param_2 = uVar5;
    }
    uVar6 = param_1[2];
    uVar5 = uVar5 + 1 & uVar6;
    iVar2 = uVar5 * 8;
    iVar1 = *(int *)(iVar2 + *param_1);
  }
  return;
}

