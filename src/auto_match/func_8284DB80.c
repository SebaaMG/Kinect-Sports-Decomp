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
extern int fn_828387E0();
extern int fn_82A94AA8();


void fn_8284DB80(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  
  for (puVar6 = (ushort *)**(undefined4 **)(param_1 + 0x120); *(char *)(puVar6 + 1) != '\x1d';
      puVar6 = (ushort *)((uint)*puVar6 + (int)puVar6)) {
    if (*(char *)(puVar6 + 1) == 'E') {
      iVar1 = *param_2;
      uVar5 = 0;
      puVar3 = puVar6;
      if (puVar6[4] != 0) {
        do {
          iVar2 = *(int *)(*(int *)(puVar3 + 6) * 4 + iVar1);
          if (iVar2 != 0) {
            iVar4 = fn_82A94AA8(*(undefined2 *)(iVar2 + 0x24),*(undefined2 *)(iVar2 + 0x26),0);
            if ((iVar4 == 0) || (*(char *)(iVar2 + 0x30) == '\x01')) {
              *(int *)(*(int *)(puVar3 + 8) * 4 + iVar1) = iVar2;
            }
            iVar4 = *(int *)(*(int *)(puVar3 + 8) * 4 + iVar1);
            if ((iVar4 != 0) && (*(char *)(iVar4 + 0x30) != *(char *)(iVar2 + 0x30))) {
              fn_828387E0(iVar4,iVar2);
            }
          }
          uVar5 = uVar5 + 1;
          puVar3 = puVar3 + 6;
        } while (uVar5 < puVar6[4]);
      }
    }
  }
  return;
}

