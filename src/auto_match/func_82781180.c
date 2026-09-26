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
extern int fn_8277C338();
extern int fn_8277E998();
extern int fn_8277E9F8();
extern int fn_827808F8();
extern int fn_82780C88();
extern int fn_827810A8();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82781180(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  bool bVar2;
  char cVar4;
  int iVar3;
  longlong lVar5;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  
  uStack_40 = (uint)param_2 & 0xbfffffff;
  uStack_3c = (uint)param_3 & 0xbfffffff;
  uStack_38 = (uint)param_4 & 0xbfffffff;
  if ((param_2 & 0xbfffffff) == (param_3 & 0xbfffffff)) {
    return;
  }
  if ((param_3 & 0xbfffffff) == (param_4 & 0xbfffffff)) {
    return;
  }
  if ((param_4 & 0xbfffffff) == (param_2 & 0xbfffffff)) {
    return;
  }
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(uint *)(param_1 + 0x184) != *(uint *)(param_1 + 0x1c4)) {
      lVar5 = (ulonglong)*(uint *)(param_1 + 0x184) - 1;
      puVar1 = (uint *)(*(int *)(((uint)((ulonglong)lVar5 >> 8) & 0xfffffc) +
                                *(int *)(param_1 + 400)) + ((uint)lVar5 & 0x3ff) * 0xc);
      if ((((ulonglong)puVar1[1] == (param_3 & 0xbfffffff)) &&
          ((ulonglong)*puVar1 == (param_4 & 0xbfffffff))) ||
         (((ulonglong)puVar1[2] == (param_4 & 0xbfffffff) &&
          ((ulonglong)*puVar1 == (param_3 & 0xbfffffff))))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (cVar4 = fn_8277C338(param_1,param_2), cVar4 != '\0')) {
        iVar3 = param_1 + 0x194;
        if (((param_2 & 0xffffffff) >> 0x1e & 1) == 0) {
          iVar3 = param_1 + 0x1a4;
        }
        fn_8277E998(iVar3,&uStack_40);
        goto LAB_82781318;
      }
      if (((3 < *(uint *)(param_1 + 0x194)) && (3 < *(uint *)(param_1 + 0x1a4))) &&
         (1 < *(int *)(param_1 + 0x1c8))) {
        if (*(uint *)(param_1 + 0x1c4) < *(uint *)(param_1 + 0x184)) {
          *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x1c4);
        }
        iVar3 = *(int *)(param_1 + 0x1c8);
        if ((iVar3 == 3) || (iVar3 == 4)) {
          fn_827808F8(param_1);
        }
        else if (iVar3 == 2) {
          fn_82780C88(param_1);
        }
      }
      *(undefined4 *)(param_1 + 0x194) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x1d0) = 0;
    }
    fn_827810A8(param_1,param_2,param_3,param_4);
  }
LAB_82781318:
  fn_8277E9F8(param_1 + 0x184,&uStack_40);
  return;
}

