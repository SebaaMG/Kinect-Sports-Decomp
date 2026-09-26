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
extern int fn_82F63CA0();


void fn_828C9118(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    do {
      uVar5 = *puVar4;
      if (uVar5 < *param_1) {
        fn_82F63CA0(puVar4 + (1 - ((int)puVar4 - (int)param_1 >> 3)),param_1);
        *param_1 = uVar5;
      }
      else {
        uVar3 = puVar4[-1];
        puVar1 = puVar4;
        puVar2 = puVar4 + -1;
        while (uVar5 < uVar3) {
          *puVar1 = uVar3;
          uVar3 = puVar2[-1];
          puVar1 = puVar2;
          puVar2 = puVar2 + -1;
        }
        *puVar1 = uVar5;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != param_2);
  }
  return;
}

