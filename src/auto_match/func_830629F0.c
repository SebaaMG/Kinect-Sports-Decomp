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
extern unsigned int *auStack_20;
extern int fn_83062940();
extern unsigned int iStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


longlong fn_830629F0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 auStack_20 [32];
  
  uStack_30 = *param_1;
  iStack_28 = param_1[4] + param_1[3];
  uStack_2c = 0;
  piVar1 = (int *)fn_83062940(auStack_20,&uStack_30,1);
  iVar2 = 0;
  if ((int *)*piVar1 != (int *)0x0) {
    iVar2 = *(int *)*piVar1;
  }
  uVar3 = (uint)piVar1[2] >> 2;
  if (*(uint *)(iVar2 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar2 + 8);
  }
  return (ulonglong)*(uint *)(*(int *)(iVar2 + 4) + uVar3 * 4) +
         ((ulonglong)(uint)piVar1[2] & 3) * 4;
}

