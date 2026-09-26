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


void fn_8249D980(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)param_1[1];
  puVar5 = (undefined4 *)*param_1;
  if ((undefined4 *)*param_1 == puVar1) {
    return;
  }
  do {
    puVar6 = puVar5 + 2;
    if (puVar5[1] == param_2) {
      if (puVar6 != puVar1) {
        puVar5 = puVar5 + -2;
        do {
          puVar5[2] = *puVar6;
          puVar2 = puVar6 + 1;
          puVar6 = puVar6 + 2;
          puVar5[3] = *puVar2;
          puVar5 = puVar5 + 2;
        } while (puVar6 != puVar1);
      }
      iVar4 = param_1[1] + -8;
      for (iVar3 = iVar4; iVar3 != param_1[1]; iVar3 = iVar3 + 8) {
      }
      param_1[1] = iVar4;
      return;
    }
    puVar5 = puVar6;
  } while (puVar6 != (undefined4 *)param_1[1]);
  return;
}

