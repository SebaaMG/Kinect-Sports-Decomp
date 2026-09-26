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
extern int fn_82CE6310();
extern int fn_82DFA668();
extern unsigned int lbl_82145D8C;
extern unsigned int lbl_82145D9C;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82DFA7A0(undefined4 *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &lbl_82145D9C;
  *(undefined2 *)((int)param_1 + 6) = 1;
  uVar2 = lbl_821AAD20;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  cVar1 = *(char *)(param_2 + 0x20);
  iVar3 = fn_82CE5410();
  if ((int)(param_1[6] & 0x3fffffff) < (int)cVar1) {
    lVar6 = ((ulonglong)(uint)param_1[6] & 0x3fffffff) << 1;
    if ((int)lVar6 <= (int)cVar1) {
      lVar6 = (longlong)cVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 4,lVar6,4);
  }
  param_1[5] = (int)cVar1;
  iVar3 = 0;
  if (0 < (int)param_1[5]) {
    iVar7 = 0;
    do {
      iVar4 = fn_82CE5410();
      puVar5 = (undefined4 *)
               (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x1c);
      *(undefined2 *)(puVar5 + 1) = 0x1c;
      *(undefined2 *)((int)puVar5 + 6) = 1;
      *puVar5 = &lbl_82145D8C;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0x80000000;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      fn_82DFA668(puVar5,param_3);
      iVar3 = iVar3 + 1;
      *(undefined4 **)(param_1[4] + iVar7) = puVar5;
      iVar7 = iVar7 + 4;
    } while (iVar3 < (int)param_1[5]);
  }
  return param_1;
}

