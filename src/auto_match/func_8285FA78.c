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
extern int fn_82862150();
extern int fn_82862338();


void fn_8285FA78(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != 0) {
    uVar5 = 0;
    pbVar4 = (byte *)*param_3;
    if (*(int *)(iVar1 + 0x44) != 0) {
      do {
        uVar2 = fn_82862338(iVar1,param_2,uVar5);
        iVar3 = fn_82862150(uVar2,param_2);
        uVar5 = uVar5 + 1;
        *pbVar4 = ~((char)(0x100 >> (*(ushort *)(iVar3 + 8) & 0x3f)) - 1U);
        pbVar4 = pbVar4 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x44));
    }
    *param_3 = pbVar4;
  }
  return;
}

