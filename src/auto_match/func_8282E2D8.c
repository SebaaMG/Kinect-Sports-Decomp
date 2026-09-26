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
extern int fn_82518FF0();
extern int fn_828223C8();
extern int fn_82F68CC0();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_8282E2D8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iStack_40;
  int iStack_3c;
  int aiStack_38 [14];
  
  fn_828223C8(param_1 + 0x2f4,&iStack_3c);
  if (iStack_3c != 0) {
    iVar3 = param_1 + 0x2fc;
    iVar2 = iStack_3c;
    do {
      while (fn_828223C8(iVar3,&iStack_40), iStack_40 != 0) {
        iVar3 = iStack_40;
        if (*(char *)(iStack_40 + 0x28) == *(char *)(iVar2 + 0x14)) {
          piVar5 = (int *)(iStack_40 + 0x3c);
          piVar1 = *(int **)(*(int *)(iStack_40 + 0x3c) + 4);
          aiStack_38[0] = *piVar1;
          if ((int *)aiStack_38[0] != piVar1) {
            puVar4 = (uint *)(iStack_40 + 0x24);
            do {
              fn_82F68CC0((ulonglong)*(uint *)(aiStack_38[0] + 0x18) +
                           (ulonglong)*(uint *)(iVar2 + 0x20) + (ulonglong)*puVar4,
                           *(undefined4 *)(aiStack_38[0] + 0xc),
                           *(undefined4 *)(aiStack_38[0] + 0x10));
              fn_82518FF0(aiStack_38);
              iVar3 = iStack_40;
            } while (aiStack_38[0] != *(int *)(*piVar5 + 4));
          }
        }
      }
      fn_828223C8(iStack_3c,&iStack_3c);
      iVar3 = param_1 + 0x2fc;
      iVar2 = iStack_3c;
    } while (iStack_3c != 0);
  }
  return;
}

