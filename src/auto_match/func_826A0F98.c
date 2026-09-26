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
extern int fn_8269D260();
extern int fn_8269DDA0();
extern int fn_826A0DD8();


void fn_826A0F98(int *param_1,undefined8 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  puVar1 = (uint *)*param_3;
  uVar4 = (ulonglong)puVar1[1];
  if ((*puVar1 & 0x20000) != 0) {
    uVar4 = (longlong)*(short *)(puVar1 + 2) ^ uVar4;
  }
  iVar3 = *param_1;
  if ((iVar3 == 0) ||
     (iVar2 = fn_8269D260(param_1,param_3,*(uint *)(iVar3 + 4) & uVar4), iVar2 < 0)) {
    fn_826A0DD8(param_1,param_2,param_3,uVar4);
  }
  else {
    iVar3 = iVar2 * 0x24 + iVar3;
    *(uint *)(iVar3 + 0x10) = *puVar1;
    *(uint *)(iVar3 + 0x14) = puVar1[1];
    *(uint *)(iVar3 + 0x18) = puVar1[2];
    *(uint *)(iVar3 + 0x1c) = puVar1[3];
    fn_8269DDA0(iVar3 + 0x20,param_3[1]);
  }
  return;
}

