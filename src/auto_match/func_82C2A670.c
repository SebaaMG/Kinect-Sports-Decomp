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
extern unsigned int *auStack_30;
extern int fn_82C10B28();


undefined8 fn_82C2A670(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint auStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  puVar5 = (uint *)(iVar1 + 4);
  auStack_30[0] = *(uint *)(iVar1 + 4);
  if (auStack_30[0] == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(auStack_30[0] + 0x24);
    while (iVar2 != 0) {
      uVar3 = *(uint *)(*puVar5 + 0x24);
      *puVar5 = uVar3;
      *(undefined4 *)(uVar3 + 0x28) = 0;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      uVar4 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1f,(ulonglong)auStack_30[0] + 0x2c);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar4 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1f,auStack_30);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      auStack_30[0] = *puVar5;
      iVar2 = *(int *)(auStack_30[0] + 0x24);
    }
    uVar4 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1f,puVar5);
    if (-1 < (int)uVar4) {
      *puVar5 = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
    }
  }
  return uVar4;
}

