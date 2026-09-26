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
extern int fn_82CEA280();
extern int fn_82D000A0();
extern int fn_82E161D8();


undefined4 fn_82E16928(int param_1,ulonglong param_2,int *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar6;
  ulonglong uVar5;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar10 = (int *)(param_1 + 0x10);
    uVar4 = fn_82CEA280(piVar10,*(int *)(param_1 + 8),0);
    if (((param_2 & 0xffffffff) == 0) ||
       (cVar6 = fn_82E161D8(param_2,uVar4,*(undefined4 *)(param_1 + 0x2c)), cVar6 != '\0')) {
      if ((*(int *)(param_1 + 0x20) == 0) && (param_3 != (int *)0x0)) {
        bVar2 = false;
        iVar8 = 0;
        if (-1 < *(int *)(param_1 + 0x18)) {
          piVar7 = (int *)*piVar10;
          do {
            if (*piVar7 != -1) break;
            iVar8 = iVar8 + 1;
            piVar7 = piVar7 + 2;
          } while (iVar8 <= *(int *)(param_1 + 0x18));
        }
        bVar3 = false;
        if (iVar8 <= *(int *)(param_1 + 0x18)) {
          do {
            bVar2 = bVar3;
            puVar9 = (undefined4 *)(iVar8 * 8 + *piVar10);
            uVar1 = puVar9[1];
            uVar5 = (**(code **)(*param_3 + 0x10))(param_3,*puVar9,uVar1);
            if ((uVar5 & 0xffffffff) == 0) {
              bVar2 = true;
            }
            else {
              fn_82D000A0(param_1 + 0x1c,uVar1,uVar5);
            }
            iVar8 = iVar8 + 1;
            if (iVar8 <= *(int *)(param_1 + 0x18)) {
              piVar7 = (int *)(iVar8 * 8 + *piVar10);
              do {
                if (*piVar7 != -1) break;
                iVar8 = iVar8 + 1;
                piVar7 = piVar7 + 2;
              } while (iVar8 <= *(int *)(param_1 + 0x18));
            }
            bVar3 = bVar2;
          } while (iVar8 <= *(int *)(param_1 + 0x18));
        }
        if (bVar2) {
          return 0;
        }
      }
      return *(undefined4 *)(param_1 + 8);
    }
  }
  return 0;
}

