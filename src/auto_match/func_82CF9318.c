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
extern int fn_82D015D8();
extern int fn_82D029B8();


void fn_82CF9318(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (0 < *(int *)(param_1 + 0x208)) {
    piVar5 = (int *)(param_1 + 0x17c);
    iVar6 = 1;
    do {
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        fn_82D015D8(iVar2);
        if (iVar2 + 0x34 == *(int *)(param_1 + 0x20c)) {
          *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + -0x34;
        }
        piVar4 = piVar5;
        iVar3 = iVar6;
        if (iVar6 < *(int *)(param_1 + 0x208)) {
          do {
            piVar4 = piVar4 + 1;
            if (*piVar4 == iVar2) {
              *piVar4 = 0;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x208));
        }
      }
      piVar5 = piVar5 + 1;
      bVar1 = iVar6 < *(int *)(param_1 + 0x208);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  fn_82D029B8(param_1 + 0x2c);
  return;
}

