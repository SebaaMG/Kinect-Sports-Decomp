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
extern int fn_828223C8();
extern int fn_82826498();


void fn_8282A2C8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int aiStack_30 [12];
  
  iVar1 = param_1 + 0x2fc;
  while (fn_828223C8(iVar1,aiStack_30), aiStack_30[0] != 0) {
    iVar1 = aiStack_30[0];
    if ((*(int *)(aiStack_30[0] + 0xc) != *(int *)(param_1 + 0x3d8)) &&
       (*(char *)(aiStack_30[0] + 0x54) != '\0')) {
      puVar2 = (undefined4 *)(aiStack_30[0] + 0x48);
      iVar3 = ((*(int **)(aiStack_30[0] + 0x48))[1] - **(int **)(aiStack_30[0] + 0x48)) / 0x14;
      lVar4 = (longlong)iVar3;
      if (iVar3 != 0) {
        iVar3 = 0;
        do {
          iVar1 = *(int *)*puVar2 + iVar3;
          fn_82826498(param_1,((ulonglong)*(uint *)(iVar1 + 4) & 0x7ffffff) * 0x20 +
                                (ulonglong)**(uint **)(param_1 + 0x388),*(undefined4 *)(iVar1 + 8),
                        0xffffffff8282a170);
          lVar4 = lVar4 + -1;
          iVar3 = iVar3 + 0x14;
          iVar1 = aiStack_30[0];
        } while (lVar4 != 0);
      }
    }
  }
  return;
}

