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


uint fn_827A8998(int *param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    return 0;
  }
  uVar6 = 0;
  uVar4 = 0x7fffffff;
  iVar5 = 0;
  do {
    if ((uVar6 < uVar1) && (bVar3 = false, -1 < (int)uVar6)) goto LAB_827a89d4;
    do {
      bVar3 = true;
LAB_827a89d4:
      if (bVar3) {
        return uVar4;
      }
      piVar2 = *(int **)(iVar5 + *param_1);
      if (*piVar2 < 0) {
        uVar7 = (uint)*(ushort *)((int)piVar2 + 0x16);
      }
      else {
        uVar7 = piVar2[6];
      }
      if ((int)uVar7 < (int)uVar4) {
        uVar4 = uVar7;
      }
    } while (uVar1 <= uVar6);
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}

