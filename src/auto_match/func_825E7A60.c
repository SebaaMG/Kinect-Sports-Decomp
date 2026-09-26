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
extern int fn_82522ED8();


void fn_825E7A60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  if (param_1[1] != 0) {
    puVar4 = (undefined4 *)param_1[0x14];
    while (puVar4 != param_1 + 2) {
      puVar1 = (undefined4 *)puVar4[0x12];
      if (puVar4[0xd] != 0) {
        uVar3 = 0;
        if (puVar4[0x11] != 0) {
          do {
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)puVar4[0x11]);
        }
        puVar4[0xe] = puVar4[0xd];
        puVar4[0x11] = 0;
        fn_82522ED8();
      }
      iVar2 = param_1[0x25];
      *(undefined4 **)(*(int *)(iVar2 + 0xc) * 4 + *(int *)(iVar2 + 0x10)) = puVar4;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      puVar4 = puVar1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = param_1 + 0x13;
  lVar5 = 0x11;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = param_1 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

