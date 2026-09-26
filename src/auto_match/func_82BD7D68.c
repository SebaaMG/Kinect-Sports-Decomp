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
extern int fn_8265C990();
extern int fn_82BD7C38();
extern int fn_82BD8038();


void fn_82BD7D68(int param_1)

{
  code *pcVar1;
  longlong lVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    fn_82BD7C38(param_1,0,0,0);
    if (*(int *)(param_1 + 0x18) != 0) {
      pcVar1 = *(code **)(*(int *)(param_1 + 0x18) + 4);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(param_1);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      fn_82BD8038();
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar3 = (int *)(param_1 + 8);
    lVar2 = 2;
    do {
      if (*piVar3 != 0) {
        fn_82BD8038();
        *piVar3 = 0;
      }
      lVar2 = lVar2 + -1;
      piVar3 = piVar3 + 1;
    } while (lVar2 != 0);
    fn_8265C990(param_1,0x648a0008);
  }
  return;
}

