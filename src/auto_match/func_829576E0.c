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


undefined8 fn_829576E0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  uVar4 = *(uint *)(iVar6 + 0x54);
  if (((uVar4 != 0xffffffff) && ((*(uint *)(param_1 + 0x6c) & 2) == 0)) &&
     (uVar1 = *(uint *)(iVar6 + 0x58), uVar4 <= uVar1)) {
    piVar3 = (int *)(uVar4 * 4 + *(int *)(param_1 + 0x18));
    do {
      puVar2 = (uint *)*piVar3;
      if ((*puVar2 & 0xf0000000) == 0x60000000) {
        uVar5 = 0;
        if (puVar2[1] != 0) {
          iVar6 = 0;
          do {
            if (*(int *)(iVar6 + puVar2[2]) == param_2) {
              return 1;
            }
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (uVar5 < puVar2[1]);
        }
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 <= uVar1);
  }
  return 0;
}

