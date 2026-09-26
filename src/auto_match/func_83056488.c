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
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int uStack_48;
extern unsigned int uStack_64;


double fn_83056488(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double dVar7;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  char cStack_4c;
  undefined8 uStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = &uStack_64;
  lVar6 = 6;
  puVar4 = puVar1;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)(puVar1 + 6) = 0;
  if (cStack_4c == '\x01') {
    dVar7 = (double)fStack_5c;
    dStack_40 = (double)fStack_60;
    puVar3 = (undefined8 *)(*(int *)(param_1 + 8) + 0x48);
    dStack_30 = (double)fStack_58;
    puVar5 = &uStack_48;
    dStack_28 = (double)fStack_54;
    lVar6 = 5;
    do {
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    dStack_38 = dVar7;
    (**(code **)(**(int **)(param_1 + 8) + 8))();
    return dVar7;
  }
  return (double)fStack_5c;
}

