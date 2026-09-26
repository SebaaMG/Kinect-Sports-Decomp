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
extern int fn_8265C940();
extern int fn_82A1FB60();
extern unsigned int lbl_8315D2EC;


undefined8 fn_82A21078(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_8265C940(0x3c,lbl_8315D2EC);
  uVar1 = lbl_8315D2EC;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 8;
    iVar3 = fn_8265C940(0x20,uVar1);
    *(int *)(iVar2 + 0x1c) = iVar3;
    if (iVar3 != 0) {
      RtlInitializeCriticalSection(iVar2);
      *(undefined4 *)(iVar2 + 0x28) = param_2;
      *(undefined4 *)(iVar2 + 0x38) = 1;
      *(int *)(iVar2 + 0x2c) = iVar2 + 0x2c;
      *(int *)(iVar2 + 0x30) = iVar2 + 0x2c;
      *param_1 = iVar2;
      return 0;
    }
    fn_82A1FB60();
  }
  return 8;
}

