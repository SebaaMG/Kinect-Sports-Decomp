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
extern int fn_824CD030();


uint fn_82358DB8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int aiStack_64 [25];
  
  uVar8 = 0;
  piVar7 = *(int **)(param_1 + 0x20);
  piVar1 = *(int **)(param_1 + 0x24);
  aiStack_64[1] = 0;
  aiStack_64[2] = 0;
  do {
    if ((piVar1 <= piVar7) || (1 < uVar8)) {
      *param_2 = aiStack_64[1];
      *param_3 = aiStack_64[2];
      return uVar8;
    }
    piVar5 = *(int **)*piVar7;
    piVar2 = (int *)((uint *)*piVar7)[1];
    if (piVar5 < piVar2) {
      piVar6 = aiStack_64 + uVar8;
      do {
        iVar3 = *piVar5;
        if ((iVar3 != 0) && (iVar4 = fn_824CD030(iVar3), iVar4 != 0)) {
          uVar8 = uVar8 + 1;
          piVar6 = piVar6 + 1;
          *piVar6 = iVar3;
          if (uVar8 == 2) break;
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 < piVar2);
    }
    piVar7 = piVar7 + 1;
  } while( true );
}

