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
extern unsigned int *auStack_230;
extern int fn_82CFC050();


void fn_82CFE5E0(int param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_230 [560];
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  }
  else {
    iVar1 = (int)param_3;
    lVar3 = 0x200;
    lVar2 = param_3 + ((longlong)(iVar1 >> 9) + (ulonglong)(iVar1 < 0 && (param_3 & 0x1ff) != 0) &
                      0x7fffff) * -0x200;
    if (0 < iVar1) {
      do {
        if ((int)param_3 < 0x200) {
          lVar3 = lVar2;
        }
        fn_82CFC050(auStack_230,param_2,lVar3);
        (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),auStack_230,lVar3);
        param_3 = param_3 - lVar3;
        param_2 = lVar3 + param_2;
      } while (0 < (longlong)param_3);
    }
  }
  return;
}

