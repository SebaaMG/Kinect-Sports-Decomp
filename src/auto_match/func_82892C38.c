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
extern int fn_8265C9E0();
extern int fn_8288E810();
extern int fn_8288EBC8();
extern int fn_828916D0();
extern int fn_82897BD0();
extern int fn_828A12E8();
extern int fn_828BE158();
extern int fn_828C9758();
extern int fn_828C99A0();
extern int fn_828CB310();
extern int fn_828E9D78();
extern int fn_828EA790();


void fn_82892C38(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar6;
  undefined8 uVar3;
  char cVar9;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *puVar7;
  uint uVar8;
  int aiStack_40 [16];
  
  iVar6 = fn_828A12E8(param_1[0x14]);
  uVar3 = (**(code **)(*param_1 + 0xc))(param_1);
  if (*(int *)(iVar6 + 0x74) != 0) {
    puVar7 = (undefined4 *)0x0;
    aiStack_40[0] = **(int **)(iVar6 + 0x70);
    if ((int *)aiStack_40[0] != *(int **)(iVar6 + 0x70)) {
      do {
        piVar1 = *(int **)(aiStack_40[0] + 0x10);
        cVar9 = (**(code **)(*piVar1 + 0x30))(piVar1,param_1);
        if (cVar9 != '\0') {
          uVar4 = fn_828CB310();
          cVar9 = fn_828C9758(uVar4,piVar1,uVar3);
          if (cVar9 != '\0') {
            if (puVar7 == (undefined4 *)0x0) {
              uVar5 = fn_8265C9E0(0x4c0);
              if ((uVar5 & 0xffffffff) == 0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = (undefined4 *)fn_8288E810(uVar5,param_1);
              }
            }
            cVar9 = fn_8288EBC8(piVar1,0,param_1);
            if (cVar9 != '\0') {
              cVar9 = fn_828916D0(puVar7,param_1[0x14],piVar1);
              uVar4 = fn_828CB310();
              fn_828C99A0(uVar4,piVar1,uVar3,cVar9 != '\0');
            }
            uVar8 = fn_828E9D78(puVar7 + 0x125);
            if (900 < uVar8) {
              iVar2 = param_1[0x14];
              uVar4 = fn_82897BD0(param_1);
              fn_828BE158(iVar2,puVar7,uVar4,1);
              puVar7 = (undefined4 *)0x0;
            }
          }
        }
        fn_828EA790(aiStack_40);
      } while (aiStack_40[0] != *(int *)(iVar6 + 0x70));
      if (puVar7 != (undefined4 *)0x0) {
        if (*(char *)(puVar7 + 0x124) == '\0') {
          (**(code **)*puVar7)(puVar7,1);
        }
        else {
          iVar6 = param_1[0x14];
          uVar3 = fn_82897BD0(param_1);
          fn_828BE158(iVar6,puVar7,uVar3,1);
        }
      }
    }
  }
  return;
}

