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
extern int fn_826916F0();
extern int fn_826919A0();


undefined4 fn_82691CD8(int param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  char acStack_30 [48];
  
  acStack_30[0] = '\0';
  if ((*(uint *)(param_1 + 0x208) != 0) &&
     ((ulonglong)*(uint *)(param_1 + 0x208) <= (param_2 & 0xffffffff))) {
    do {
      iVar2 = fn_826916F0(param_1,param_2,param_3,acStack_30);
      if (iVar2 != 0) goto LAB_82691d98;
    } while (acStack_30[0] != '\0');
  }
  uVar1 = *(uint *)(param_1 + 0x1f8);
  uVar3 = (ulonglong)uVar1;
  acStack_30[0] = '\0';
  trapWord(6,uVar3,0);
  while (iVar2 = fn_826919A0(param_1,9,
                               (longlong)
                               (int)(((((param_2 + param_3) - 1 & ~(param_3 - 1U)) + uVar3) - 1 &
                                     0xffffffff) / uVar3) * (longlong)(int)uVar1,param_3,0,
                               acStack_30), iVar2 == 0) {
    if (acStack_30[0] == '\0') {
      return 0;
    }
  }
LAB_82691d98:
  *(int *)(param_1 + 0x214) = *(int *)(iVar2 + 0x18) + *(int *)(param_1 + 0x214);
  return *(undefined4 *)(iVar2 + 0x1c);
}

