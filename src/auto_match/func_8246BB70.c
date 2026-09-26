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
extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_82837D98();


void fn_8246BB70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int aiStack_40 [16];
  
  puVar5 = (undefined4 *)(param_1 + 4);
  lVar4 = 2;
  do {
    puVar1 = (undefined4 *)*puVar5;
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar3 = fn_825200A8(param_1 + 0x28,puVar2 + 6);
        if (iVar3 == 0) {
          iVar3 = fn_825200A8(param_1 + 0x2c);
          if (iVar3 == 0) {
            iVar3 = fn_825200A8(param_1 + 0x34);
            if (iVar3 == 0) {
              fn_82837D98(*(undefined4 *)(puVar2[3] + 0x14),0,aiStack_40);
              if (puVar5[-1] != aiStack_40[0]) {
                if (puVar2[3] != 0) {
                  fn_8251FA58();
                  puVar2[3] = 0;
                }
                if (puVar2[7] != 0) {
                  fn_8251FA58();
                  puVar2[7] = 0;
                }
              }
            }
          }
        }
      }
      puVar1 = (undefined4 *)*puVar5;
    }
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 5;
  } while (lVar4 != 0);
  return;
}

