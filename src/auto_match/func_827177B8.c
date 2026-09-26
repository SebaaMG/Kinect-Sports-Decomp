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
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82696330();


ulonglong fn_827177B8(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar5;
  ulonglong uVar3;
  int iVar4;
  longlong lVar6;
  int aiStack_40 [4];
  char acStack_30 [48];
  
  cVar5 = (**(code **)(*param_1 + 8))();
  if (cVar5 == '\0') {
    uVar3 = 0;
  }
  else if ((param_1[0x23] & 0x60U) == 0) {
    iVar1 = param_1[0x1b];
    if (iVar1 != 0) {
      acStack_30[0] = '\0';
      iVar4 = (**(code **)(*param_1 + 0x58))(param_1);
      fn_82681728(aiStack_40,(ulonglong)*(uint *)(iVar4 + 0x78) + 0x254,0xffffffff8200670c);
      cVar5 = (**(code **)(*(int *)(iVar1 + 0x10) + 0x2c))
                        (iVar1 + 0x10,iVar4 + 0x78,aiStack_40,acStack_30);
      lVar6 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
      *(int *)(aiStack_40[0] + 8) = (int)lVar6;
      if (lVar6 == 0) {
        fn_826944C8(aiStack_40[0]);
      }
      if (cVar5 != '\0') {
        if ((acStack_30[0] == '\0') || (bVar2 = false, acStack_30[0] == '\n')) {
          bVar2 = true;
        }
        if (!bVar2) {
          uVar3 = fn_82695608(acStack_30,iVar4);
          fn_82696330(acStack_30);
          return uVar3;
        }
      }
      fn_82696330(acStack_30);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = (ulonglong)((param_1[0x23] & 0x60U) == 0x60);
  }
  return uVar3;
}

