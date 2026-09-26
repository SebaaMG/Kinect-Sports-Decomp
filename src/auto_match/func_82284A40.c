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
extern int fn_82284738();
extern int fn_82284BA0();
extern int fn_82F64988();


void fn_82284A40(int param_1,ulonglong param_2,ulonglong param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = fn_82284738();
  puVar1 = *(undefined2 **)(iVar2 + 0x14c);
  puVar3 = *(undefined2 **)(iVar2 + 0x148);
  if (puVar3 != puVar1) {
    do {
      if (*(int *)(puVar3 + 0x218) == param_1) {
        if ((param_2 & 0xffffffff) == 0) {
          *puVar3 = 0;
        }
        else {
          fn_82F64988(puVar3,0x20,param_2);
        }
        if ((param_3 & 0xffffffff) == 0) {
          puVar3[0x100] = 0;
        }
        else {
          fn_82F64988(puVar3 + 0x100,0x20,param_3);
        }
        if (*(int *)(puVar3 + 0x218) == *(int *)(puVar1 + -8)) {
          fn_82284BA0(iVar2,puVar1 + -0x220,puVar1 + -0x120,*(undefined4 *)(puVar1 + -6),
                          *(undefined4 *)(puVar1 + -4));
        }
      }
      puVar3 = puVar3 + 0x220;
    } while (puVar3 != *(undefined2 **)(iVar2 + 0x14c));
  }
  return;
}

