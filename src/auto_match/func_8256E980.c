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
extern int fn_82F63CA0();


undefined8 fn_8256E980(int *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  
  piVar1 = (int *)*param_1;
  uVar7 = 0;
  if (piVar1[1] - *piVar1 >> 2 != 0) {
    iVar6 = 0;
    do {
      piVar3 = *(int **)(iVar6 + *piVar1);
      if (*piVar3 == param_2) {
        fn_82522ED8(piVar3[0x16]);
        fn_82522ED8(piVar3[0x17]);
        fn_82522ED8(piVar3[0x18]);
        fn_82522ED8(piVar3[0x19]);
        fn_82522ED8(piVar3);
        puVar2 = (uint *)*param_1;
        lVar4 = (uVar7 & 0x3fffffff) * 4 + (ulonglong)*puVar2;
        lVar5 = lVar4 + 4;
        fn_82F63CA0(lVar4,lVar5,((int)(puVar2[1] - (int)lVar5) >> 2) << 2);
        puVar2[1] = puVar2[1] - 4;
        return 1;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 4;
    } while ((uVar7 & 0xffffffff) < (ulonglong)(uint)(piVar1[1] - *piVar1 >> 2));
  }
  return 0;
}

