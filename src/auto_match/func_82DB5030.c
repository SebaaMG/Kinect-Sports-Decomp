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
extern unsigned int *auStack_40;
extern int fn_825A4488();
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA4B8();
extern unsigned int iStack_38;


void fn_82DB5030(int param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_40 [8];
  int iStack_38;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_825A4488(auStack_40,param_3);
    if (0 < (int)param_3) {
      puVar6 = (undefined4 *)(param_2 + -4);
      do {
        puVar6 = puVar6 + 1;
        uVar1 = *puVar6;
        iVar2 = fn_82CE5410();
        fn_82CEA160(auStack_40,*(undefined4 *)(iVar2 + 0x10),uVar1,0);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      iVar7 = 0;
      do {
        iVar8 = iVar7 + *(int *)(param_1 + 0x30);
        iVar3 = fn_82CEA220(auStack_40,*(undefined4 *)(iVar8 + 0xc));
        iVar4 = fn_82CEA220(auStack_40,*(undefined4 *)(iVar8 + 0x10));
        if ((iVar3 <= iStack_38) || (iVar4 <= iStack_38)) {
          iVar3 = *(int *)(iVar8 + 0xc);
          if (*(char *)(iVar3 + 0xe8) == '\x05') {
            iVar3 = *(int *)(iVar8 + 0x10);
          }
          (**(code **)(**(int **)(iVar8 + 0x14) + 0x20))
                    (*(int **)(iVar8 + 0x14),*(undefined4 *)(iVar3 + 0xcc),iVar8 + 0x18);
          iVar3 = *(int *)(param_1 + 0x34) + -1;
          *(int *)(param_1 + 0x34) = iVar3;
          if (iVar3 != iVar2) {
            puVar5 = (undefined8 *)(iVar7 + *(int *)(param_1 + 0x30));
            iVar3 = (iVar3 * 0x70 + *(int *)(param_1 + 0x30)) - (int)puVar5;
            lVar9 = 0xe;
            do {
              *puVar5 = *(undefined8 *)(iVar3 + (int)puVar5);
              puVar5 = puVar5 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          iVar2 = iVar2 + -1;
          iVar7 = iVar7 + -0x70;
        }
        iVar2 = iVar2 + 1;
        iVar7 = iVar7 + 0x70;
      } while (iVar2 < *(int *)(param_1 + 0x34));
    }
    iVar2 = fn_82CE5410();
    fn_82CEA4B8(auStack_40,*(undefined4 *)(iVar2 + 0x10));
    fn_82BA02A8(auStack_40);
  }
  return;
}

