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
extern int fn_82CE5410();
extern int fn_82D8A228();
extern int fn_82DF06C0();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134E74;
extern unsigned int lbl_82134E80;
extern unsigned int lbl_82134E8C;
extern unsigned int lbl_82134EA0;
extern unsigned int lbl_82141EE8;
extern unsigned int lbl_8214344C;
extern unsigned int lbl_82143468;
extern unsigned int lbl_82143474;
extern unsigned int lbl_82143488;
extern unsigned int lbl_82143494;
extern unsigned int lbl_821434A4;


void fn_82DF0430(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &lbl_82143494;
  param_1[2] = &lbl_82143488;
  param_1[3] = &lbl_82143474;
  param_1[4] = &lbl_82143468;
  puVar5 = param_1 + 0xc;
  param_1[5] = &lbl_821434A4;
  iVar2 = 0;
  param_1[0xc] = &lbl_8214344C;
  if (0 < (int)param_1[0xe]) {
    iVar6 = 0;
    do {
      puVar1 = (undefined4 *)fn_82DF06C0(*(undefined4 *)(iVar6 + param_1[0xd]));
      iVar4 = 0;
      if (*(ushort *)(puVar1 + 1) != 0) {
        piVar3 = (int *)*puVar1;
        do {
          if ((undefined4 *)*piVar3 == puVar5) {
            if (-1 < iVar4) {
              fn_82D8A228(*(undefined4 *)(iVar6 + param_1[0xd]),puVar5);
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar4 < (int)(uint)*(ushort *)(puVar1 + 1));
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar2 < (int)param_1[0xe]);
  }
  iVar2 = fn_82CE5410();
  piVar3 = *(int **)(iVar2 + 0x10);
  param_1[0xe] = 0;
  if ((param_1[0xf] & 0x80000000) == 0) {
    (**(code **)(*piVar3 + 0x10))(piVar3,param_1[0xd],param_1[0xf] & 0x3fffffff,4);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  *puVar5 = &lbl_82141EE8;
  param_1[5] = &lbl_82134E80;
  param_1[4] = &lbl_82134EA0;
  param_1[3] = &lbl_82134E8C;
  param_1[2] = &lbl_82134E74;
  *param_1 = &lbl_8212FC60;
  return;
}

