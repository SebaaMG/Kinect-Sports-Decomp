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
extern int fn_827C67E8();


undefined8 fn_827C6950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  iVar5 = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xe4)) {
        puVar6 = (undefined4 *)(iVar1 + 0x10);
        do {
          iVar3 = iVar3 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = 0;
        } while (iVar3 < *(int *)(param_1 + 0xe4));
      }
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0xbc);
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  }
  if (0 < *(int *)(param_1 + 0x100)) {
    puVar6 = (undefined4 *)(param_2 + -4);
    piVar4 = (int *)(param_1 + 0x100);
    do {
      piVar4 = piVar4 + 1;
      iVar2 = (*piVar4 + 5) * 4;
      iVar3 = *(int *)((*piVar4 + 0x3a) * 4 + param_1);
      fn_827C67E8(param_1,puVar6[1],*(undefined4 *)(iVar2 + iVar1),
                    *(undefined4 *)((*(int *)(iVar3 + 0x14) + 0x13) * 4 + iVar1),
                    *(undefined4 *)((*(int *)(iVar3 + 0x18) + 0x17) * 4 + iVar1));
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
      *(int *)(iVar2 + iVar1) = (int)*(short *)*puVar6;
    } while (iVar5 < *(int *)(param_1 + 0x100));
  }
  return 1;
}

