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
extern int fn_82ABE250();
extern int fn_82AD6090();


undefined4 * fn_82B50498(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  *param_1 = (int)param_3;
  puVar3 = (uint *)fn_82ABE250(param_3,8,0xf);
  param_1[1] = puVar3;
  puVar3[1] = (uint)puVar3 | 1;
  *puVar3 = (uint)(puVar3 + 1) | 1;
  puVar3 = (uint *)param_1[1];
  if ((puVar3[1] & 1) == 0) {
    uVar2 = *puVar3 & 0xfffffffe;
    iVar4 = uVar2 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar2 + 4) + 1U <= *(uint *)(uVar2 + 8))) goto code_r0x82b50524;
  }
  iVar4 = fn_82AD6090(puVar3,1);
code_r0x82b50524:
  iVar1 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar1 + 1;
  *(undefined4 *)((iVar1 + 4) * 4 + iVar4) = param_2;
  return param_1;
}

